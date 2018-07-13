/*
Script name:	paramMaxTime.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	Setup max time for the mission before it ends and restarts.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

//Max Time
_maxTime = "MaxTime" call BIS_fnc_getParamValue;

switch _maxTime do {

	//30mins
	case 1800: {
		sleep 1800;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//1Hr
	case 3600: {
		sleep 3600;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//1Hr 30mins
	case 5400: {
		sleep 5400;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//2Hrs
	case 7200: {
		sleep 7200;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//2Hr 30Minutes
	case 9000: {
		sleep 9000;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//3Hrs
	case 10800: {
		sleep 10800;
		"CustomEnding_MaxTime" call BIS_fnc_endMissionServer;
	};
	//No Limit
	case 0: {
	};
};