/*
Script name:    WipeMap.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Wipes the map of all items.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

[{
	{deleteVehicle _x} forEach nearestObjects [player, ["cars","structures","empty","wrecks","ruins"], 9999999];
}, "BIS_fnc_spawn"] call BIS_fnc_MP;