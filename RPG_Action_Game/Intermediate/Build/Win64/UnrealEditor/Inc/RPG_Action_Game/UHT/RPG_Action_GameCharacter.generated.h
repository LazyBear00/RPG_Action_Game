// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPG_Action_GameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_ACTION_GAME_RPG_Action_GameCharacter_generated_h
#error "RPG_Action_GameCharacter.generated.h already included, missing '#pragma once' in RPG_Action_GameCharacter.h"
#endif
#define RPG_ACTION_GAME_RPG_Action_GameCharacter_generated_h

#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGainExperience); \
	DECLARE_FUNCTION(execIncreaseArmor); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execDamage);


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPG_Action_GameCharacter(); \
	friend struct Z_Construct_UClass_ARPG_Action_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPG_Action_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_Action_Game"), NO_API) \
	DECLARE_SERIALIZER(ARPG_Action_GameCharacter)


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_Action_GameCharacter(ARPG_Action_GameCharacter&&); \
	ARPG_Action_GameCharacter(const ARPG_Action_GameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPG_Action_GameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPG_Action_GameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPG_Action_GameCharacter) \
	NO_API virtual ~ARPG_Action_GameCharacter();


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_20_PROLOG
#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_ACTION_GAME_API UClass* StaticClass<class ARPG_Action_GameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
