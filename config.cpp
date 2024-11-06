class CfgPatches
{
	class SharpEdged
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class SharpEdged
	{
		dir="SharpEdged";
		hideName=1;
		hidePicture=1;
		name="SharpEdged";
		credits="RUBYstilzchen";
		author="RUBYstilzchen";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SharpEdged\scripts\4_world"
				};
			};
		};
	};
};