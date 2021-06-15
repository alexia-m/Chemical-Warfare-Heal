////////////////////////////////////////////////////////////////////
//DeRap: CBRN_units\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:25 2021 : 'file' last modified on Thu Aug 08 06:49:40 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_units
	{
		units[] = {"B_CBRN_Unarmed","I_CBRN_Unarmed","O_CBRN_Unarmed"};
		weapons[] = {"U_B_CBRN","U_I_CBRN","U_O_CBRN"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class CfgEditorSubcategories
{
	class CBRN
	{
		displayName = "Men (Chemical)";
	};
};
class CfgVehicles
{
	class B_Soldier_unarmed_F;
	class B_CBRN_Unarmed: B_Soldier_unarmed_F
	{
		scope = 1;
		editorSubcategory = "CBRN";
		author = "Assaultboy";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data_m50\NBC_M50_Uniform_CO.paa"};
		modelSides[] = {0,1,2,3};
		model = "\skn_nbc_units\models\skn_b_nbc_uniform.p3d";
		uniformClass = "U_B_CBRN";
		class EventHandlers
		{
			class CBRN_giveMask
			{
				init = "(_this select 0) addItem 'G_CBRN_M50_Hood'";
			};
		};
	};
	class O_Soldier_unarmed_F;
	class O_CBRN_Unarmed: O_Soldier_unarmed_F
	{
		scope = 1;
		editorSubcategory = "CBRN";
		author = "Assaultboy";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data\xrt_suit_blu_co.paa"};
		modelSides[] = {0,1,2,3};
		model = "\skn_nbc_units\models\skn_i_nbc_uniform.p3d";
		uniformClass = "U_O_CBRN";
		class EventHandlers
		{
			class CBRN_giveMask
			{
				init = "(_this select 0) addItem 'G_CBRN_M04'";
			};
		};
	};
	class I_Soldier_unarmed_F;
	class I_CBRN_Unarmed: I_Soldier_unarmed_F
	{
		scope = 1;
		editorSubcategory = "CBRN";
		author = "Assaultboy";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\skn_nbc_units\data\noddy_suit_dry_blue_co.paa"};
		modelSides[] = {0,1,2,3};
		model = "\skn_nbc_units\models\skn_o_nbc_uniform.p3d";
		uniformClass = "U_I_CBRN";
		class EventHandlers
		{
			class CBRN_giveMask
			{
				init = "(_this select 0) addItem 'G_CBRN_M50_Hood'";
			};
		};
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1565297380";
};
