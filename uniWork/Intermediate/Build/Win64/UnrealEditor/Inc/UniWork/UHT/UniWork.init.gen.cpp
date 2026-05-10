// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniWork_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	UNIWORK_API UFunction* Z_Construct_UDelegateFunction_UniWork_BulletCountUpdatedDelegate__DelegateSignature();
	UNIWORK_API UFunction* Z_Construct_UDelegateFunction_UniWork_DamagedDelegate__DelegateSignature();
	UNIWORK_API UFunction* Z_Construct_UDelegateFunction_UniWork_PawnDeathDelegate__DelegateSignature();
	UNIWORK_API UFunction* Z_Construct_UDelegateFunction_UniWork_SprintStateChangedDelegate__DelegateSignature();
	UNIWORK_API UFunction* Z_Construct_UDelegateFunction_UniWork_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UniWork;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UniWork()
	{
		if (!Z_Registration_Info_UPackage__Script_UniWork.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_UniWork_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UniWork_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UniWork_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UniWork_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UniWork_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/UniWork",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x57E26B1D,
			0xB3C1E6E8,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UniWork.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_UniWork.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UniWork(Z_Construct_UPackage__Script_UniWork, TEXT("/Script/UniWork"), Z_Registration_Info_UPackage__Script_UniWork, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x57E26B1D, 0xB3C1E6E8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
