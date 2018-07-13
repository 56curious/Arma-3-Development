/*
Script name:	initPlayerServer.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	run code on player start server-side.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/


PlayerServerLoadedCorrectly = false;
_PositionFound = getMarkerPos selectRandom ["RandomPos1","RandomPos2","RandomPos3","RandomPos4","RandomPos5","RandomPos6","RandomPos7","RandomPos8","RandomPos9"];

[_PositionFound] call BIS_fnc_setCuratorCamera;

	{
		if (!isnull (getassignedcuratorunit _x)) then {
			_unit = getassignedcuratorunit _x;
			if (isnull (getassignedcuratorlogic _unit)) then {
				unassignCurator _x;
				sleep 1;
				_unit assignCurator _x;
			};
		};
	} foreach allcurators;

PlayerServerLoadedCorrectly = true;