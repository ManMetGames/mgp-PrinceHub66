// Copyright Epic Games, Inc. All Rights Reserved.

#include "UniWorkCharacter.h"
#include "SwordProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "InputCoreTypes.h"
#include "DrawDebugHelpers.h"
#include "UniWork.h"
#include "Engine/OverlapResult.h"

AUniWorkCharacter::AUniWorkCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	FirstPersonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));

	FirstPersonMesh->SetupAttachment(GetMesh());
	FirstPersonMesh->SetOnlyOwnerSee(true);
	FirstPersonMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
	FirstPersonMesh->SetCollisionProfileName(FName("NoCollision"));

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	FirstPersonCameraComponent->SetRelativeLocationAndRotation(FVector(-2.8f, 5.89f, 0.0f), FRotator(0.0f, 90.0f, -90.0f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;

	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::WorldSpaceRepresentation;

	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);

	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->AirControl = 0.5f;

	NormalGravityScale = 1.0f;
	GetCharacterMovement()->GravityScale = NormalGravityScale;

	ActiveProjectile = nullptr;
}

void AUniWorkCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindKey(EKeys::E, IE_Pressed, this, &AUniWorkCharacter::FireProjectile);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AUniWorkCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AUniWorkCharacter::DoJumpEnd);

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUniWorkCharacter::MoveInput);

		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AUniWorkCharacter::LookInput);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AUniWorkCharacter::LookInput);
	}
	else
	{
		UE_LOG(LogUniWork, Error, TEXT("'%s' Failed to find an Enhanced Input Component!"), *GetNameSafe(this));
	}
}

void AUniWorkCharacter::FireProjectile()
{
	if (IsValid(ActiveProjectile))
	{
		FVector SavedVelocity = FVector::ZeroVector;

		if (GetCharacterMovement())
		{
			SavedVelocity = GetCharacterMovement()->Velocity;
		}

		FVector ProjectileDirection = ActiveProjectile->GetActorForwardVector();

		FVector TeleportLocation = ActiveProjectile->GetActorLocation();
		TeleportLocation.Z += 50.0f;

		SetActorLocation(TeleportLocation, false, nullptr, ETeleportType::TeleportPhysics);

		if (GetCharacterMovement())
		{
			const float BlinkBoostStrength = 1500.0f;
			const float UpwardBoostStrength = 250.0f;

			FVector BoostVelocity =
				ProjectileDirection * BlinkBoostStrength +
				FVector(0.0f, 0.0f, UpwardBoostStrength);

			GetCharacterMovement()->Velocity = SavedVelocity + BoostVelocity;

			GetCharacterMovement()->GravityScale = 0.25f;

			GetWorldTimerManager().ClearTimer(GravityResetTimerHandle);
			GetWorldTimerManager().SetTimer(
				GravityResetTimerHandle,
				this,
				&AUniWorkCharacter::RestoreGravity,
				0.35f,
				false
			);
		}

		PerformTeleportSlash();

		ActiveProjectile->Destroy();
		ActiveProjectile = nullptr;

		UE_LOG(LogTemp, Warning, TEXT("Teleported with momentum boost and slash"));
		return;
	}

	if (!ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ProjectileClass not set"));
		return;
	}

	FVector SpawnLocation =
		FirstPersonCameraComponent->GetComponentLocation() +
		FirstPersonCameraComponent->GetForwardVector() * 100.0f;

	FRotator SpawnRotation =
		FirstPersonCameraComponent->GetComponentRotation();

	ActiveProjectile = GetWorld()->SpawnActor<ASwordProjectile>(
		ProjectileClass,
		SpawnLocation,
		SpawnRotation
	);

	UE_LOG(LogTemp, Warning, TEXT("Projectile fired"));
}

void AUniWorkCharacter::PerformTeleportSlash()
{
	if (!GetWorld())
	{
		return;
	}

	FVector SlashCenter =
		GetActorLocation() +
		GetActorForwardVector() * 120.0f;

	FVector SlashHalfSize = FVector(100.0f, 120.0f, 80.0f);

	FCollisionShape SlashBox = FCollisionShape::MakeBox(SlashHalfSize);

	TArray<FOverlapResult> HitResults;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	bool bHitAnything = GetWorld()->OverlapMultiByChannel(
		HitResults,
		SlashCenter,
		GetActorRotation().Quaternion(),
		ECC_Pawn,
		SlashBox,
		QueryParams
	);

	DrawDebugBox(
		GetWorld(),
		SlashCenter,
		SlashHalfSize,
		GetActorRotation().Quaternion(),
		FColor::Red,
		false,
		0.15f,
		0,
		1.0f
	);

	if (bHitAnything)
	{
		for (const FOverlapResult& Hit : HitResults)
		{
			AActor* HitActor = Hit.GetActor();

			if (HitActor && HitActor != this)
			{
				UE_LOG(LogTemp, Warning, TEXT("Teleport slash hit: %s"), *HitActor->GetName());
			}
		}
	}
}

void AUniWorkCharacter::RestoreGravity()
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->GravityScale = NormalGravityScale;
	}

	UE_LOG(LogTemp, Warning, TEXT("Gravity restored"));
}

void AUniWorkCharacter::MoveInput(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	DoMove(MovementVector.X, MovementVector.Y);
}

void AUniWorkCharacter::LookInput(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	DoAim(LookAxisVector.X, LookAxisVector.Y);
}

void AUniWorkCharacter::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AUniWorkCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
}

void AUniWorkCharacter::DoJumpStart()
{
	Jump();
}

void AUniWorkCharacter::DoJumpEnd()
{
	StopJumping();
}