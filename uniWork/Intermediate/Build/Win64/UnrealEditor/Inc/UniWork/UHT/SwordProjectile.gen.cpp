// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordProjectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSwordProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UNIWORK_API UClass* Z_Construct_UClass_ASwordProjectile();
UNIWORK_API UClass* Z_Construct_UClass_ASwordProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_UniWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASwordProjectile Function OnProjectileHit ********************************
struct Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics
{
	struct SwordProjectile_eventOnProjectileHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwordProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnProjectileHit constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnProjectileHit constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnProjectileHit Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwordProjectile_eventOnProjectileHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwordProjectile_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwordProjectile_eventOnProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwordProjectile_eventOnProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwordProjectile_eventOnProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::PropPointers) < 2048);
// ********** End Function OnProjectileHit Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASwordProjectile, nullptr, "OnProjectileHit", 	Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::SwordProjectile_eventOnProjectileHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::SwordProjectile_eventOnProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASwordProjectile_OnProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASwordProjectile_OnProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASwordProjectile::execOnProjectileHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ASwordProjectile Function OnProjectileHit **********************************

// ********** Begin Class ASwordProjectile *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASwordProjectile;
UClass* ASwordProjectile::GetPrivateStaticClass()
{
	using TClass = ASwordProjectile;
	if (!Z_Registration_Info_UClass_ASwordProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SwordProjectile"),
			Z_Registration_Info_UClass_ASwordProjectile.InnerSingleton,
			StaticRegisterNativesASwordProjectile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASwordProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_ASwordProjectile_NoRegister()
{
	return ASwordProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASwordProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SwordProjectile.h" },
		{ "ModuleRelativePath", "SwordProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwordProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASwordProjectile constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASwordProjectile constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnProjectileHit"), .Pointer = &ASwordProjectile::execOnProjectileHit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwordProjectile_OnProjectileHit, "OnProjectileHit" }, // 2347866048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwordProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASwordProjectile_Statics

// ********** Begin Class ASwordProjectile Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwordProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwordProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwordProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwordProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwordProjectile_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwordProjectile_Statics::PropPointers) < 2048);
// ********** End Class ASwordProjectile Property Definitions **************************************
UObject* (*const Z_Construct_UClass_ASwordProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UniWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwordProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwordProjectile_Statics::ClassParams = {
	&ASwordProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASwordProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASwordProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwordProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwordProjectile_Statics::Class_MetaDataParams)
};
void ASwordProjectile::StaticRegisterNativesASwordProjectile()
{
	UClass* Class = ASwordProjectile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASwordProjectile_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASwordProjectile()
{
	if (!Z_Registration_Info_UClass_ASwordProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwordProjectile.OuterSingleton, Z_Construct_UClass_ASwordProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASwordProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASwordProjectile);
ASwordProjectile::~ASwordProjectile() {}
// ********** End Class ASwordProjectile ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h__Script_UniWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASwordProjectile, ASwordProjectile::StaticClass, TEXT("ASwordProjectile"), &Z_Registration_Info_UClass_ASwordProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwordProjectile), 973959949U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h__Script_UniWork_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h__Script_UniWork_3041467167{
	TEXT("/Script/UniWork"),
	Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h__Script_UniWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h__Script_UniWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
