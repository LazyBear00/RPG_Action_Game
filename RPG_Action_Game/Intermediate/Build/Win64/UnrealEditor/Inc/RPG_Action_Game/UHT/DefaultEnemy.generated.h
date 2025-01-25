// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_ACTION_GAME_DefaultEnemy_generated_h
#error "DefaultEnemy.generated.h already included, missing '#pragma once' in DefaultEnemy.h"
#endif
#define RPG_ACTION_GAME_DefaultEnemy_generated_h

#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeEnemyDamage);


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultEnemy(); \
	friend struct Z_Construct_UClass_ADefaultEnemy_Statics; \
public: \
	DECLARE_CLASS(ADefaultEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_Action_Game"), NO_API) \
	DECLARE_SERIALIZER(ADefaultEnemy)


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultEnemy(ADefaultEnemy&&); \
	ADefaultEnemy(const ADefaultEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultEnemy) \
	NO_API virtual ~ADefaultEnemy();


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_ACTION_GAME_API UClass* StaticClass<class ADefaultEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
