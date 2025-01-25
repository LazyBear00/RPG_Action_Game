// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_Action_Game/RPG_Action_GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_Action_GameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ARPG_Action_GameGameMode();
RPG_ACTION_GAME_API UClass* Z_Construct_UClass_ARPG_Action_GameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG_Action_Game();
// End Cross Module References

// Begin Class ARPG_Action_GameGameMode
void ARPG_Action_GameGameMode::StaticRegisterNativesARPG_Action_GameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPG_Action_GameGameMode);
UClass* Z_Construct_UClass_ARPG_Action_GameGameMode_NoRegister()
{
	return ARPG_Action_GameGameMode::StaticClass();
}
struct Z_Construct_UClass_ARPG_Action_GameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPG_Action_GameGameMode.h" },
		{ "ModuleRelativePath", "RPG_Action_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPG_Action_GameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG_Action_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::ClassParams = {
	&ARPG_Action_GameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPG_Action_GameGameMode()
{
	if (!Z_Registration_Info_UClass_ARPG_Action_GameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPG_Action_GameGameMode.OuterSingleton, Z_Construct_UClass_ARPG_Action_GameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPG_Action_GameGameMode.OuterSingleton;
}
template<> RPG_ACTION_GAME_API UClass* StaticClass<ARPG_Action_GameGameMode>()
{
	return ARPG_Action_GameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPG_Action_GameGameMode);
ARPG_Action_GameGameMode::~ARPG_Action_GameGameMode() {}
// End Class ARPG_Action_GameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPG_Action_GameGameMode, ARPG_Action_GameGameMode::StaticClass, TEXT("ARPG_Action_GameGameMode"), &Z_Registration_Info_UClass_ARPG_Action_GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPG_Action_GameGameMode), 3308682184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameGameMode_h_1364289342(TEXT("/Script/RPG_Action_Game"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Action_Game_Source_RPG_Action_Game_RPG_Action_GameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
