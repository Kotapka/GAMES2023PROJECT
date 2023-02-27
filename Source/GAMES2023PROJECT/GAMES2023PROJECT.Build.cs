// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAMES2023PROJECT : ModuleRules
{
	public GAMES2023PROJECT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
