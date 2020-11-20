// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class hotpatchtest : ModuleRules
{
	public hotpatchtest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
