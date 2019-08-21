using UnrealBuildTool;

public class 三维弹球Target : TargetRules
{
	public 三维弹球Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("三维弹球");
	}
}
