////////////////////////////////////////////////////////////////////
//DeRap: CBRN_gear\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:16 2021 : 'file' last modified on Sat Aug 31 23:15:11 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_gear
	{
		units[] = {"CBRN_IEDLandSmall_Type1","CBRN_IEDLandSmall_Type2","CBRN_IEDUrbanSmall_Type1","CBRN_IEDUrbanSmall_Type2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_common","cba_events","ace_medical","A3_Static_F_Mortar_01","ace_mk6mortar","ace_explosives","ace_interaction"};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class U_C_CBRN_Suit_01_Blue_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_B_CBRN_Suit_01_MTP_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_B_CBRN_Suit_01_Tropic_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_C_CBRN_Suit_01_White_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_B_CBRN_Suit_01_Wdl_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_I_CBRN_Suit_01_AAF_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_I_E_CBRN_Suit_01_EAF_F: Uniform_Base
	{
		CBRN_protectionLevel = "4 + 8";
	};
	class U_B_CombatUniform_mcam;
	class U_O_CombatUniform_ocamo;
	class U_I_CombatUniform;
	class UniformItem;
	class U_B_CBRN: U_B_CombatUniform_mcam
	{
		author = "Assaultboy";
		scope = 2;
		displayName = "CBRN Suit (M50) [NATO]";
		picture = "\CBRN_gear\data\items\uniformBlufor.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data_m50\NBC_M50_Uniform_CO.paa"};
		CBRN_protectionLevel = 8;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CBRN_Unarmed";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_O_CBRN: U_O_CombatUniform_ocamo
	{
		author = "Assaultboy";
		scope = 2;
		displayName = "CBRN Suit (M04) [CSAT]";
		picture = "\CBRN_gear\data\items\uniformOpfor.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data\xrt_suit_blu_co.paa"};
		CBRN_protectionLevel = 8;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_CBRN_Unarmed";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_CBRN: U_I_CombatUniform
	{
		author = "Assaultboy";
		scope = 2;
		displayName = "CBRN Suit (S10) [AAF]";
		picture = "\CBRN_gear\data\items\uniformInd.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data\noddy_suit_dry_blue_co.paa"};
		CBRN_protectionLevel = 8;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_CBRN_Unarmed";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class Default;
	class Put: Default
	{
		muzzles[] += {"CBRN_Explosives_Muzzle"};
		class PutMuzzle: Default{};
		class CBRN_Explosives_Muzzle: PutMuzzle
		{
			magazines[] = {"CBRN_IEDLandSmall_Type1_Remote_Mag","CBRN_IEDLandSmall_Type2_Remote_Mag","CBRN_IEDUrbanSmall_Type1_Remote_Mag","CBRN_IEDUrbanSmall_Type2_Remote_Mag"};
		};
	};
};
class cfgGlasses
{
	class G_RegulatorMask_base_F;
	class G_RegulatorMask_F: G_RegulatorMask_base_F
	{
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	};
	class G_AirPurifyingRespirator_02_base_F;
	class G_AirPurifyingRespirator_02_black_F: G_AirPurifyingRespirator_02_base_F
	{
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	};
	class G_AirPurifyingRespirator_02_olive_F: G_AirPurifyingRespirator_02_base_F
	{
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	};
	class G_AirPurifyingRespirator_02_sand_F: G_AirPurifyingRespirator_02_base_F
	{
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	};
	class G_AirPurifyingRespirator_01_F: G_AirPurifyingRespirator_02_base_F
	{
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
	};
	class G_CBRN_M50: G_RegulatorMask_F
	{
		author = "Assaultboy";
		displayname = "M50 Promask";
		model = "\skn_nbc_units\models\skn_b_nbc_mask.p3d";
		picture = "\CBRN_gear\data\items\maskM50.paa";
		identityTypes[] = {};
		mass = 4;
		CBRN_protectionLevel = "1 + 2";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_m50.paa";
		DLC = "";
	};
	class G_CBRN_M50_Hood: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "M50 Promask w/ Hood";
		model = "\skn_nbc_units\models\skn_b_nbc_mask_hood.p3d";
		CBRN_protectionLevel = "1 + 2 + 4";
	};
	class G_CBRN_M04: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "M04 Promask";
		model = "\skn_nbc_units\models\skn_i_nbc_mask.p3d";
		picture = "\CBRN_gear\data\items\maskM04.paa";
	};
	class G_CBRN_M04_Hood: G_CBRN_M04
	{
		author = "Assaultboy";
		displayname = "M04 Promask w/ Hood";
		model = "\skn_nbc_units\models\skn_i_nbc_mask_hood.p3d";
		CBRN_protectionLevel = "1 + 2 + 4";
	};
	class G_CBRN_S10: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "S10 Promask w/ Hood";
		model = "\skn_nbc_units\models\skn_o_nbc_mask.p3d";
		picture = "\CBRN_gear\data\items\maskS10.paa";
		CBRN_protectionLevel = "1 + 2 + 4";
		CBRN_overlayType = "CBRN_gear\data\hud\overlay_style_round.paa";
	};
};
class cfgMagazines
{
	class IEDLandSmall_Remote_Mag;
	class CBRN_IEDLandSmall_Type1_Remote_Mag: IEDLandSmall_Remote_Mag
	{
		displayName = "Asphyxiant IED (Dug-In)";
		ammo = "CBRN_IEDLandSmall_Type1_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "CBRN_IEDLandSmall_Type1_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "Pressure Plate";
				digDistance = 0;
				ammo = "CBRN_IEDLandSmall_Type1_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class CBRN_IEDLandSmall_Type2_Remote_Mag: IEDLandSmall_Remote_Mag
	{
		displayName = "Nerve Agent IED (Dug-In)";
		ammo = "CBRN_IEDLandSmall_Type2_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "CBRN_IEDLandSmall_Type2_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "Pressure Plate";
				digDistance = 0;
				ammo = "CBRN_IEDLandSmall_Type2_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class IEDUrbanSmall_Remote_Mag;
	class CBRN_IEDUrbanSmall_Type1_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Asphyxiant IED (Urban)";
		ammo = "CBRN_IEDUrbanSmall_Type1_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "CBRN_IEDUrbanSmall_Type1_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "Pressure Plate";
				digDistance = 0;
				ammo = "CBRN_IEDUrbanSmall_Type1_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class CBRN_IEDUrbanSmall_Type2_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Nerve Agent IED (Urban)";
		ammo = "CBRN_IEDUrbanSmall_Type2_Remote_Ammo";
		ACE_Explosives_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "CBRN_IEDUrbanSmall_Type2_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "Pressure Plate";
				digDistance = 0;
				ammo = "CBRN_IEDUrbanSmall_Type2_Range_Ammo";
				pitch = 0;
			};
		};
	};
};
class cfgAmmo
{
	class IEDLandSmall_Remote_Ammo;
	class CBRN_IEDLandSmall_Type1_Remote_Ammo: IEDLandSmall_Remote_Ammo
	{
		CBRN_isPlacedExplosive = 1;
		CBRN_chemicalType = 1;
		CBRN_heightOfBurst = 3;
		CBRN_sprayWidth = 10;
		CBRN_lifetime = 60;
	};
	class CBRN_IEDLandSmall_Type1_Command_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class CBRN_IEDLandSmall_Type1_Range_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
	class CBRN_IEDLandSmall_Type2_Remote_Ammo: CBRN_IEDLandSmall_Type1_Remote_Ammo
	{
		CBRN_chemicalType = 2;
	};
	class CBRN_IEDLandSmall_Type2_Command_Ammo: CBRN_IEDLandSmall_Type2_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class CBRN_IEDLandSmall_Type2_Range_Ammo: CBRN_IEDLandSmall_Type2_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
	class IEDUrbanSmall_Remote_Ammo;
	class CBRN_IEDUrbanSmall_Type1_Remote_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		CBRN_isPlacedExplosive = 1;
		CBRN_chemicalType = 1;
		CBRN_heightOfBurst = 3;
		CBRN_sprayWidth = 10;
		CBRN_lifetime = 60;
	};
	class CBRN_IEDUrbanSmall_Type1_Command_Ammo: CBRN_IEDUrbanSmall_Type1_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class CBRN_IEDUrbanSmall_Type1_Range_Ammo: CBRN_IEDUrbanSmall_Type1_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
	class CBRN_IEDUrbanSmall_Type2_Remote_Ammo: CBRN_IEDUrbanSmall_Type1_Remote_Ammo
	{
		CBRN_chemicalType = 2;
	};
	class CBRN_IEDUrbanSmall_Type2_Command_Ammo: CBRN_IEDUrbanSmall_Type2_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class CBRN_IEDUrbanSmall_Type2_Range_Ammo: CBRN_IEDUrbanSmall_Type2_Remote_Ammo
	{
		mineTrigger = "RangeTriggerShort";
	};
};
class ACE_Medical_Actions
{
	class Basic
	{
		class Morphine;
		class Atropine: Morphine
		{
			displayName = "Inject Atropine";
			displayNameProgress = "Injecting Atropine...";
			items[] = {"ACE_atropine"};
			litter[] = {{"All","",{"ACE_MedicalLitter_atropine"}}};
		};
	};
};
class rscTitles
{
	class RscCBRN_maskEffect
	{
		duration = 1e+11;
		fadeIn = 0;
		fadeOut = 0.5;
		idd = -1;
		movingEnable = 0;
		name = "RscCBRN_maskEffect";
		onLoad = "uiNamespace setVariable ['CBRN_mask_displayEffect', _this select 0]";
		onUnload = "uiNamespace setVariable ['CBRN_mask_displayEffect', displayNull]";
		class controls
		{
			class maskOverlay
			{
				colorBackground[] = {0,0,0,0};
				colorText[] = {1,1,1,1};
				fixedWidth = 0;
				font = "RobotoCondensed";
				h = "safezoneH";
				idc = -1;
				lineSpacing = 0;
				shadow = 0;
				sizeEx = 0;
				style = 48;
				text = "";
				type = 0;
				w = "safezoneW";
				x = "safezoneX";
				y = "safezoneY";
			};
		};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Head
			{
				class CBRN_putMaskOn
				{
					displayName = "Put mask on";
					condition = "(ace_medical_menuTypeStyle == 0) && ((_target call CBRN_fnc_hasMaskInInventory) || (_player call CBRN_fnc_hasMaskInInventory)) && (_target getVariable ['ACE_isUnconscious', false]) && !((goggles _target) in CBRN_allLevel1Masks)";
					statement = "[_player, _target] call CBRN_fnc_putMaskOnAction";
					icon = "CBRN_scripts\data\icons\gasmaskIcon.paa";
				};
			};
			class CBRN_Head
			{
				displayName = "Put mask on";
				condition = "(ace_medical_menuTypeStyle != 0) && ((_target call CBRN_fnc_hasMaskInInventory) || (_player call CBRN_fnc_hasMaskInInventory)) && (_target getVariable ['ACE_isUnconscious', false]) && !((goggles _target) in CBRN_allLevel1Masks)";
				distance = 1.75;
				exceptions[] = {"isNotSwimming"};
				selection = "pilot";
				statement = "[_player, _target] call CBRN_fnc_putMaskOnAction";
				icon = "CBRN_scripts\data\icons\gasmaskIcon.paa";
			};
		};
	};
	class MineBase;
	class IEDUrbanSmall_F: MineBase
	{
		class EventHandlers
		{
			class CBRN_handleCuratorExplosives
			{
				init = "_this call CBRN_fnc_handleCuratorExplosives";
			};
		};
	};
	class CBRN_IEDUrbanSmall_Type1: IEDUrbanSmall_F
	{
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Explosives";
		displayName = "Asphyxiant IED (Urban)";
		author = "Assautlboy";
		ammo = "CBRN_IEDUrbanSmall_Type1_Remote_Ammo";
		side = 3;
		scope = 1;
		scopeCurator = 2;
	};
	class CBRN_IEDUrbanSmall_Type2: CBRN_IEDUrbanSmall_Type1
	{
		displayName = "Nerve Agent IED (Urban)";
		ammo = "CBRN_IEDUrbanSmall_Type2_Remote_Ammo";
	};
	class IEDLandSmall_F: MineBase
	{
		class EventHandlers
		{
			class CBRN_handleCuratorExplosives
			{
				init = "_this call CBRN_fnc_handleCuratorExplosives";
			};
		};
	};
	class CBRN_IEDLandSmall_Type1: IEDLandSmall_F
	{
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Explosives";
		displayName = "Asphyxiant IED (Dug-In)";
		author = "Assautlboy";
		ammo = "CBRN_IEDLandSmall_Type1_Remote_Ammo";
		side = 3;
		scope = 1;
		scopeCurator = 2;
	};
	class CBRN_IEDLandSmall_Type2: CBRN_IEDLandSmall_Type1
	{
		displayName = "Nerve Agent IED (Dug-In)";
		ammo = "CBRN_IEDLandSmall_Type2_Remote_Ammo";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class CBRN_giveFactionMask
		{
			init = "_this call CBRN_fnc_giveFactionMask";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class CBRN_giveFactionMask
		{
			respawn = "(_this # 0) call CBRN_fnc_giveFactionMask";
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class CBRN_handleACEExplosives
	{
		init = "call CBRN_fnc_handleACEExplosives";
	};
};
class CfgFunctions
{
	class CBRN
	{
		class gear
		{
			file = "CBRN_gear\functions";
			class getProtectionLevel{};
			class giveFactionMask{};
			class handleACEExplosives{};
			class handleCuratorExplosives{};
			class hasMaskInInventory{};
			class overlayHandler{};
			class putMaskOnAction{};
			class treatmentHandler{};
			class handleProjectile{};
		};
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567343711";
};
