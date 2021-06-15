////////////////////////////////////////////////////////////////////
//DeRap: CBRN_Health\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:12 2021 : 'file' last modified on Tue May 18 11:53:53 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class chemical_warfare_heal
	{
		name = "$STR_Exposure_Name";
		units[] = {"ACE_ATNAA"};
		weapons[] = {"ACE_ATNAA"};
		requiredVersion = 1.8;
		requiredAddons[] = {"ace_medical","ace_medical_damage","ace_medical_treatment","ace_medical_gui","cba_settings"};
		version = "1.0";
		versionStr = "1.0";
		author = "Alexia";
		authors[] = {"Alexia"};
		authorUrl = "";
	};
};
class cfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ATNAA: ACE_ItemCore
	{
		scope = 2;
		author = "Alexia";
		picture = "\CBRN_Health\ui\ATNAA.paa";
		displayName = "ATNAA";
		descriptionShort = "Antidote Treatment Nerge Agent Autoinjector";
		descriptionUse = "Treats the effects of nerve agent";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class FieldDressing;
	class Atropine: FieldDressing
	{
		displayName = "Use Antidote Injector";
		displayNameProgress = "Injecting...";
		consumeItem = 1;
		items[] = {"ACE_ATNAA"};
		category = "medication";
		medicRequired = 0;
		allowSelfTreatment = 1;
		allowedSelections[] = {"All"};
		condition = "";
		treatmentLocations = 0;
		treatmentTime = 10;
		treatmentTimeSelfCoef = 1;
		callbackStart = "";
		callbackProgress = "";
		callbackSuccess = "ace_medical_treatment_fnc_bandage";
		callbackFailure = "";
		animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
		animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
		animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
		animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
		litter[] = {{},{"ACE_MedicalLitter_clean"},{{"ACE_MedicalLitter_bandage2","ACE_MedicalLitter_bandage3"}}};
	};
};
class cfgMods
{
	author = "Alexia";
	timepacked = "1621338833";
};
