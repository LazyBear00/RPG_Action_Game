// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Action_Game/DefaultEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ADefaultEnemy();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG_Action_Game();
// End Cross Module References

// Begin Class ADefaultEnemy Function TakeEnemyDamage
struct Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics
{
	struct DefaultEnemy_eventTakeEnemyDamage_Parms
	{
		float InDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::NewProp_InDamage = { "InDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultEnemy_eventTakeEnemyDamage_Parms, InDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::NewProp_InDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultEnemy, nullptr, "TakeEnemyDamage", nullptr, nullptr, Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::DefaultEnemy_eventTakeEnemyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::DefaultEnemy_eventTakeEnemyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultEnemy::execTakeEnemyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeEnemyDamage(Z_Param_InDamage);
	P_NATIVE_END;
}
// End Class ADefaultEnemy Function TakeEnemyDamage

// Begin Class ADefaultEnemy
void ADefaultEnemy::StaticRegisterNativesADefaultEnemy()
{
	UClass* Class = ADefaultEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TakeEnemyDamage", &ADefaultEnemy::execTakeEnemyDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultEnemy);
UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister()
{
	return ADefaultEnemy::StaticClass();
}
struct Z_Construct_UClass_ADefaultEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultEnemy.h" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTakenDamage_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_bHasTakenDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTakenDamage;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultEnemy_TakeEnemyDamage, "TakeEnemyDamage" }, // 3427179012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultEnemy, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bHasTakenDamage_SetBit(void* Obj)
{
	((ADefaultEnemy*)Obj)->bHasTakenDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bHasTakenDamage = { "bHasTakenDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADefaultEnemy), &Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bHasTakenDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTakenDamage_MetaData), NewProp_bHasTakenDamage_MetaData) };
void Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((ADefaultEnemy*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADefaultEnemy), &Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bHasTakenDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEnemy_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG_Action_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams = {
	&ADefaultEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultEnemy()
{
	if (!Z_Registration_Info_UClass_ADefaultEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultEnemy.OuterSingleton, Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultEnemy.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UClass* StaticClass<ADefaultEnemy>()
{
	return ADefaultEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultEnemy);
ADefaultEnemy::~ADefaultEnemy() {}
// End Class ADefaultEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultEnemy, ADefaultEnemy::StaticClass, TEXT("ADefaultEnemy"), &Z_Registration_Info_UClass_ADefaultEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultEnemy), 4047789528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_1916501213(TEXT("/Script/RPG_Action_Game"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
