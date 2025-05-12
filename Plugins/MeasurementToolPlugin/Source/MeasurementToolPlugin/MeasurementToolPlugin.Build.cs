using UnrealBuildTool;

public class MeasurementToolPlugin : ModuleRules
{
	public MeasurementToolPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"UnrealEd", 
			"Slate", 
			"SlateCore", 
			"EditorStyle",
			"InteractiveToolsFramework"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate", "SlateCore", "EditorStyle", "UnrealEd", "LevelEditor",
			"ToolMenus", "Projects"
		});
	}
}