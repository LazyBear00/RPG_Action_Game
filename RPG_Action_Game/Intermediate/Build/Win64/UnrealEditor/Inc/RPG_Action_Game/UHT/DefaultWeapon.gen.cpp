// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Action_Game/DefaultWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultWeapon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ADefaultWeapon();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ADefaultWeapon_NoRegister();
RPG_ACTION_GAME_API UEnum* Z_Construct_UEnum_RPG_Action_Game_EWeaponType();
UPackage* Z_Construct_UPackage__Script_RPG_Action_Game();
// End Cross Module References

// Begin Enum EWeaponType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPG_Action_Game_EWeaponType, (UObject*)Z_Construct_UPackage__Script_RPG_Action_Game(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_Axe.DisplayName", "Axe" },
		{ "E_Axe.Name", "EWeaponType::E_Axe" },
		{ "E_Dagger.DisplayName", "Dagger" },
		{ "E_Dagger.Name", "EWeaponType::E_Dagger" },
		{ "E_Default.DisplayName", "Default" },
		{ "E_Default.Name", "EWeaponType::E_Default" },
		{ "E_Sword.DisplayName", "Sword" },
		{ "E_Sword.Name", "EWeaponType::E_Sword" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::E_Default", (int64)EWeaponType::E_Default },
		{ "EWeaponType::E_Dagger", (int64)EWeaponType::E_Dagger },
		{ "EWeaponType::E_Sword", (int64)EWeaponType::E_Sword },
		{ "EWeaponType::E_Axe", (int64)EWeaponType::E_Axe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RPG_Action_Game,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RPG_Action_Game_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_RPG_Action_Game_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// End Enum EWeaponType

// Begin Class ADefaultWeapon
void ADefaultWeapon::StaticRegisterNativesADefaultWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultWeapon);
UClass* Z_Construct_UClass_ADefaultWeapon_NoRegister()
{
	return ADefaultWeapon::StaticClass();
}
struct Z_Construct_UClass_ADefaultWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultWeapon.h" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelRaq_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "DefaultWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelRaq;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_LevelRaq = { "LevelRaq", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultWeapon, LevelRaq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelRaq_MetaData), NewProp_LevelRaq_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultWeapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultWeapon, BaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpeed_MetaData), NewProp_BaseSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultWeapon, WeaponType), Z_Construct_UEnum_RPG_Action_Game_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponType_MetaData), NewProp_WeaponType_MetaData) }; // 551986120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_LevelRaq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_BaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_WeaponType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultWeapon_Statics::NewProp_WeaponType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG_Action_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultWeapon_Statics::ClassParams = {
	&ADefaultWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADefaultWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultWeapon()
{
	if (!Z_Registration_Info_UClass_ADefaultWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultWeapon.OuterSingleton, Z_Construct_UClass_ADefaultWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultWeapon.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UClass* StaticClass<ADefaultWeapon>()
{
	return ADefaultWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultWeapon);
ADefaultWeapon::~ADefaultWeapon() {}
// End Class ADefaultWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 551986120U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultWeapon, ADefaultWeapon::StaticClass, TEXT("ADefaultWeapon"), &Z_Registration_Info_UClass_ADefaultWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultWeapon), 3719696599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_1511986457(TEXT("/Script/RPG_Action_Game"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_DefaultWeapon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
