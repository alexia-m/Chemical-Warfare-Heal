////////////////////////////////////////////////////////////////////
//DeRap: CBRN_sounds\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 14 22:21:21 2021 : 'file' last modified on Sat Aug 31 04:49:46 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBRN_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFunctions
{
	class CBRN
	{
		class sounds
		{
			file = "CBRN_sounds\functions";
			class assignCoughIdentity{};
			class coughHandler{};
		};
	};
};
class cfgVehicles
{
	class Sound;
	class Sound_CBRN_coughBase: Sound{};
	class Sound_CBRN_coughMuffledBase: Sound{};
	class Sound_CBRN_cough_chaddlesg: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_chaddlesg";
	};
	class Sound_CBRN_coughMuffled_chaddlesg: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_chaddlesg";
	};
	class Sound_CBRN_cough_assaultboy: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_assaultboy";
	};
	class Sound_CBRN_coughMuffled_assaultboy: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_assaultboy";
	};
	class Sound_CBRN_cough_ritalin: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_ritalin";
	};
	class Sound_CBRN_coughMuffled_ritalin: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_ritalin";
	};
	class Sound_CBRN_cough_zgonjanin: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_zgonjanin";
	};
	class Sound_CBRN_coughMuffled_zgonjanin: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_zgonjanin";
	};
	class Sound_CBRN_cough_maccas: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_maccas";
	};
	class Sound_CBRN_coughMuffled_maccas: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_maccas";
	};
	class Sound_CBRN_cough_raven06: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_raven06";
	};
	class Sound_CBRN_coughMuffled_raven06: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_raven06";
	};
	class Sound_CBRN_cough_ragz993: Sound_CBRN_coughBase
	{
		sound = "CBRN_cough_ragz993";
	};
	class Sound_CBRN_coughMuffled_ragz993: Sound_CBRN_coughMuffledBase
	{
		sound = "CBRN_coughMuffled_ragz993";
	};
};
class cfgSFX
{
	class CBRN_cough_chaddlesg
	{
		sound0[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough0.ogg",0.8,1,25,0.09,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough1.ogg",0.8,1,25,0.09,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough2.ogg",0.8,1,25,0.09,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough3.ogg",0.8,1,25,0.09,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough4.ogg",0.8,1,25,0.09,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough5.ogg",0.8,1,25,0.09,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough6.ogg",0.8,1,25,0.09,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough7.ogg",0.8,1,25,0.09,3,8,10};
		sound8[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough8.ogg",0.8,1,25,0.09,3,8,10};
		sound9[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough9.ogg",0.8,1,25,0.09,3,8,10};
		sound10[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough10.ogg",0.8,1,25,0.09,3,8,10};
		soundBonus[] = {"CBRN_sounds\sounds\chaddlesg\coughs\cough_bonus.ogg",0.8,1,25,0.01,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7","sound8","sound9","sound10","soundBonus"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_chaddlesg
	{
		sound0[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.198,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.198,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.198,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.198,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.198,3,8,10};
		soundBonus[] = {"CBRN_sounds\sounds\chaddlesg\coughs_muffled\cough_muffled_bonus.ogg",0.8,1,25,0.01,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","soundBonus"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_assaultboy
	{
		sound0[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough0.ogg",0.8,1,25,0.1428,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough1.ogg",0.8,1,25,0.1428,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough2.ogg",0.8,1,25,0.1428,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough3.ogg",0.8,1,25,0.1428,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough4.ogg",0.8,1,25,0.1428,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough5.ogg",0.8,1,25,0.1428,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\assaultboy\coughs\cough6.ogg",0.8,1,25,0.1428,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_assaultboy
	{
		sound0[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.1666,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.1666,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.1666,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.1666,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.1666,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\assaultboy\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.1666,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_ritalin
	{
		sound0[] = {"CBRN_sounds\sounds\ritalin\coughs\cough0.ogg",0.8,1,25,0.099,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\ritalin\coughs\cough1.ogg",0.8,1,25,0.099,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\ritalin\coughs\cough2.ogg",0.8,1,25,0.099,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\ritalin\coughs\cough3.ogg",0.8,1,25,0.099,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\ritalin\coughs\cough4.ogg",0.8,1,25,0.099,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\ritalin\coughs\cough5.ogg",0.8,1,25,0.099,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\ritalin\coughs\cough6.ogg",0.8,1,25,0.099,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\ritalin\coughs\cough7.ogg",0.8,1,25,0.099,3,8,10};
		sound8[] = {"CBRN_sounds\sounds\ritalin\coughs\cough8.ogg",0.8,1,25,0.099,3,8,10};
		sound9[] = {"CBRN_sounds\sounds\ritalin\coughs\cough9.ogg",0.8,1,25,0.099,3,8,10};
		soundBonus[] = {"CBRN_sounds\sounds\ritalin\coughs\cough_bonus.ogg",0.8,1,25,0.01,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7","sound8","sound9","soundBonus"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_ritalin
	{
		sound0[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.1,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.1,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.1,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.1,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.1,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.1,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled6.ogg",0.8,1,25,0.1,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled7.ogg",0.8,1,25,0.1,3,8,10};
		sound8[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled8.ogg",0.8,1,25,0.1,3,8,10};
		sound9[] = {"CBRN_sounds\sounds\ritalin\coughs_muffled\cough_muffled9.ogg",0.8,1,25,0.1,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7","sound8","sound9"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_zgonjanin
	{
		sound0[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough0.ogg",0.8,1,25,0.125,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough1.ogg",0.8,1,25,0.125,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough2.ogg",0.8,1,25,0.125,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough3.ogg",0.8,1,25,0.125,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough4.ogg",0.8,1,25,0.125,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough5.ogg",0.8,1,25,0.125,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough6.ogg",0.8,1,25,0.125,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\zgonjanin\coughs\cough7.ogg",0.8,1,25,0.125,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_zgonjanin
	{
		sound0[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.142,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.142,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.142,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.142,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.142,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.142,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\zgonjanin\coughs_muffled\cough_muffled6.ogg",0.8,1,25,0.142,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_maccas
	{
		sound0[] = {"CBRN_sounds\sounds\maccas\coughs\cough0.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound1[] = {"CBRN_sounds\sounds\maccas\coughs\cough1.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound2[] = {"CBRN_sounds\sounds\maccas\coughs\cough2.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound3[] = {"CBRN_sounds\sounds\maccas\coughs\cough3.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound4[] = {"CBRN_sounds\sounds\maccas\coughs\cough4.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound5[] = {"CBRN_sounds\sounds\maccas\coughs\cough5.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound6[] = {"CBRN_sounds\sounds\maccas\coughs\cough6.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound7[] = {"CBRN_sounds\sounds\maccas\coughs\cough7.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_maccas
	{
		sound0[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.1666,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.1666,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.1666,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.1666,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.1666,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\maccas\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.1666,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_raven06
	{
		sound0[] = {"CBRN_sounds\sounds\raven06\coughs\cough0.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound1[] = {"CBRN_sounds\sounds\raven06\coughs\cough1.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound2[] = {"CBRN_sounds\sounds\raven06\coughs\cough2.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound3[] = {"CBRN_sounds\sounds\raven06\coughs\cough3.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound4[] = {"CBRN_sounds\sounds\raven06\coughs\cough4.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound5[] = {"CBRN_sounds\sounds\raven06\coughs\cough5.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound6[] = {"CBRN_sounds\sounds\raven06\coughs\cough6.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sound7[] = {"CBRN_sounds\sounds\raven06\coughs\cough7.ogg",0.8,1,25,"0.875â€¬",3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_raven06
	{
		sound0[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.1428,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.1428,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.1428,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.1428,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.1428,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.1428,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\raven06\coughs_muffled\cough_muffled6.ogg",0.8,1,25,0.1428,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_cough_ragz993
	{
		sound0[] = {"CBRN_sounds\sounds\ragz993\coughs\cough0.ogg",0.8,1,25,0.111,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\ragz993\coughs\cough1.ogg",0.8,1,25,0.111,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\ragz993\coughs\cough2.ogg",0.8,1,25,0.111,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\ragz993\coughs\cough3.ogg",0.8,1,25,0.111,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\ragz993\coughs\cough4.ogg",0.8,1,25,0.111,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\ragz993\coughs\cough5.ogg",0.8,1,25,0.111,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\ragz993\coughs\cough6.ogg",0.8,1,25,0.111,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\ragz993\coughs\cough7.ogg",0.8,1,25,0.111,3,8,10};
		sound8[] = {"CBRN_sounds\sounds\ragz993\coughs\cough8.ogg",0.8,1,25,0.111,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7","sound8"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class CBRN_coughMuffled_ragz993
	{
		sound0[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled0.ogg",0.8,1,25,0.125,3,8,10};
		sound1[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled1.ogg",0.8,1,25,0.125,3,8,10};
		sound2[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled2.ogg",0.8,1,25,0.125,3,8,10};
		sound3[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled3.ogg",0.8,1,25,0.125,3,8,10};
		sound4[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled4.ogg",0.8,1,25,0.125,3,8,10};
		sound5[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled5.ogg",0.8,1,25,0.125,3,8,10};
		sound6[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled6.ogg",0.8,1,25,0.125,3,8,10};
		sound7[] = {"CBRN_sounds\sounds\ragz993\coughs_muffled\cough_muffled7.ogg",0.8,1,25,0.125,3,8,10};
		sounds[] = {"sound0","sound1","sound2","sound3","sound4","sound5","sound6","sound7"};
		empty[] = {"",0,0,0,0,0,0,0};
	};
};
class cfgMods
{
	author = "Assaultboy";
	timepacked = "1567277386";
};
