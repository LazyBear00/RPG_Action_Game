// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Action_Game/SensorLight.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensorLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ASensorLight();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ASensorLight_NoRegister();
RPG_ACTION_GAME_API UEnum* Z_Construct_UEnum_RPG_Action_Game_ESensorLightState();
UPackage* Z_Construct_UPackage__Script_RPG_Action_Game();
// End Cross Module References

// Begin Enum ESensorLightState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESensorLightState;
static UEnum* ESensorLightState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESensorLightState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESensorLightState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPG_Action_Game_ESensorLightState, (UObject*)Z_Construct_UPackage__Script_RPG_Action_Game(), TEXT("ESensorLightState"));
	}
	return Z_Registration_Info_UEnum_ESensorLightState.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UEnum* StaticEnum<ESensorLightState>()
{
	return ESensorLightState_StaticEnum();
}
struct Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Name", "ESensorLightState::Closed" },
		{ "Detected.Name", "ESensorLightState::Detected" },
		{ "ModuleRelativePath", "SensorLight.h" },
		{ "Opened.Name", "ESensorLightState::Opened" },
		{ "UnDetected.Name", "ESensorLightState::UnDetected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESensorLightState::Detected", (int64)ESensorLightState::Detected },
		{ "ESensorLightState::UnDetected", (int64)ESensorLightState::UnDetected },
		{ "ESensorLightState::Opened", (int64)ESensorLightState::Opened },
		{ "ESensorLightState::Closed", (int64)ESensorLightState::Closed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPG_Action_Game,
	nullptr,
	"ESensorLightState",
	"ESensorLightState",
	Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPG_Action_Game_ESensorLightState()
{
	if (!Z_Registration_Info_UEnum_ESensorLightState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESensorLightState.InnerSingleton, Z_Construct_UEnum_RPG_Action_Game_ESensorLightState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESensorLightState.InnerSingleton;
}
// End Enum ESensorLightState

// Begin Class ASensorLight Function ActivateStateLight
struct Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics
{
	struct SensorLight_eventActivateStateLight_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Activates the state light, adjusting its behavior over time.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the state light, adjusting its behavior over time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventActivateStateLight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "ActivateStateLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::SensorLight_eventActivateStateLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::SensorLight_eventActivateStateLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_ActivateStateLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_ActivateStateLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execActivateStateLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateStateLight(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ASensorLight Function ActivateStateLight

// Begin Class ASensorLight Function DeactivateStateLight
struct Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics
{
	struct SensorLight_eventDeactivateStateLight_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deactivates the state light, adjusting its behavior over time.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deactivates the state light, adjusting its behavior over time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventDeactivateStateLight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "DeactivateStateLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::SensorLight_eventDeactivateStateLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::SensorLight_eventDeactivateStateLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_DeactivateStateLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_DeactivateStateLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execDeactivateStateLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateStateLight(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ASensorLight Function DeactivateStateLight

// Begin Class ASensorLight Function DecreaseStateLight
struct Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics
{
	struct SensorLight_eventDecreaseStateLight_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decreases the light's intensity over time.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decreases the light's intensity over time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventDecreaseStateLight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "DecreaseStateLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::SensorLight_eventDecreaseStateLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::SensorLight_eventDecreaseStateLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_DecreaseStateLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_DecreaseStateLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execDecreaseStateLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseStateLight(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ASensorLight Function DecreaseStateLight

// Begin Class ASensorLight Function GetPointLight
struct Z_Construct_UFunction_ASensorLight_GetPointLight_Statics
{
	struct SensorLight_eventGetPointLight_Parms
	{
		UPointLightComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the PointLight component.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the PointLight component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventGetPointLight_Parms, ReturnValue), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "GetPointLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::SensorLight_eventGetPointLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::SensorLight_eventGetPointLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_GetPointLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_GetPointLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execGetPointLight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPointLightComponent**)Z_Param__Result=P_THIS->GetPointLight();
	P_NATIVE_END;
}
// End Class ASensorLight Function GetPointLight

// Begin Class ASensorLight Function IncreaseStateLight
struct Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics
{
	struct SensorLight_eventIncreaseStateLight_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases the light's intensity over time.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases the light's intensity over time." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventIncreaseStateLight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "IncreaseStateLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::SensorLight_eventIncreaseStateLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::SensorLight_eventIncreaseStateLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_IncreaseStateLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_IncreaseStateLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execIncreaseStateLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseStateLight(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ASensorLight Function IncreaseStateLight

// Begin Class ASensorLight Function IsSensorState
struct Z_Construct_UFunction_ASensorLight_IsSensorState_Statics
{
	struct SensorLight_eventIsSensorState_Parms
	{
		ESensorLightState CheckState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the current sensor light state matches the specified state.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the current sensor light state matches the specified state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_CheckState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_CheckState = { "CheckState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventIsSensorState_Parms, CheckState), Z_Construct_UEnum_RPG_Action_Game_ESensorLightState, METADATA_PARAMS(0, nullptr) }; // 2442874057
void Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SensorLight_eventIsSensorState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SensorLight_eventIsSensorState_Parms), &Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_CheckState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_CheckState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "IsSensorState", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::SensorLight_eventIsSensorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::SensorLight_eventIsSensorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_IsSensorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_IsSensorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execIsSensorState)
{
	P_GET_ENUM(ESensorLightState,Z_Param_CheckState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSensorState(ESensorLightState(Z_Param_CheckState));
	P_NATIVE_END;
}
// End Class ASensorLight Function IsSensorState

// Begin Class ASensorLight Function ModifyStateLight
struct Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics
{
	struct SensorLight_eventModifyStateLight_Parms
	{
		float DeltaTime;
		bool bIncreasing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Modifies the light's intensity either by increasing or decreasing based on the flag.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies the light's intensity either by increasing or decreasing based on the flag." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bIncreasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncreasing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventModifyStateLight_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_bIncreasing_SetBit(void* Obj)
{
	((SensorLight_eventModifyStateLight_Parms*)Obj)->bIncreasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_bIncreasing = { "bIncreasing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SensorLight_eventModifyStateLight_Parms), &Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_bIncreasing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::NewProp_bIncreasing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "ModifyStateLight", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::SensorLight_eventModifyStateLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::SensorLight_eventModifyStateLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_ModifyStateLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_ModifyStateLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execModifyStateLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bIncreasing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyStateLight(Z_Param_DeltaTime,Z_Param_bIncreasing);
	P_NATIVE_END;
}
// End Class ASensorLight Function ModifyStateLight

// Begin Class ASensorLight Function OnStateBeginOverlap
struct Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics
{
	struct SensorLight_eventOnStateBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when overlapping starts.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when overlapping starts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SensorLight_eventOnStateBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SensorLight_eventOnStateBeginOverlap_Parms), &Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "OnStateBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::SensorLight_eventOnStateBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::SensorLight_eventOnStateBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execOnStateBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASensorLight Function OnStateBeginOverlap

// Begin Class ASensorLight Function OnStateEndOverlap
struct Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics
{
	struct SensorLight_eventOnStateEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when overlapping ends.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when overlapping ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventOnStateEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "OnStateEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::SensorLight_eventOnStateEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::SensorLight_eventOnStateEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_OnStateEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_OnStateEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execOnStateEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ASensorLight Function OnStateEndOverlap

// Begin Class ASensorLight Function SetSensorState
struct Z_Construct_UFunction_ASensorLight_SetSensorState_Statics
{
	struct SensorLight_eventSetSensorState_Parms
	{
		ESensorLightState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the sensor light to a new state.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the sensor light to a new state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SensorLight_eventSetSensorState_Parms, NewState), Z_Construct_UEnum_RPG_Action_Game_ESensorLightState, METADATA_PARAMS(0, nullptr) }; // 2442874057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASensorLight, nullptr, "SetSensorState", nullptr, nullptr, Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::SensorLight_eventSetSensorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::SensorLight_eventSetSensorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASensorLight_SetSensorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASensorLight_SetSensorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASensorLight::execSetSensorState)
{
	P_GET_ENUM(ESensorLightState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSensorState(ESensorLightState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class ASensorLight Function SetSensorState

// Begin Class ASensorLight
void ASensorLight::StaticRegisterNativesASensorLight()
{
	UClass* Class = ASensorLight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateStateLight", &ASensorLight::execActivateStateLight },
		{ "DeactivateStateLight", &ASensorLight::execDeactivateStateLight },
		{ "DecreaseStateLight", &ASensorLight::execDecreaseStateLight },
		{ "GetPointLight", &ASensorLight::execGetPointLight },
		{ "IncreaseStateLight", &ASensorLight::execIncreaseStateLight },
		{ "IsSensorState", &ASensorLight::execIsSensorState },
		{ "ModifyStateLight", &ASensorLight::execModifyStateLight },
		{ "OnStateBeginOverlap", &ASensorLight::execOnStateBeginOverlap },
		{ "OnStateEndOverlap", &ASensorLight::execOnStateEndOverlap },
		{ "SetSensorState", &ASensorLight::execSetSensorState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASensorLight);
UClass* Z_Construct_UClass_ASensorLight_NoRegister()
{
	return ASensorLight::StaticClass();
}
struct Z_Construct_UClass_ASensorLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SensorLight.h" },
		{ "ModuleRelativePath", "SensorLight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorLightState_MetaData[] = {
		{ "Category", "Sensor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current state of the sensor light.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current state of the sensor light." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "Category", "Lighting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A pointer to the PointLight component, representing a point light in the scene.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pointer to the PointLight component, representing a point light in the scene." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SensorLight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityAmount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current intensity amount for the light.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current intensity amount for the light." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinIntensityAmount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum allowable intensity for the light.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowable intensity for the light." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIntensityAmount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum allowable intensity for the light.\n" },
#endif
		{ "ModuleRelativePath", "SensorLight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowable intensity for the light." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SensorLightState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SensorLightState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntensityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinIntensityAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIntensityAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASensorLight_ActivateStateLight, "ActivateStateLight" }, // 4042450863
		{ &Z_Construct_UFunction_ASensorLight_DeactivateStateLight, "DeactivateStateLight" }, // 1148792039
		{ &Z_Construct_UFunction_ASensorLight_DecreaseStateLight, "DecreaseStateLight" }, // 439848516
		{ &Z_Construct_UFunction_ASensorLight_GetPointLight, "GetPointLight" }, // 1056426692
		{ &Z_Construct_UFunction_ASensorLight_IncreaseStateLight, "IncreaseStateLight" }, // 246094866
		{ &Z_Construct_UFunction_ASensorLight_IsSensorState, "IsSensorState" }, // 2221249321
		{ &Z_Construct_UFunction_ASensorLight_ModifyStateLight, "ModifyStateLight" }, // 2717243326
		{ &Z_Construct_UFunction_ASensorLight_OnStateBeginOverlap, "OnStateBeginOverlap" }, // 3117082151
		{ &Z_Construct_UFunction_ASensorLight_OnStateEndOverlap, "OnStateEndOverlap" }, // 1172766306
		{ &Z_Construct_UFunction_ASensorLight_SetSensorState, "SetSensorState" }, // 1093449221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASensorLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_SensorLightState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_SensorLightState = { "SensorLightState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, SensorLightState), Z_Construct_UEnum_RPG_Action_Game_ESensorLightState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorLightState_MetaData), NewProp_SensorLightState_MetaData) }; // 2442874057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_IntensityAmount = { "IntensityAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, IntensityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityAmount_MetaData), NewProp_IntensityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_MinIntensityAmount = { "MinIntensityAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, MinIntensityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinIntensityAmount_MetaData), NewProp_MinIntensityAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASensorLight_Statics::NewProp_MaxIntensityAmount = { "MaxIntensityAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASensorLight, MaxIntensityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIntensityAmount_MetaData), NewProp_MaxIntensityAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASensorLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_SensorLightState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_SensorLightState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_PointLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_IntensityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_MinIntensityAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASensorLight_Statics::NewProp_MaxIntensityAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensorLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASensorLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG_Action_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensorLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASensorLight_Statics::ClassParams = {
	&ASensorLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASensorLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASensorLight_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASensorLight_Statics::Class_MetaDataParams), Z_Construct_UClass_ASensorLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASensorLight()
{
	if (!Z_Registration_Info_UClass_ASensorLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASensorLight.OuterSingleton, Z_Construct_UClass_ASensorLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASensorLight.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UClass* StaticClass<ASensorLight>()
{
	return ASensorLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASensorLight);
ASensorLight::~ASensorLight() {}
// End Class ASensorLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESensorLightState_StaticEnum, TEXT("ESensorLightState"), &Z_Registration_Info_UEnum_ESensorLightState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2442874057U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASensorLight, ASensorLight::StaticClass, TEXT("ASensorLight"), &Z_Registration_Info_UClass_ASensorLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASensorLight), 4131355826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_785760343(TEXT("/Script/RPG_Action_Game"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_SensorLight_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
