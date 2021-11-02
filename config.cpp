/// Magazines macros definition ///

#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define EDEN_PREVIEW(ARG) \seso\hohenstaufen_units\data\ARG.jpg

class CfgPatches {
	class hohenstaufen_units_config {

		name = "Hohenstaufen Units";
		author = "Dildo Sagbag";
		url = "";

		requiredAddons[] = {"fow_weapons","fow_weapons_c","fow_characters"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgFactionClasses
{
	class fow_waffenss;
	class hohenstaufen_units: fow_waffenss
	{
		displayName = "Hohenstaufen Waffen SS";
		icon = "\seso\hohenstaufen_units\ss.paa";
	};

};
class CfgVehicleClasses
{
	//Faction Definition
	class hohenstaufen_units_infantry
	{
		displayName = "Hohenstaufen Infantry";
	};
};

class CfgEditorSubcategories
{
	// Subcategory Definitions
	class seso_ss_m42p_summer
	{
		displayName = "M42 Plane Tree Summer Infantry";
	};
	class seso_ss_m42p_autumn
	{
		displayName = "M42 Plane Tree Autumn Infantry";
	};
	class seso_ss_m42e_summer
	{
		displayName = "M42 Oak Leaf Summer Infantry";
	};
	class seso_ss_m42e_autumn
	{
		displayName = "M42 Oak Leaf Autumn Infantry";
	};
	class seso_ss_m43
	{
		displayName = "M43 Field Grey Infantry";
	};
	class seso_ss_m44
	{
		displayName = "M44 Pea Dot Infantry";
	};
};

class CfgVehicles {
	class fow_s_ger_base;

	// Subcategory Vehicles
	/*
	Class name syntax:
		Uniforms
			<unit tag>_ss_m<42, 43, or 44><none,e,or p>_<optional: season>_base
	*/

	class seso_ss_base: fow_s_ger_base
	{
		faction = "hohenstaufen_units";
		editorSubCategory = "seso_ss_m42p_summer";
	};


	/*
	Class name syntax:
		Infantry
			<unit tag>_ss_<subcategory>_<rank>_<optional: weapon>
			Examples:
			seso_ss_m42p_summer_panzer_mp40
			seso_ss_m43_sergeant
			seso_ss_m44_nco_stg44
	*/

	// M42 Plane Tree Summer Infantry
	// This is a parent to every other subcategory
	class seso_ss_m42p_summer_panzer : seso_ss_base
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Panzergrenadier";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_panzer);
		icon = "iconMan";
		uniformClass = "Ren_Smock_SS_Platanen_S_PzGren_u";
		backpack = "";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		items[] = {"rutp_mutze_ss", "FirstAidKit"};
		respawnItems[] = {"rutp_mutze_ss", "FirstAidKit"};
		weapons[] = {"fow_w_k98", "fow_w_p640p", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98", "fow_w_p640p", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), "fow_13Rnd_9x19", MAG_8("fow_5Rnd_792x57")};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), "fow_13Rnd_9x19", MAG_8("fow_5Rnd_792x57")};
	};

	class seso_ss_m42p_summer_sniper : seso_ss_m42p_summer_panzer
	{
		displayName = "Sniper";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_sniper);
		icon = "iconManRecon";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_k98_scoped", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98_scoped","Throw","Put"};
	};

	class seso_ss_m42p_summer_spotter : seso_ss_m42p_summer_panzer
	{
		displayName = "Spotter";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_spotter);
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_k98", "fow_w_p640p", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98", "fow_w_p640p", "fow_i_dienstglas", "Throw", "Put"};
	};

	class seso_ss_m42p_summer_at : seso_ss_m42p_summer_panzer
	{
		displayName = "AT Panzergrenadier";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_at);
		icon = "iconManAT";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mp40", "fow_w_pzfaust_60", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "fow_w_pzfaust_60","Throw","Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40")};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40")};
	};

	class seso_ss_m42p_summer_panzer_G43 : seso_ss_m42p_summer_panzer
	{
		displayName = "Panzergrenadier (G43)";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_panzer_G43);
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_g43", "fow_w_p640p", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_g43", "fow_w_p640p", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_4("fow_10nd_792x57"), "fow_13Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_4("fow_10nd_792x57"), "fow_13Rnd_9x19"};
	};

	class seso_ss_m42p_summer_panzer_mp40 : seso_ss_m42p_summer_panzer
	{
		displayName = "Panzergrenadier (MP40)";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_panzer_mp40);
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mp40", "fow_w_p640p", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "fow_w_p640p", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_13Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_13Rnd_9x19"};
	};

	class seso_ss_m42p_summer_radio : seso_ss_m42p_summer_panzer
	{
		displayName = "Radio Operator";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_radio);
		backpack = "fow_b_torn_radio";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m43", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m43", "ItemMap", "ItemCompass", "ItemWatch"};
		items[] = {"FirstAidKit", "ACRE_PRC77"};
		weapons[] = {"fow_w_k98", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_11("fow_5Rnd_792x57")};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_11("fow_5Rnd_792x57")};
	};

	class seso_ss_m42p_summer_storm : seso_ss_m42p_summer_panzer
	{
		displayName = "Storm Trooper";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_storm);
		uniformClass = "Ren_Smock_SS_Platanen_S_Strm_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mp40", "fow_w_p640p", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "fow_w_p640p", "fow_i_dienstglas", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_5("fow_32Rnd_9x19_mp40"), "fow_13Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_5("fow_32Rnd_9x19_mp40"), "fow_13Rnd_9x19"};
	};

	class seso_ss_m42p_summer_medic : seso_ss_m42p_summer_panzer
	{

		displayName = "Medic";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_medic);
		icon = "iconManMedic";
		uniformClass = "Ren_Smock_Cardboard_u";
		backpack = "fow_b_tornister_medic";
		weapons[] = {"fow_w_k98", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98", "Throw", "Put"};
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_11("fow_5Rnd_792x57")};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_11("fow_5Rnd_792x57")};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_Sommer", 1,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1,
				"Ren_ss_m42_sani_06", 0.1
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};

	};

	class seso_ss_m42p_summer_gunner : seso_ss_m42p_summer_panzer
	{
		displayName = "Machine Gunner";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_gunner);
		icon = "iconManMG";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mg42", "fow_w_p640p", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mg42", "fow_w_p640p", "Throw", "Put"};
		magazines[] = {"fow_e_m24", "fow_13Rnd_9x19", MAG_4("fow_50Rnd_792x57")};
		Respawnmagazines[] = {"fow_e_m24", "fow_13Rnd_9x19", MAG_4("fow_50Rnd_792x57")};
	};

	class seso_ss_m42p_summer_assistant : seso_ss_m42p_summer_panzer
	{
		displayName = "Assistant Gunner";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_assistant);
		backpack = "fow_b_ammoboxes";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_k98", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98", "Throw", "Put"};
		magazines[] = {MAG_6("fow_5Rnd_792x57"), MAG_3("fow_50Rnd_792x57")};
		Respawnmagazines[] = {MAG_6("fow_5Rnd_792x57"), MAG_3("fow_50Rnd_792x57")};
	};

	class seso_ss_m42p_summer_assistant_spare : seso_ss_m42p_summer_panzer
	{
		displayName = "Assistant Gunner (Spare Barrel)";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_assistant_spare);
		backpack = "fow_b_ammoboxes_mg34_42";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_platanen_Sommer", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_k98", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_k98", "Throw", "Put"};
		magazines[] = {MAG_6("fow_5Rnd_792x57"), MAG_3("fow_50Rnd_792x57")};
		Respawnmagazines[] = {MAG_6("fow_5Rnd_792x57"), MAG_3("fow_50Rnd_792x57")};
	};

	class seso_ss_m42p_summer_leader_mp40 : seso_ss_m42p_summer_panzer
	{
		displayName = "Squad Leader";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_leader_mp40);
		icon = "iconManLeader";
		uniformClass = "Ren_Smock_SS_Platanen_S_Rttf_u";
		linkedItems[] = {"fow_v_heer_mp40", "rutp_mutze_ss", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "rutp_mutze_ss", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mp40", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_8Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_8Rnd_9x19"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_Sommer", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42p_summer_leader_stg44 : seso_ss_m42p_summer_panzer
	{
		displayName = "Squad Leader (STG 44)";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_summer_leader_stg44);
		icon = "iconManLeader";
		uniformClass = "Ren_Smock_SS_Platanen_S_Rttf_u";
		linkedItems[] = {"fow_v_heer_mp44", "rutp_mutze_ss", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp44", "rutp_mutze_ss", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_stg44", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_stg44", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_30Rnd_792x33"), "fow_8Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_30Rnd_792x33"), "fow_8Rnd_9x19"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_Sommer", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	// M42 Plane Tree Autumn Infantry
	class seso_ss_m42p_autumn_panzer : seso_ss_m42p_summer_panzer
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_panzer);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_sniper : seso_ss_m42p_summer_sniper
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_sniper);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_spotter : seso_ss_m42p_summer_spotter
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_spotter);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_at : seso_ss_m42p_summer_at
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_at);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_panzer_G43 : seso_ss_m42p_summer_panzer_G43
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_panzer_G43);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_panzer_mp40 : seso_ss_m42p_summer_panzer_mp40
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_panzer_mp40);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_radio : seso_ss_m42p_summer_radio
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_radio);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
	};

	class seso_ss_m42p_autumn_storm : seso_ss_m42p_summer_storm
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_storm);
		uniformClass = "Ren_Smock_SS_Platanen_H_Strm_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_medic : seso_ss_m42p_summer_medic
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_medic);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_herbst", 1,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1,
				"Ren_ss_m42_sani_06", 0.1
			};
		class EventHandlers : EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42p_autumn_gunner : seso_ss_m42p_summer_gunner
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_gunner);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_assistant : seso_ss_m42p_summer_assistant
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_assistant);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_assistant_spare : seso_ss_m42p_summer_assistant_spare
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_assistant_spare);
		uniformClass = "Ren_Smock_SS_Platanen_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_platanen_herbst", "ItemMap", "ItemCompass", "ItemWatch"};
	};

	class seso_ss_m42p_autumn_leader_mp40 : seso_ss_m42p_summer_leader_mp40
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_leader_mp40);
		uniformClass = "Ren_Smock_SS_Platanen_H_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_herbst", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42p_autumn_leader_stg44 : seso_ss_m42p_summer_leader_stg44
	{
		editorSubCategory = "seso_ss_m42p_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42p_autumn_leader_stg44);
		uniformClass = "Ren_Smock_SS_Platanen_H_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_platanen_herbst", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	// M42 Oak Leaf Summer Infantry
	class seso_ss_m42e_summer_panzer : seso_ss_m42p_summer_panzer
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_panzer);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_sniper : seso_ss_m42p_summer_sniper
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_sniper);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_spotter : seso_ss_m42p_summer_spotter
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_spotter);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_at : seso_ss_m42p_summer_at
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_at);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_panzer_G43 : seso_ss_m42p_summer_panzer_G43
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_panzer_G43);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_panzer_mp40 : seso_ss_m42p_summer_panzer_mp40
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_panzer_mp40);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_radio : seso_ss_m42p_summer_radio
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_radio);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
	};

	class seso_ss_m42e_summer_storm : seso_ss_m42p_summer_storm
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_storm);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_medic : seso_ss_m42p_summer_medic
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_medic);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 1,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 1,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1,
				"Ren_ss_m42_sani_06", 0.1
			};
		class EventHandlers : EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_gunner : seso_ss_m42p_summer_gunner
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_gunner);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_assistant : seso_ss_m42p_summer_assistant
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_assistant);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_assistant_spare : seso_ss_m42p_summer_assistant_spare
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_assistant_spare);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_eich_Sommer1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_Sommer2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_leader_mp40 : seso_ss_m42p_summer_leader_mp40
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_leader_mp40);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_summer_leader_stg44 : seso_ss_m42p_summer_leader_stg44
	{
		editorSubCategory = "seso_ss_m42e_summer";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_summer_leader_stg44);
		uniformClass = "Ren_Smock_SS_Eichenlaub_S_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_Sommer1", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	//M42 Oak Leaf Autumn Infantry
	class seso_ss_m42e_autumn_panzer : seso_ss_m42p_summer_panzer
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_panzer);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_sniper : seso_ss_m42p_summer_sniper
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_sniper);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};

	};

	class seso_ss_m42e_autumn_spotter : seso_ss_m42p_summer_spotter
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_spotter);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};

	};

	class seso_ss_m42e_autumn_at : seso_ss_m42p_summer_at
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_at);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_panzer_G43 : seso_ss_m42p_summer_panzer_G43
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_at);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_panzer_mp40 : seso_ss_m42p_summer_panzer_mp40
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_panzer_mp40);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_radio : seso_ss_m42p_summer_radio
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_radio);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
	};

	class seso_ss_m42e_autumn_storm : seso_ss_m42p_summer_storm
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_storm);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_medic : seso_ss_m42p_summer_medic
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_medic);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 1,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 1,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1,
				"Ren_ss_m42_sani_06", 0.1
			};
		class EventHandlers : EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_gunner : seso_ss_m42p_summer_gunner
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_gunner);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_assistant : seso_ss_m42p_summer_assistant
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_assistant);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_assistant_spare : seso_ss_m42p_summer_assistant_spare
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_assistant_spare);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_PzGren_u";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_tarn_helmbezug_eich_herbst1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_leader_mp40 : seso_ss_m42p_summer_leader_mp40
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_leader_mp40);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m42e_autumn_leader_stg44 : seso_ss_m42p_summer_leader_stg44
	{
		editorSubCategory = "seso_ss_m42e_autumn";
		editorPreview = EDEN_PREVIEW(seso_ss_m42e_autumn_leader_stg44);
		uniformClass = "Ren_Smock_SS_Eichenlaub_H_Rttf_u";
		headgearList[] =
			{
				"Ren_ss_tarn_helmbezug_eich_herbst1", 0.5,
				"Ren_ss_tarn_helmbezug_eich_herbst2", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	//M43 Field Grey Infantry
	class seso_ss_m43_panzer : seso_ss_m42p_summer_panzer
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_panzer);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_sniper : seso_ss_m42p_summer_sniper
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_sniper);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_spotter : seso_ss_m42p_summer_spotter
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_spotter);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_at : seso_ss_m42p_summer_at
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_at);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_panzer_G43 : seso_ss_m42p_summer_panzer_G43
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_panzer_G43);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_panzer_mp40 : seso_ss_m42p_summer_panzer_mp40
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_panzer_mp40);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_radio : seso_ss_m42p_summer_radio
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_radio);
		uniformClass = "Ren_m43_em_01_u";
	};

	class seso_ss_m43_storm : seso_ss_m42p_summer_storm
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_storm);
		uniformClass = "Ren_m43_Stutten_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_medic : seso_ss_m42p_summer_medic
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_medic);
		uniformClass = "Ren_m43_Carstens_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 1,
				"Ren_ss_m42_dirty", 1,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1
			};
		class EventHandlers : EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_gunner : seso_ss_m42p_summer_gunner
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_gunner);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_assistant : seso_ss_m42p_summer_assistant
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_assistant);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_assistant_spare : seso_ss_m42p_summer_assistant_spare
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_assistant_spare);
		uniformClass = "Ren_m43_em_01_u";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_leader_mp40 : seso_ss_m42p_summer_leader_mp40
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_leader_mp40);
		uniformClass = "Ren_m43_Silver_u";
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m43_leader_stg44 : seso_ss_m42p_summer_leader_stg44
	{
		editorSubCategory = "seso_ss_m43";
		editorPreview = EDEN_PREVIEW(seso_ss_m43_leader_stg44);
		uniformClass = "Ren_m43_Silver_u";
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};


	// M44 Pea Dot Infantry
	class seso_ss_m44_panzer : seso_ss_m42p_summer_panzer
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_panzer);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_sniper : seso_ss_m42p_summer_sniper
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_sniper);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m42_camo_1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_k98_light", "Ren_ss_m42_camo_1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.3,
				"Ren_ss_m42_dirty", 0.3,
				"Ren_ss_m42_camo_1", 0.5,
				"Ren_ss_m42_camo_2", 0.5,
				"Ren_ss_m42_camo_3", 0.5,
				"Ren_ss_m42_camo_4", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};

	};

	class seso_ss_m44_spotter : seso_ss_m42p_summer_spotter
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_spotter);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_camo_1", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_camo_1", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.3,
				"Ren_ss_m42_dirty", 0.3,
				"Ren_ss_m42_camo_1", 0.5,
				"Ren_ss_m42_camo_2", 0.5,
				"Ren_ss_m42_camo_3", 0.5,
				"Ren_ss_m42_camo_4", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};

	};

	class seso_ss_m44_at : seso_ss_m42p_summer_at
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_at);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_panzer_G43 : seso_ss_m42p_summer_panzer_G43
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_panzer_G43);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"}; 
		respawnLinkedItems[] = {"fow_v_heer_g43", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_panzer_mp40 : seso_ss_m42p_summer_panzer_mp40
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_panzer_mp40);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_radio : seso_ss_m42p_summer_radio
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_radio);
		uniformClass = "Ren_Dot44_Em_2_u";
	};

	class seso_ss_m44_storm : seso_ss_m42p_summer_storm
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_storm);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_medic : seso_ss_m42p_summer_medic
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_medic);
		uniformClass = "Ren_Dot44_Medic_Uffz_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 1,
				"Ren_ss_m42_dirty", 1,
				"Ren_ss_m42_camo_1", 0.05,
				"Ren_ss_m42_camo_2", 0.05,
				"Ren_ss_m42_camo_3", 0.05,
				"Ren_ss_m42_camo_4", 0.05,
				"Ren_ss_m42_sani_01", 0.1,
				"Ren_ss_m42_sani_02", 0.1,
				"Ren_ss_m42_sani_03", 0.1,
				"Ren_ss_m42_sani_04", 0.1,
				"Ren_ss_m42_sani_05", 0.1,
				"Ren_ss_m42_sani_06", 0.1
			};
		class EventHandlers : EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_gunner : seso_ss_m42p_summer_gunner
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_gunner);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_mg", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mg", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_assistant : seso_ss_m42p_summer_assistant
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_assistant);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_assistant_spare : seso_ss_m42p_summer_assistant_spare
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_assistant_spare);
		uniformClass = "Ren_Dot44_Em_2_u";
		linkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_k98_ass", "Ren_ss_m42_clean", "ItemMap", "ItemCompass", "ItemWatch"};
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_leader_mp40 : seso_ss_m42p_summer_leader_mp40
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_leader_mp40);
		uniformClass = "Ren_Dot44_Em_2_u";
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};

	class seso_ss_m44_leader_stg44 : seso_ss_m42p_summer_leader_stg44
	{
		editorSubCategory = "seso_ss_m44";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_leader_stg44);
		uniformClass = "Ren_Dot44_Em_2_u";
		headgearList[] =
			{
				"Ren_ss_m42_clean", 0.5,
				"Ren_ss_m42_dirty", 0.5,
				"Ren_ss_m42_camo_1", 0.3,
				"Ren_ss_m42_camo_2", 0.3,
				"Ren_ss_m42_camo_3", 0.3,
				"Ren_ss_m42_camo_4", 0.3,
				"rutp_mutze_ss", 0.5
			};
		class EventHandlers
			{
				init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
			};
	};


	class seso_ss_m44_lieutenant_mp40 : seso_ss_base
	{
		dlc = "fow_mod";
		scope = 2;
		editorSubCategory = "seso_ss_m44";
		displayName = "2nd Lieutenant";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_lieutenant_mp40);
		icon = "iconManOfficer";
		uniformClass = "Ren_Dot44_Ustuf_Renner_u";
		linkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_schir", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp40_nco", "Ren_ss_schir", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_mp40", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_mp40", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_8Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_32Rnd_9x19_mp40"), "fow_8Rnd_9x19"};
	};

	class seso_ss_m44_lieutenant_stg44 : seso_ss_base
	{
		dlc = "fow_mod";
		scope = 2;
		editorSubCategory = "seso_ss_m44";
		displayName = "2nd Lieutenant (STG 44)";
		editorPreview = EDEN_PREVIEW(seso_ss_m44_lieutenant_stg44);
		icon = "iconManOfficer";
		uniformClass = "Ren_Dot44_Ustuf_Renner_u";
		linkedItems[] = {"fow_v_heer_mp44", "Ren_ss_schir", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"fow_v_heer_mp44", "Ren_ss_schir", "ItemMap", "ItemCompass", "ItemWatch"};
		weapons[] = {"fow_w_stg44", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		respawnWeapons[] = {"fow_w_stg44", "fow_w_p08", "fow_i_dienstglas", "Throw", "Put"};
		magazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_30Rnd_792x33"), "fow_8Rnd_9x19"};
		Respawnmagazines[] = {MAG_2("fow_e_m24"), MAG_6("fow_30Rnd_792x33"), "fow_8Rnd_9x19"};
	};
};

class CfgGroups
{
	class West
	{
		class hohenstaufen_units
		{
			name = "Hohenstaufen Waffen SS";
			class Infantry
			{
				name = "Infantry";
				// M42 Oak Leaf Summer
				class seso_ss_m42e_summer_infsquad
				{
					name = "(M42 Oak Summer) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m42e_summer_machinesquad
				{
					name = "(M42 Oak Summer) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m42e_summer_atsquad
				{
					name = "(M42 Oak Summer) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42e_summer_snipersquad
				{
					name = "(M42 Oak Summer) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};
				class seso_ss_m42e_summer_sentrysquad
				{
					name = "(M42 Oak Summer) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_summer_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				// M42 Oak Leaf Autumn
				class seso_ss_m42e_autumn_infsquad
				{
					name = "(M42 Oak Autumn) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m42e_autumn_machinesquad
				{
					name = "(M42 Oak Autumn) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m42e_autumn_atsquad
				{
					name = "(M42 Oak Autumn) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42e_autumn_snipersquad
				{
					name = "(M42 Oak Autumn) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42e_autumn_sentrysquad
				{
					name = "(M42 Oak Autumn) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42e_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				// M42 Plane Tree Autumn
				class seso_ss_m42p_autumn_infsquad
				{
					name = "(M42 Plane Autumn) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m42p_autumn_machinesquad
				{
					name = "(M42 Plane Autumn) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m42p_autumn_atsquad
				{
					name = "(M42 Plane Autumn) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42p_autumn_snipersquad
				{
					name = "(M42 Plane Autumn) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42p_autumn_sentrysquad
				{
					name = "(M42 Plane Autumn) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_autumn_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				// M42 Plane Tree Summer
				class seso_ss_m42p_summer_infsquad
				{
					name = "(M42 Plane Summer) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m42p_summer_machinesquad
				{
					name = "(M42 Plane Summer) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m42p_summer_atsquad
				{
					name = "(M42 Plane Summer) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42p_summer_snipersquad
				{
					name = "(M42 Plane Summer) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m42p_summer_sentrysquad
				{
					name = "(M42 Plane Summer) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m42p_summer_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				// M43 Field Grey
				class seso_ss_m43_infsquad
				{
					name = "(M43 Field Grey) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m43_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m43_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m43_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m43_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m43_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m43_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m43_machinesquad
				{
					name = "(M43 Field Grey) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m43_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m43_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m43_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m43_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m43_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m43_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m43_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m43_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m43_atsquad
				{
					name = "(M43 Field Grey) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m43_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m43_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m43_snipersquad
				{
					name = "(M43 Field Grey) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m43_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m43_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m43_sentrysquad
				{
					name = "(M43 Field Grey) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m43_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m43_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
				// M44 Pea Dot
				class seso_ss_m44_infsquad
				{
					name = "(M44 Pea Dot) Infantry Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m44_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m44_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m44_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m44_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m44_medic";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m44_at";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {-20, -20, 0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {25, -25, 0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {-25, -25, 0};
					};
				};

				class seso_ss_m44_machinesquad
				{
					name = "(M44 Pea Dot) Machine Squad";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m44_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m44_storm";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m44_gunner";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m44_assistant";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m44_gunner";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "seso_ss_m44_assistant";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "seso_ss_m44_medic";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "seso_ss_m44_at";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class seso_ss_m44_atsquad
				{
					name = "(M44 Pea Dot) AT Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m44_at";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m44_at";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m44_snipersquad
				{
					name = "(M44 Pea Dot) Sniper Team";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m44_sniper";
						rank = "PRIVATE";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m44_spotter";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};

				class seso_ss_m44_sentrysquad
				{
					name = "(M44 Pea Dot) Sentry";
					side = 1;
					faction = "hohenstaufen_units";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "seso_ss_m44_leader_mp40";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "seso_ss_m44_panzer";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
				};
			};
		};
	};
};

