// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_ACTION_GAME_DefaultWeapon_generated_h
#error "DefaultWeapon.generated.h already included, missing '#pragma once' in DefaultWeapon.h"
#endif
#define RPG_ACTION_GAME_DefaultWeapon_generated_h

#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultWeapon(); \
	friend struct Z_Construct_UClass_ADefaultWeapon_Statics; \
public: \
	DECLARE_CLASS(ADefaultWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_Action_Game"), NO_API) \
	DECLARE_SERIALIZER(ADefaultWeapon)


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultWeapon(ADefaultWeapon&&); \
	ADefaultWeapon(const ADefaultWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultWeapon) \
	NO_API virtual ~ADefaultWeapon();


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_18_PROLOG
#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_ACTION_GAME_API UClass* StaticClass<class ADefaultWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::E_Default) \
	op(EWeaponType::E_Dagger) \
	op(EWeaponType::E_Sword) \
	op(EWeaponType::E_Axe) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> RPG_ACTION_GAME_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
