////////////////////////////////////////////////////////////////////
//DeRap: CBRN_vanillaMortar\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:31 2021 : 'file' last modified on Sat Aug 31 04:49:56 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_vanillaMortar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Static_F_Mortar_01"};
	};
};
class cfgWeapons
{
	class CannonCore;
	class mortar_82mm: CannonCore
	{
		magazines[] += {"4Rnd_82mm_Mo_Chemical_Type0","4Rnd_82mm_Mo_Chemical_Type1","4Rnd_82mm_Mo_Chemical_Type2"};
	};
};
class cfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 4Rnd_82mm_Mo_Chemical_Type0: 8Rnd_82mm_Mo_shells
	{
		author = "Assaultboy";
		displayNameMFDFormat = "CS";
		displayNameShort = "CS";
		displayName = "CS Gas Mortar Shells";
		ammo = "Sh_82mm_AMOS_Chem_Type0";
		count = 4;
	};
	class 4Rnd_82mm_Mo_Chemical_Type1: 4Rnd_82mm_Mo_Chemical_Type0
	{
		displayNameMFDFormat = "Asphyxiant";
		displayNameShort = "Asphyxiant";
		displayName = "Asphyxiant Chemical Mortar Shells";
		ammo = "Sh_82mm_AMOS_Chem_Type1";
	};
	class 4Rnd_82mm_Mo_Chemical_Type2: 4Rnd_82mm_Mo_Chemical_Type0
	{
		displayNameMFDFormat = "Nerve Agent";
		displayNameShort = "Nerve Agent";
		displayName = "Nerve Agent Mortar Shells";
		ammo = "Sh_82mm_AMOS_Chem_Type2";
	};
};
class cfgAmmo
{
	class Sh_82mm_AMOS;
	class Sh_82mm_AMOS_Chem_Type0: Sh_82mm_AMOS
	{
		ace_frag_enabled = 0;
		aiAmmoUsageFlags = "64 + 128";
		CraterEffects = "";
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 0;
		CBRN_heightOfBurst = 20;
		CBRN_sprayWidth = 15;
		CBRN_lifetime = 90;
	};
	class Sh_82mm_AMOS_Chem_Type1: Sh_82mm_AMOS
	{
		ace_frag_enabled = 0;
		aiAmmoUsageFlags = "64 + 128";
		CraterEffects = "";
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 1;
		CBRN_heightOfBurst = 30;
		CBRN_sprayWidth = 15;
		CBRN_lifetime = 90;
	};
	class Sh_82mm_AMOS_Chem_Type2: Sh_82mm_AMOS
	{
		ace_frag_enabled = 0;
		aiAmmoUsageFlags = "64 + 128";
		CraterEffects = "";
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 2;
		CBRN_heightOfBurst = 30;
		CBRN_sprayWidth = 15;
		CBRN_lifetime = 90;
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567277396";
};
