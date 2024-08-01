// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Zbot : ModuleRules
{
	public Zbot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayAbilities", });

		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayTags", "GameplayTasks" });
	}
}
