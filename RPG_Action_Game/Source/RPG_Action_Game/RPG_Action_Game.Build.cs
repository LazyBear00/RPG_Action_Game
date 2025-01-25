// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RPG_Action_Game : ModuleRules
{
	public RPG_Action_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate", // Add Slate
            "SlateCore" // Add SlateCore for ETextCommit
        });

        // If you're using UI
        PrivateDependencyModuleNames.Add("UMG");
    }
}
