// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniWorkCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUniWorkCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UNIWORK_API UClass* Z_Construct_UClass_AUniWorkCameraManager();
UNIWORK_API UClass* Z_Construct_UClass_AUniWorkCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UniWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUniWorkCameraManager ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AUniWorkCameraManager;
UClass* AUniWorkCameraManager::GetPrivateStaticClass()
{
	using TClass = AUniWorkCameraManager;
	if (!Z_Registration_Info_UClass_AUniWorkCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UniWorkCameraManager"),
			Z_Registration_Info_UClass_AUniWorkCameraManager.InnerSingleton,
			StaticRegisterNativesAUniWorkCameraManager,
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
	return Z_Registration_Info_UClass_AUniWorkCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AUniWorkCameraManager_NoRegister()
{
	return AUniWorkCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUniWorkCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "UniWorkCameraManager.h" },
		{ "ModuleRelativePath", "UniWorkCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AUniWorkCameraManager constinit property declarations ********************
// ********** End Class AUniWorkCameraManager constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniWorkCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AUniWorkCameraManager_Statics
UObject* (*const Z_Construct_UClass_AUniWorkCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_UniWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniWorkCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniWorkCameraManager_Statics::ClassParams = {
	&AUniWorkCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniWorkCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniWorkCameraManager_Statics::Class_MetaDataParams)
};
void AUniWorkCameraManager::StaticRegisterNativesAUniWorkCameraManager()
{
}
UClass* Z_Construct_UClass_AUniWorkCameraManager()
{
	if (!Z_Registration_Info_UClass_AUniWorkCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniWorkCameraManager.OuterSingleton, Z_Construct_UClass_AUniWorkCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniWorkCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AUniWorkCameraManager);
AUniWorkCameraManager::~AUniWorkCameraManager() {}
// ********** End Class AUniWorkCameraManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCameraManager_h__Script_UniWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniWorkCameraManager, AUniWorkCameraManager::StaticClass, TEXT("AUniWorkCameraManager"), &Z_Registration_Info_UClass_AUniWorkCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniWorkCameraManager), 1223104940U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCameraManager_h__Script_UniWork_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCameraManager_h__Script_UniWork_154970126{
	TEXT("/Script/UniWork"),
	Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCameraManager_h__Script_UniWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCameraManager_h__Script_UniWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
