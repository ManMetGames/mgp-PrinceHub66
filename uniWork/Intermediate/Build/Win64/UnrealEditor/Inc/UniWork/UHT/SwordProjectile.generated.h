// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SwordProjectile.h"

#ifdef UNIWORK_SwordProjectile_generated_h
#error "SwordProjectile.generated.h already included, missing '#pragma once' in SwordProjectile.h"
#endif
#define UNIWORK_SwordProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ASwordProjectile *********************************************************
#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProjectileHit);


struct Z_Construct_UClass_ASwordProjectile_Statics;
UNIWORK_API UClass* Z_Construct_UClass_ASwordProjectile_NoRegister();

#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordProjectile(); \
	friend struct ::Z_Construct_UClass_ASwordProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNIWORK_API UClass* ::Z_Construct_UClass_ASwordProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ASwordProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniWork"), Z_Construct_UClass_ASwordProjectile_NoRegister) \
	DECLARE_SERIALIZER(ASwordProjectile)


#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASwordProjectile(ASwordProjectile&&) = delete; \
	ASwordProjectile(const ASwordProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordProjectile) \
	NO_API virtual ~ASwordProjectile();


#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_9_PROLOG
#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASwordProjectile;

// ********** End Class ASwordProjectile ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_SwordProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
