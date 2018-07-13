/*
Script name:    init.sqf
Created on:     25 ‎January ‎2018
Author:         Curious

Description:    Run code on mission start.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

sleep 1;
PositionDefined = getMarkerPos selectRandom ["RandomPos1","RandomPos2","RandomPos3","RandomPos4","RandomPos5","RandomPos6","RandomPos7","RandomPos8","RandomPos9"];
DefaultSpawnPoint setPos PositionDefined;

execVM "Curious's Framework\Scripts\Params\paramFog.sqf";
execVM "Curious's Framework\Scripts\Params\paramGodMode.sqf";
execVM "Curious's Framework\Scripts\Params\paramGurFriendly.sqf";
execVM "Curious's Framework\Scripts\Params\paramMaxTime.sqf";
execVM "Curious's Framework\Scripts\Params\paramModRights.sqf";
execVM "Curious's Framework\Scripts\Misc\Features\Earplugs.sqf";

sleep 1;

musicNames = ("isClass _x" configClasses (configFile >> "cfgMusic")) apply {
		[
			if (isText (_x >> "name")) then {getText (_x >> "name")} else {""}
		]
};

while {true} do
{
    {
        _prefix = [_x,0,16] call BIS_fnc_trimString;
        if(_prefix == "bis_fnc_drawminef") then
        {
            deleteMarker _x;
        };
        //hint format ["marker prefix:%1",_prefix];
    } foreach allMapMarkers;
    sleep 1;
};