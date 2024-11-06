class CfgPatches
{
	class DZ_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class HuntingKnife;
	class sharpedged_knife_Base: HuntingKnife
	{
		scope=0;
		displayName="$STR_CfgVehicles_HuntingKnife0";
		descriptionShort="$STR_CfgVehicles_HuntingKnife1";
		model="\sharpedged\Knifes\baseKnife.p3d";
		debug_ItemCategory=2;
		inventorySlot[]=
		{
			"Knife"
		};
		SkinningDurationSpeed=0.0099999998;
		repairableWithKits[]={4};
		repairCosts[]={10};
		rotationFlags=17;
		RestrainUnlockType=1;
		canSkinBodies=1;
		weight=200;
		itemSize[]={1,3};
		lootTag[]=
		{
			"Hunting",
			"Camping"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		hiddenSelections[]=
		{
			"noj"
		};
		hiddenSelectionsTextures[]=
		{
			"sharpedged\Knifes\data\baseKnife_co.paa"
		};
		openItemSpillRange[]={10,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"sharpedged\Knifes\data\baseKnife_mat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"sharpedged\Knifes\data\baseKnife_mat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"sharpedged\Knifes\data\baseKnife_mat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"sharpedged\Knifes\data\baseKnife_mat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"sharpedged\Knifes\data\baseKnife_mat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKnife";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class shaving_knife_clean
				{
					soundSet="shaving_knife_clean_SoundSet";
					id=600;
				};
				class shaving_knife1
				{
					soundSet="shaving_knife1_SoundSet";
					id=601;
				};
				class shaving_knife2
				{
					soundSet="shaving_knife2_SoundSet";
					id=602;
				};
				class shaving_knife3
				{
					soundSet="shaving_knife3_SoundSet";
					id=603;
				};
				class shaving_knife4
				{
					soundSet="shaving_knife4_SoundSet";
					id=604;
				};
				class shaving_knife5
				{
					soundSet="shaving_knife5_SoundSet";
					id=605;
				};
				class shaving_knife6
				{
					soundSet="shaving_knife6_SoundSet";
					id=606;
				};
				class shaving_knife7
				{
					soundSet="shaving_knife7_SoundSet";
					id=607;
				};
				class shaving_knife8
				{
					soundSet="shaving_knife8_SoundSet";
					id=608;
				};
				class shaving_knife9
				{
					soundSet="shaving_knife9_SoundSet";
					id=609;
				};
				class shaving_knife10
				{
					soundSet="shaving_knife10_SoundSet";
					id=610;
				};
				class shaving_knife11
				{
					soundSet="shaving_knife11_SoundSet";
					id=611;
				};
				class shaving_knife12
				{
					soundSet="shaving_knife12_SoundSet";
					id=612;
				};
				class shaving_knife13
				{
					soundSet="shaving_knife13_SoundSet";
					id=613;
				};
				class shaving_knife14
				{
					soundSet="shaving_knife14_SoundSet";
					id=614;
				};
				class shaving_knife15
				{
					soundSet="shaving_knife15_SoundSet";
					id=615;
				};
				class shaving_knife16
				{
					soundSet="shaving_knife16_SoundSet";
					id=616;
				};
				class shaving_knife17
				{
					soundSet="shaving_knife17_SoundSet";
					id=617;
				};
				class shaving_knife18
				{
					soundSet="shaving_knife18_SoundSet";
					id=618;
				};
				class shaving_knife19
				{
					soundSet="shaving_knife19_SoundSet";
					id=619;
				};
				class shaving_knife20
				{
					soundSet="shaving_knife20_SoundSet";
					id=620;
				};
				class shaving_knife21
				{
					soundSet="shaving_knife21_SoundSet";
					id=621;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
	class sharpedged_knife_anime: sharpedged_knife_Base
	{
		scope=2;
		displayName="Sharp Edget Knife";
		descriptionShort="A knife with a sharp edge that can skin an animal in seconds.";
		hiddenSelectionsTextures[]=
		{
			"sharpedged\Knifes\data\Knife_anime_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sharpedged\Knifes\data\Knife_anime.rvmat"
		};
	};
	class sharpedged_knife_gradient: sharpedged_knife_Base
	{
		scope=2;
		displayName="Sharp Edget Knife";
		descriptionShort="A knife with a sharp edge that can skin an animal in seconds.";
		hiddenSelectionsTextures[]=
		{
			"sharpedged\Knifes\data\Knife_gradient_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"sharpedged\Knifes\data\Knife_gradient.rvmat"
		};
	};
};
