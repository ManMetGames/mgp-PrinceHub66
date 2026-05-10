// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniWorkCharacter.h"

#ifdef UNIWORK_UniWorkCharacter_generated_h
#error "UniWorkCharacter.generated.h already included, missing '#pragma once' in UniWorkCharacter.h"
#endif
#define UNIWORK_UniWorkCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AUniWorkCharacter ********************************************************
#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AUniWorkCharacter_Statics;
UNIWORK_API UClass* Z_Construct_UClass_AUniWorkCharacter_NoRegister();

#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUniWorkCharacter(); \
	friend struct ::Z_Construct_UClass_AUniWorkCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNIWORK_API UClass* ::Z_Construct_UClass_AUniWorkCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AUniWorkCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniWork"), Z_Construct_UClass_AUniWorkCharacter_NoRegister) \
	DECLARE_SERIALIZER(AUniWorkCharacter)


#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUniWorkCharacter(AUniWorkCharacter&&) = delete; \
	AUniWorkCharacter(const AUniWorkCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniWorkCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniWorkCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUniWorkCharacter) \
	NO_API virtual ~AUniWorkCharacter();


#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_23_PROLOG
#define FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUniWorkCharacter;

// ********** End Class AUniWorkCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_david_OneDrive_Documents_Unreal_Projects_uniWork_Source_UniWork_UniWorkCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
