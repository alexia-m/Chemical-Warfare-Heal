////////////////////////////////////////////////////////////////////
//DeRap: CBRN_modules\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:02 2021 : 'file' last modified on Sat Aug 31 04:48:47 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_modules
	{
		units[] = {"ModuleOrdnanceMortar_Chemical_Type0","ModuleOrdnanceMortar_Chemical_Type1","ModuleOrdnanceMortar_Chemical_Type2","ModuleCBRN_RemoveExposure"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Modules_F","A3_Modules_F_Curator_Ordnance"};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class CBRN_modules: NO_CATEGORY
	{
		displayName = "Chemical Warfare";
		side = 7;
		priority = 2;
	};
};
class cfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class ModuleCBRN_RemoveExposure: Module_F
	{
		displayName = "Remove Exposure";
		author = "Assaultboy";
		scope = 1;
		scopeCurator = 2;
		category = "CBRN_modules";
		isGlobal = 1;
		function = "CBRN_fnc_moduleRemoveExposure";
		class Attributes: AttributesBase
		{
			class Units: Units
			{
				property = "ModuleCBRN_RemoveExposure_Units";
			};
		};
	};
	class ModuleOrdnanceMortar_F;
	class ModuleOrdnanceMortar_Chemical_Type0: ModuleOrdnanceMortar_F
	{
		author = "Assaultboy";
		displayName = "82 mm CS Gas";
		category = "CBRN_modules";
		function = "CBRN_fnc_moduleProjectile";
		ammo = "Sh_82mm_AMOS_Chem_Type0";
	};
	class ModuleOrdnanceMortar_Chemical_Type1: ModuleOrdnanceMortar_Chemical_Type0
	{
		displayName = "82 mm Asphyxiant Gas";
		ammo = "Sh_82mm_AMOS_Chem_Type1";
	};
	class ModuleOrdnanceMortar_Chemical_Type2: ModuleOrdnanceMortar_Chemical_Type0
	{
		displayName = "82 mm Nerve agent";
		ammo = "Sh_82mm_AMOS_Chem_Type2";
	};
};
class CfgFunctions
{
	class CBRN
	{
		class modules
		{
			file = "CBRN_modules\functions";
			class moduleHandleCuratorPlacement{};
			class moduleRemoveExposure{};
			class moduleProjectile{};
		};
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567277327";
};
