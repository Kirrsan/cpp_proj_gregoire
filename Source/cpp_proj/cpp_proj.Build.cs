// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cpp_proj : ModuleRules
{
	public cpp_proj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
