// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniWorkGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUniWorkGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNIWORK_API UClass* Z_Construct_UClass_AUniWorkGameMode();
UNIWORK_API UClass* Z_Construct_UClass_AUniWorkGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UniWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUniWorkGameMode *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AUniWorkGameMode;
UClass* AUniWorkGameMode::GetPrivateStaticClass()
{
	using TClass = AUniWorkGameMode;
	if (!Z_Registration_Info_UClass_AUniWorkGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UniWorkGameMode"),
			Z_Registration_Info_UClass_AUniWorkGameMode.InnerSingleton,
			StaticRegisterNativesAUniWorkGameMode,
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
	return Z_Registration_Info_UClass_AUniWorkGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUniWorkGameMode_NoRegister()
{
	return AUniWorkGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUniWorkGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UniWorkGameMode.h" },
		{ "ModuleRelativePath", "UniWorkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AUniWorkGameMode constinit property declarations *************************
// ********** End Class AUniWorkGameMode constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniWorkGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AUniWorkGameMode_Statics
UObject* (*const Z_Construct_UClass_AUniWorkGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UniWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUniWorkGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniWorkGameMode_Statics::ClassParams = {
	&AUniWorkGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUniWorkGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUniWorkGameMode_Statics::Class_MetaDataParams)
};
void AUniWorkGameMode::StaticRegisterNativesAUniWorkGameMode()
{
}
UClass* Z_Construct_UClass_AUniWorkGameMode()
{
	if (!Z_Registration_Info_UClass_AUniWorkGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniWorkGameMode.OuterSingleton, Z_Construct_UClass_AUniWorkGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUniWorkGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AUniWorkGameMode);
AUniWorkGameMode::~AUniWorkGameMode() {}
// ********** End Class AUniWorkGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkGameMode_h__Script_UniWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUniWorkGameMode, AUniWorkGameMode::StaticClass, TEXT("AUniWorkGameMode"), &Z_Registration_Info_UClass_AUniWorkGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniWorkGameMode), 3309189234U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkGameMode_h__Script_UniWork_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkGameMode_h__Script_UniWork_2320371101{
	TEXT("/Script/UniWork"),
	Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkGameMode_h__Script_UniWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkGameMode_h__Script_UniWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
