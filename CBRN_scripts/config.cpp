////////////////////////////////////////////////////////////////////
//DeRap: CBRN_scripts\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:20:57 2021 : 'file' last modified on Sat Aug 31 05:30:48 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_common","cba_events","ace_medical"};
	};
};
class CfgFunctions
{
	class CBRN
	{
		class scripts
		{
			file = "CBRN_scripts\functions";
			class initSettings{};
			class postInit{};
			class spawnMist{};
			class enableDebug{};
			class debugMessage{};
			class updateContaminatedArea{};
			class AIHandler{};
			class isAreaContaminated{};
			class makeImmune{};
			class blurScreen{};
			class addChemicalHandler{};
			class effectsHandler{};
			class blurHandler{};
			class syncHandler{};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class CBRN_PostInit
	{
		init = "call CBRN_fnc_postInit";
	};
	class CBRN_treatmentHandler
	{
		init = "call CBRN_fnc_treatmentHandler";
	};
	class CBRN_blurHandler
	{
		init = "call CBRN_fnc_blurHandler";
	};
	class CBRN_coughHandler
	{
		init = "call CBRN_fnc_coughHandler";
	};
	class CBRN_effectsHandler
	{
		init = "call CBRN_fnc_effectsHandler";
	};
	class CBRN_syncHandler
	{
		init = "call CBRN_fnc_syncHandler";
	};
	class CBRN_overlayHandler
	{
		init = "call CBRN_fnc_overlayHandler";
	};
	class CBRN_AIHandler
	{
		init = "call CBRN_fnc_AIHandler";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class CBRN_addChemicalHandler
		{
			init = "_this call CBRN_fnc_addChemicalHandler";
		};
		class CBRN_assignCoughIdentity
		{
			init = "_this call CBRN_fnc_assignCoughIdentity";
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class CBRN_initSettings
	{
		init = "call CBRN_fnc_initSettings";
	};
};
class Extended_FiredMan_EventHandlers
{
	class CAManBase
	{
		class CBRN_handleChemicalProjectiles
		{
			FiredMan = "(_this # 6) call CBRN_fnc_handleProjectile";
		};
	};
};
class cfg3Den
{
	class Object
	{
		class AttributeCategories
		{
			class StateSpecial
			{
				class Attributes
				{
					class CBRN_isImmuneToCBRN
					{
						displayName = "Immune to chemicals";
						tooltip = "Should this unit be immune to chemical weapons even when unprotected?";
						property = "CBRN_immuneToCBRN";
						control = "Checkbox";
						defaultValue = "false";
						expression = "if (_value) then {[_this, true] call CBRN_fnc_makeImmune}";
						condition = "objectControllable";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567279848";
};
