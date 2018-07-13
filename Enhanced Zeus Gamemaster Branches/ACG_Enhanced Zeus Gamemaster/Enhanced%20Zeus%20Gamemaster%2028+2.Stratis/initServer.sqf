/*
Script name:	initServer.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	Run code on server start.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/
//--- Curators
{
	_x allowCuratorLogicIgnoreAreas true;
	[_x,"Man"] call bis_fnc_removeDestroyedCuratorEditableObjects;
} foreach allCurators;

curator = allcurators select 0;
curators = allcurators;

{
	if (_x call bis_fnc_isCurator) then {
		if !(_x in curators) then {
			curators set [count curators,_x];
		};
	};
} foreach (_logic call bis_fnc_allsynchronizedobjects);