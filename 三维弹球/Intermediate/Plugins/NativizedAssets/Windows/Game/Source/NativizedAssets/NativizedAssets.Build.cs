// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Private/NativizedAssets.h";
		bLegacyPublicIncludePaths = Target.bLegacyPublicIncludePaths;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "InputCore", "NavigationSystem", "SlateCore", "AIModule", "GameplayTasks", "GameplayTags", "ClothingSystemRuntimeInterface", "AudioPlatformConfiguration", "UMG", "PropertyPath", "MovieScene", "Slate" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
