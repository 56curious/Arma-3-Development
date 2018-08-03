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

			[
				" Curious Mission Framework",
				"Scenario Quick Setup",
				{
					[["Welcome"],west, ["Curious's Mission Framework has successfully been created and is now running on the server!","CMF INITIALIZED","marker1"], objNull,"SUCCEEDED" ,1,true,true,"danger"] call BIS_fnc_setTask;
					{3500 remoteExec ["setviewdistance"]; } remoteExec ["bis_fnc_call", 0, true];

					{
						_x allowDamage false;
						SystemChat "Scenario Startup INITIALIZED. anti-teamkill enabled for 8 minutes.";
						sleep 480;
						_x allowDamage true;
					} forEach allPlayers;
				}

			] call Ares_fnc_RegisterCustomModule;

			[
				" Curious Mission Framework",
				"Toggle Captive",
				{
					_Unit = _this select 1;
					missionNamespace setVariable ["CaptiveState", true];
					_Captive = missionNamespace getVariable ["CaptiveState",[]];
					if (_Captive isEqualTo true) then {
					_Unit action ["Surrender", _Unit];
					_Unit Setcaptive true;
					missionNamespace setVariable ["CaptiveState", false];
					} else {
					_Unit action ["", _Unit];
					_Unit Setcaptive false;
					missionNamespace setVariable ["CaptiveState", true];
					};
				}

			] call Ares_fnc_RegisterCustomModule;

			[
				" Curious Mission Framework",
				"Enable Earplugs",
				{
					{
					PlugsIN = 2;
					{"Press F1 for earplugs!"} remoteExec ["SystemChat", 0, true];
					if (side player isEqualTo sideLogic) then {
						(findDisplay 312) displayRemoveEventHandler ["KeyDown", MEP_KD];
						sleep 1;
						MEP_KD = (findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 59) then {
						 switch (PlugsIN) do {
						     case 1: { PlugsIN = 2; 2 fadeSound 1; player groupChat 'EARPLUGS REMOVED'; };
							 case 2: { PlugsIN = 1; 2 fadeSound 0.2; player groupChat 'EARPLUGS FITTED';  };
							 default { };
							 };
						}"];

						} else {

						(findDisplay 46) displayRemoveEventHandler ["KeyDown", MEP_KD];
						sleep 1;
						MEP_KD = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 59) then {
						 switch (PlugsIN) do {
						     case 1: { PlugsIN = 2; 2 fadeSound 1; player groupChat 'EARPLUGS REMOVED'; };
							 case 2: { PlugsIN = 1; 2 fadeSound 0.2; player groupChat 'EARPLUGS FITTED';  };
							 default { };
							 };
						}"];
						};
						} forEach allPlayers;
				}

			] call Ares_fnc_RegisterCustomModule;
	};



