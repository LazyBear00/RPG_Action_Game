// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SensorLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPointLightComponent;
class UPrimitiveComponent;
enum class ESensorLightState : uint8;
struct FHitResult;
#ifdef RPG_ACTION_GAME_SensorLight_generated_h
#error "SensorLight.generated.h already included, missing '#pragma once' in SensorLight.h"
#endif
#define RPG_ACTION_GAME_SensorLight_generated_h

#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecreaseStateLight); \
	DECLARE_FUNCTION(execIncreaseStateLight); \
	DECLARE_FUNCTION(execModifyStateLight); \
	DECLARE_FUNCTION(execDeactivateStateLight); \
	DECLARE_FUNCTION(execActivateStateLight); \
	DECLARE_FUNCTION(execOnStateEndOverlap); \
	DECLARE_FUNCTION(execOnStateBeginOverlap); \
	DECLARE_FUNCTION(execGetPointLight); \
	DECLARE_FUNCTION(execIsSensorState); \
	DECLARE_FUNCTION(execSetSensorState);


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASensorLight(); \
	friend struct Z_Construct_UClass_ASensorLight_Statics; \
public: \
	DECLARE_CLASS(ASensorLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_Action_Game"), NO_API) \
	DECLARE_SERIALIZER(ASensorLight)


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASensorLight(ASensorLight&&); \
	ASensorLight(const ASensorLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensorLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensorLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASensorLight) \
	NO_API virtual ~ASensorLight();


#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_51_PROLOG
#define FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_ACTION_GAME_API UClass* StaticClass<class ASensorLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h


#define FOREACH_ENUM_ESENSORLIGHTSTATE(op) \
	op(ESensorLightState::Detected) \
	op(ESensorLightState::UnDetected) \
	op(ESensorLightState::Opened) \
	op(ESensorLightState::Closed) 

enum class ESensorLightState : uint8;
template<> struct TIsUEnumClass<ESensorLightState> { enum { Value = true }; };
template<> RPG_ACTION_GAME_API UEnum* StaticEnum<ESensorLightState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
