/*
Script name:    AdminMenu.sqf
Created on:     ‎14 April 2018
Author:         Curious

Description:    Setup admin menu for admins.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/


//46 = Ground | 312 = Zeus

_CurrentAdmin = call BIS_fnc_admin;
switch (_CurrentAdmin) do {

	case 1: {
		waituntil {!(IsNull (findDisplay 46))};
		_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then {	createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];

		waituntil {!(IsNull (findDisplay 312))};
		_keyDown = (findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then { createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];
		hint "Press F5 to unlock the Admin Menu!";
	};
	case 2: {
		waituntil {!(IsNull (findDisplay 46))};
		_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then {	createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];

		waituntil {!(IsNull (findDisplay 312))};
		_keyDown = (findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then { createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];
		hint "Press F3 to unlock the Admin Menu!";
	};
	case 0: {

	};
};

RequestedEverywhereAdmins = ["76561198130543726","76561198116251840","76561198048487888","76561198082433108"]; //Darlo, Curious, Dreavon, Zaz

if (getPlayerUID player in RequestedEverywhereAdmins) then {

	SystemChat format ["Welcome back %1! Press F3 to open the admin menu. Extra menu coming soon...", name player];
	waituntil {!(IsNull (findDisplay 46))};
	_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then {	createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];

	waituntil {!(IsNull (findDisplay 312))};
	_keyDown = (findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 61) then { createDialog ""AdminMenu""; hint ""Admin Menu Created."";}"];

};