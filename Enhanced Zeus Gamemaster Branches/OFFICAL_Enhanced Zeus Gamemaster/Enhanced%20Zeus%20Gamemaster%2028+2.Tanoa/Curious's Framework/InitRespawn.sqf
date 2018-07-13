/*
Script name:	initRespawn.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	Run code on FIRST respawn.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

if (Player in curatorUnit OR Player in curatorUnit_1) then {

_subtitles = [
	[ "System",			"If you're not in the Zeus Interface, please Press 'Y' (default) to access.", 0],
	[ "System",			"While under construction, we would ask you not attempt to change the players side.", 10],
	[ "System",			"If you attempt something and it's not working, contact Curious via discord.", 20]
];
_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;

sleep 1;
curatorCamera setPos PositionDefined;
sleep 0.01;
curatorCamera setPos [position curatorCamera select 0, position curatorCamera select 1, 50];
curatorCamera setVectorDirAndUp [[0,1,-0.5],[0,0,1]];

diag_log format ["%1 has spawned correctly into ZEUS at %2", player, time];

};

if (side player == west) then {

diag_log format ["%1 has spawned correctly into BLUFOR at %2", player, time];

};

if (LocalLoadedCorrectly isequalto true) then {
	_subtitles = [
	[ "System",			"Your local settings have been loaded.", 50]
	];
_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;
} else {
	_subtitles = [
	[ "System",			"Your local settings have not been loaded. Relog to fix.", 50]
	];
_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;
};
if (PlayerServerLoadedCorrectly isequalto true) then {
	_subtitles = [
	[ "System",			"Your local-server settings have been loaded.", 57]
	];
_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;
} else {
	_subtitles = [
	[ "System",			"Your local-server settings have not been loaded. Relog to fix.", 57]
	];
_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;
};