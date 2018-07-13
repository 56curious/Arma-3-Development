/*
Script name:	initCustomModules.sqf
Created on:		12 ‎June ‎2018
Author:			Curious

Description:	Create each custom module used within the EZGM gamemode. Offload
				extras to secondary site.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:
				[" Enhanced ZGM Modules: *Category*", "Title", { All_Code_Here }] call Ares_fnc_RegisterCustomModule;

				*NOTE: _this select 0; = Location array - _this select 1; = Object module is on.
				*NOTE: The above is the same for any scripts within this script.
*/



if (!isNull (getAssignedCuratorLogic player) && {isClass (configFile >> "CfgPatches" >> "achilles_modules_f_achilles")}) then {
	waitUntil {missionnamespace getvariable ["BIS_moduleMPTypeGameMaster_init", false] and {not isNil "ares_category_list"}};
	SystemChat "Creating custom modules because Ares was detected.";
		//Create small, medium and large smoke clusters
			[
				" Enhanced ZGM Modules: Smoke",
				"Create White Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShell" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Orange Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellOrange" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Purple Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellPurple" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Yellow Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellYellow" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Blue Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellBlue" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Red Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellRed" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Green Smoke (Small)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellGreen" createVehicle _pos;
					sleep 5;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
////////////////////////////////////////////////////////////
			[
				" Enhanced ZGM Modules: Smoke",
				"Create White Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShell" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Orange Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellOrange" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Purple Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellPurple" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Yellow Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellYellow" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Blue Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellBlue" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Red Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellRed" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Green Smoke (Medium)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellGreen" createVehicle _pos;
					sleep 15;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
////////////////////////////////////////////////////////////
			[
				" Enhanced ZGM Modules: Smoke",
				"Create White Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShell" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Orange Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellOrange" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Purple Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellPurple" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Yellow Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellYellow" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Blue Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellBlue" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Red Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellRed" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			[
				" Enhanced ZGM Modules: Smoke",
				"Create Green Smoke (Large)",
				{
					_pos = _this select 0;
					_smoke = "SmokeShellGreen" createVehicle _pos;
					sleep 25;
					deleteVehicle _smoke;
				}

			] call Ares_fnc_RegisterCustomModule;
			hint "added3";

		//Apply Custom Textures
			[
				" Enhanced ZGM Modules: Misc",
				"Apply Custom Texture",
				{
					hint "Feature Down.";
				}

			] call Ares_fnc_RegisterCustomModule;


		//Add Supports to players
			[
				" Enhanced ZGM Modules: Misc",
				"Add Faction Support",
				{
					execVM "Curious's Framework\Scripts\misc\mission\addSupport.sqf";
				}

			] call Ares_fnc_RegisterCustomModule;


		//Create Quick Objectives
			[
				" Enhanced ZGM Modules: Misc",
				"Create Quick Mission(s)",
				{
					hint "Feature Down.";

				}

			] call Ares_fnc_RegisterCustomModule;


		//Allow menus to open via modules
			[
				" Enhanced ZGM Modules: Menus",
				"Open Zeus Menu",
				{
					createDialog "ZeusMenu";
					systemChat "Zeus Menu Loaded";
				}

			] call Ares_fnc_RegisterCustomModule;

			if (getPlayerUID player in RequestedEverywhereAdmins) then {
				[
					" Enhanced ZGM Modules: Menus",
					"Open Admin Menu",
					{
						createDialog "AdminMenu";
						systemChat "Admin Menu Loaded";
					}

				] call Ares_fnc_RegisterCustomModule;
	};

};