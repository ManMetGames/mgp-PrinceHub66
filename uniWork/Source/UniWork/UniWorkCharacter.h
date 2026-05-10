// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "TimerManager.h"
#include "UniWorkCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class ASwordProjectile;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A basic first person character
 */
UCLASS(abstract)
class AUniWorkCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* FirstPersonMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

protected:

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MouseLookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* SwordFireAction;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<ASwordProjectile> ProjectileClass;

	UPROPERTY()
	ASwordProjectile* ActiveProjectile;

	FTimerHandle GravityResetTimerHandle;

	float NormalGravityScale;

public:
	AUniWorkCharacter();

protected:

	void FireProjectile();

	void RestoreGravity();

	void PerformTeleportSlash();

	void MoveInput(const FInputActionValue& Value);

	void LookInput(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoAim(float Yaw, float Pitch);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpStart();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoJumpEnd();

protected:

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:

	USkeletalMeshComponent* GetFirstPersonMesh() const { return FirstPersonMesh; }

	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
};