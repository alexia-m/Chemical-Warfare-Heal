////////////////////////////////////////////////////////////////////
//DeRap: CBRN_aceMortar\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:20:34 2021 : 'file' last modified on Mon Sep 02 05:41:44 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_aceMortar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction","ace_mk6mortar","CBRN_vanillaMortar"};
	};
};
class cfgWeapons
{
	class mortar_82mm;
	class ACE_mortar_82mm: mortar_82mm
	{
		magazines[] += {"CBRN_1Rnd_82mm_Mo_Chemical_Type0","CBRN_1Rnd_82mm_Mo_Chemical_Type1","CBRN_1Rnd_82mm_Mo_Chemical_Type2"};
	};
};
class cfgMagazines
{
	class ACE_1Rnd_82mm_Mo_HE;
	class CBRN_1Rnd_82mm_Mo_Chemical_Type0: ACE_1Rnd_82mm_Mo_HE
	{
		author = "Assaultboy";
		ammo = "Sh_82mm_AMOS_Chem_Type0";
		displayNameMFDFormat = "CS";
		displayNameShort = "CS";
		displayName = "82mm CS Gas Round";
	};
	class CBRN_1Rnd_82mm_Mo_Chemical_Type1: CBRN_1Rnd_82mm_Mo_Chemical_Type0
	{
		ammo = "Sh_82mm_AMOS_Chem_Type1";
		displayNameMFDFormat = "Asphyxiant";
		displayNameShort = "Asphyxiant";
		displayName = "82mm Asphyxiant Gas Round";
	};
	class CBRN_1Rnd_82mm_Mo_Chemical_Type2: CBRN_1Rnd_82mm_Mo_Chemical_Type0
	{
		ammo = "Sh_82mm_AMOS_Chem_Type2";
		displayNameMFDFormat = "Nerve Agent";
		displayNameShort = "Nerve Agent";
		displayName = "82mm Nerve Agent Round";
	};
};
class CfgFunctions
{
	class CBRN
	{
		class aceMortar
		{
			file = "CBRN_aceMortar\functions";
			class addMortarLoadActions{};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class CBRN_addMortarLoadActions
	{
		init = "call CBRN_fnc_addMortarLoadActions";
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567453304";
};
