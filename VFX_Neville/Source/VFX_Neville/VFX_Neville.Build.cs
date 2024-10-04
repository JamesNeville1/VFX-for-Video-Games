// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VFX_Neville : ModuleRules
{
	public VFX_Neville(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
