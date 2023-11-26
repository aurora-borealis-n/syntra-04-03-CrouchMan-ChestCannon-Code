// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CrouchManCode : ModuleRules
{
	public CrouchManCode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
