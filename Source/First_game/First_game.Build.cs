// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_game : ModuleRules
{
	public First_game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
