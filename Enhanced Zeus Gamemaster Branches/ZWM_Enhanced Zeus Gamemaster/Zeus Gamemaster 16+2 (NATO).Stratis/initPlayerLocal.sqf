/*
Script name:	initPlayerLocal.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	Run code on player start locally.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

LocalLoadedCorrectly = false;
SettingsOpened = false;
sleep 0.1;

["Please be aware that this is still in an ALPHA STAGE of development! Expect and report bugs.",0.01,(safeZoneY + 0.05),10,1,0,90]spawn bis_fnc_dynamicText;

execVM "Curious's Framework\scripts\Admin Menu\AdminMenu.sqf";
execVM "Curious's Framework\initCustomModules.sqf";
execVM "Curious's Framework\initSlots.sqf";
execVM "Curious's Framework\initRespawn.sqf";



if (side player == west) then {
	sleep 0.001;
	titlecut ["","BLACK",0];
	params["_player","_didJIP"];
	_playerServerHistory = profileNamespace getVariable ["CUR_playerServerHistory",[]];
	_playerUID = getPlayerUID player;
		if (_playerUID in _playerServerHistory) then {
			0 = execVM "Curious's Framework\Scripts\ZeusIntroReturn.sqf";
		} else {
			0 = execVM "Curious's Framework\Scripts\ZeusIntroNew.sqf";
			_playerServerHistory pushBackUnique _playerUID;
		    profileNamespace setVariable ["CUR_playerServerHistory",_playerServerHistory];
		};

	waituntil {!(IsNull (findDisplay 46))};
	SettingsMenuEH = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 60) then {	createDialog ""UserSettings""; SettingsOpened = true;}"];
	SystemChat "Version: 1.1.0";
	SystemChat " ";
	SystemChat "Press F1 for Earplugs!";
	SystemChat "Press F2 to open your settings!";
};

if (side player == sideLogic) then {
	_Zeus = _this select 0;

/*_Zeus addEventHandler ["CuratorPinged", {
	params ["_curator", "_unit"];
	_curator playSound "ZeusPingedSpeaker";
	{hint format ["%1 Has Pinged Zeus!",_unit];} call bis_fnc_spawn;
	systemChat "Custom Ping initialized.";
}];*/

	SystemChat "Version: 1.1.0";
	SystemChat " ";
	SystemChat "Press F2 to open the Zeus menu!";
	SystemChat "More keybinds to come!";

	if (isDedicated OR isServer) then {
	waituntil {!(IsNull (findDisplay 312))};
	_keyDown = (findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 60) then { createDialog ""ZeusMenu""; }"];
	};
};

If (isClass(configfile >> "CfgPatches" >> "achilles_modules_f_ares")) then
{
	If (local player) then
	{
	  missionNamespace setVariable ['Ares_Allow_Zeus_To_Execute_Code', false];
	};
};

LocalLoadedCorrectly = true;