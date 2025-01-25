// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Action_Game/RPG_Action_GameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_Action_GameCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ADefaultWeapon_NoRegister();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ARPG_Action_GameCharacter();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ARPG_Action_GameCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG_Action_Game();
// End Cross Module References

// Begin Class ARPG_Action_GameCharacter Function Damage
struct Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics
{
	struct RPG_Action_GameCharacter_eventDamage_Parms
	{
		float InDamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a function to apply damage to the character, callable from Blueprints and categorized under \"Health\"\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a function to apply damage to the character, callable from Blueprints and categorized under \"Health\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::NewProp_InDamageAmount = { "InDamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPG_Action_GameCharacter_eventDamage_Parms, InDamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::NewProp_InDamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPG_Action_GameCharacter, nullptr, "Damage", nullptr, nullptr, Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::RPG_Action_GameCharacter_eventDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::RPG_Action_GameCharacter_eventDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPG_Action_GameCharacter::execDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Damage(Z_Param_InDamageAmount);
	P_NATIVE_END;
}
// End Class ARPG_Action_GameCharacter Function Damage

// Begin Class ARPG_Action_GameCharacter Function GainExperience
struct Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics
{
	struct RPG_Action_GameCharacter_eventGainExperience_Parms
	{
		float ExpAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::NewProp_ExpAmount = { "ExpAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPG_Action_GameCharacter_eventGainExperience_Parms, ExpAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::NewProp_ExpAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPG_Action_GameCharacter, nullptr, "GainExperience", nullptr, nullptr, Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::RPG_Action_GameCharacter_eventGainExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::RPG_Action_GameCharacter_eventGainExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPG_Action_GameCharacter::execGainExperience)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExpAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GainExperience(Z_Param_ExpAmount);
	P_NATIVE_END;
}
// End Class ARPG_Action_GameCharacter Function GainExperience

// Begin Class ARPG_Action_GameCharacter Function Heal
struct Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics
{
	struct RPG_Action_GameCharacter_eventHeal_Parms
	{
		float InHealAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a function to heal the character, callable from Blueprints and categorized under \"Health\"\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a function to heal the character, callable from Blueprints and categorized under \"Health\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::NewProp_InHealAmount = { "InHealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPG_Action_GameCharacter_eventHeal_Parms, InHealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::NewProp_InHealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPG_Action_GameCharacter, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::RPG_Action_GameCharacter_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::RPG_Action_GameCharacter_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPG_Action_GameCharacter::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHealAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_InHealAmount);
	P_NATIVE_END;
}
// End Class ARPG_Action_GameCharacter Function Heal

// Begin Class ARPG_Action_GameCharacter Function IncreaseArmor
struct Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics
{
	struct RPG_Action_GameCharacter_eventIncreaseArmor_Parms
	{
		float InHealArmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a function to increase the character's armor, callable from Blueprints and categorized under \"Health\"\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a function to increase the character's armor, callable from Blueprints and categorized under \"Health\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHealArmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::NewProp_InHealArmount = { "InHealArmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPG_Action_GameCharacter_eventIncreaseArmor_Parms, InHealArmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::NewProp_InHealArmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPG_Action_GameCharacter, nullptr, "IncreaseArmor", nullptr, nullptr, Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::RPG_Action_GameCharacter_eventIncreaseArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::RPG_Action_GameCharacter_eventIncreaseArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPG_Action_GameCharacter::execIncreaseArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHealArmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseArmor(Z_Param_InHealArmount);
	P_NATIVE_END;
}
// End Class ARPG_Action_GameCharacter Function IncreaseArmor

// Begin Class ARPG_Action_GameCharacter
void ARPG_Action_GameCharacter::StaticRegisterNativesARPG_Action_GameCharacter()
{
	UClass* Class = ARPG_Action_GameCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Damage", &ARPG_Action_GameCharacter::execDamage },
		{ "GainExperience", &ARPG_Action_GameCharacter::execGainExperience },
		{ "Heal", &ARPG_Action_GameCharacter::execHeal },
		{ "IncreaseArmor", &ARPG_Action_GameCharacter::execIncreaseArmor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPG_Action_GameCharacter);
UClass* Z_Construct_UClass_ARPG_Action_GameCharacter_NoRegister()
{
	return ARPG_Action_GameCharacter::StaticClass();
}
struct Z_Construct_UClass_ARPG_Action_GameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPG_Action_GameCharacter.h" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sprint Input Action\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health Input Action\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Damage Input Action\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Equip Input Action\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Zoom Input Action\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoom Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The amount of health the character currently has.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of health the character currently has." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define the maximum health of the player, editable in the editor and readable/writable in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the maximum health of the player, editable in the editor and readable/writable in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentArmor_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The amount of armor the character currently has.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of armor the character currently has." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxArmor_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define the maximum armor of the player, editable in the editor and readable/writable in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the maximum armor of the player, editable in the editor and readable/writable in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isOverlappingItem_MetaData[] = {
		{ "Category", "Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Determines if the character is overlapping an equippable item.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if the character is overlapping an equippable item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the current level of the weapon.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the current level of the weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperiencePoints_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceToLevel_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DexterityValue_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the dexterity value of the weapon.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the dexterity value of the weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntellectValue_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the intellect value of the weapon.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the intellect value of the weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradePoints_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the upgrade points available for the weapon.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the upgrade points available for the weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthValue_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents the strength value of the weapon.\n" },
#endif
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the strength value of the weapon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasPunched_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "RPG_Action_GameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCurrentArmor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxArmor;
	static void NewProp_isOverlappingItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isOverlappingItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperiencePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceToLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DexterityValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntellectValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpgradePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrengthValue;
	static void NewProp_HasPunched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasPunched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPG_Action_GameCharacter_Damage, "Damage" }, // 333836929
		{ &Z_Construct_UFunction_ARPG_Action_GameCharacter_GainExperience, "GainExperience" }, // 2558201950
		{ &Z_Construct_UFunction_ARPG_Action_GameCharacter_Heal, "Heal" }, // 3657094955
		{ &Z_Construct_UFunction_ARPG_Action_GameCharacter_IncreaseArmor, "IncreaseArmor" }, // 175232509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPG_Action_GameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HealthAction = { "HealthAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, HealthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthAction_MetaData), NewProp_HealthAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DamageAction = { "DamageAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, DamageAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAction_MetaData), NewProp_DamageAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_EquipAction = { "EquipAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, EquipAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipAction_MetaData), NewProp_EquipAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ZoomAction = { "ZoomAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, ZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomAction_MetaData), NewProp_ZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerCurrentHealth = { "PlayerCurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, PlayerCurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCurrentHealth_MetaData), NewProp_PlayerCurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerMaxHealth = { "PlayerMaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, PlayerMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMaxHealth_MetaData), NewProp_PlayerMaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerCurrentArmor = { "PlayerCurrentArmor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, PlayerCurrentArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCurrentArmor_MetaData), NewProp_PlayerCurrentArmor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerMaxArmor = { "PlayerMaxArmor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, PlayerMaxArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMaxArmor_MetaData), NewProp_PlayerMaxArmor_MetaData) };
void Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_isOverlappingItem_SetBit(void* Obj)
{
	((ARPG_Action_GameCharacter*)Obj)->isOverlappingItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_isOverlappingItem = { "isOverlappingItem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPG_Action_GameCharacter), &Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_isOverlappingItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isOverlappingItem_MetaData), NewProp_isOverlappingItem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ExperiencePoints = { "ExperiencePoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, ExperiencePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperiencePoints_MetaData), NewProp_ExperiencePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ExperienceToLevel = { "ExperienceToLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, ExperienceToLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceToLevel_MetaData), NewProp_ExperienceToLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DexterityValue = { "DexterityValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, DexterityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DexterityValue_MetaData), NewProp_DexterityValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_IntellectValue = { "IntellectValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, IntellectValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntellectValue_MetaData), NewProp_IntellectValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, CurrentWeapon), Z_Construct_UClass_ADefaultWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_UpgradePoints = { "UpgradePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, UpgradePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradePoints_MetaData), NewProp_UpgradePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_StrengthValue = { "StrengthValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_Action_GameCharacter, StrengthValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthValue_MetaData), NewProp_StrengthValue_MetaData) };
void Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HasPunched_SetBit(void* Obj)
{
	((ARPG_Action_GameCharacter*)Obj)->HasPunched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HasPunched = { "HasPunched", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPG_Action_GameCharacter), &Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HasPunched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasPunched_MetaData), NewProp_HasPunched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HealthAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DamageAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_EquipAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ZoomAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerCurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerCurrentArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_PlayerMaxArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_isOverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ExperiencePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_ExperienceToLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_DexterityValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_IntellectValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_UpgradePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_StrengthValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::NewProp_HasPunched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG_Action_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::ClassParams = {
	&ARPG_Action_GameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPG_Action_GameCharacter()
{
	if (!Z_Registration_Info_UClass_ARPG_Action_GameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPG_Action_GameCharacter.OuterSingleton, Z_Construct_UClass_ARPG_Action_GameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPG_Action_GameCharacter.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UClass* StaticClass<ARPG_Action_GameCharacter>()
{
	return ARPG_Action_GameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPG_Action_GameCharacter);
ARPG_Action_GameCharacter::~ARPG_Action_GameCharacter() {}
// End Class ARPG_Action_GameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPG_Action_GameCharacter, ARPG_Action_GameCharacter::StaticClass, TEXT("ARPG_Action_GameCharacter"), &Z_Registration_Info_UClass_ARPG_Action_GameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPG_Action_GameCharacter), 604283891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_1240994918(TEXT("/Script/RPG_Action_Game"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
