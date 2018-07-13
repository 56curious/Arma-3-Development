/*
Script name:	initRespawn.sqf
Created on:		09 ‎June ‎2018
Author:			Curious

Description:	Run code on FIRST respawn.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

//Text Used from NRE_earplugs.sqf by NemesisRE @ http://nrecom.net for the language enhancements - Config from Invade & Annex
PlugsIN = 2;
_image  = "<img image='media\Headphones.paa' size='3'/>";
_EPIn  = "<t size='1.35' font='RobotoCondensedBold'>""STR_NREEP_IN_HINT""</ t>";
_EPOUT = "<t size='1.35' font='RobotoCondensedBold'>""STR_NREEP_OUT_HINT""</ t>";
waitUntil {!isNull player}; //to prevent MP / JIP issues

(findDisplay 46 OR findDisplay 312) displayRemoveEventHandler ["KeyDown", MEP_KD];  //Prevent doubleUp of eventHandlers - Not sure these actually stack so just incase.
sleep 1;
MEP_KD = (findDisplay 46 OR findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 59) then {
 switch (PlugsIN) do {
     case 1: { PlugsIN = 2; 2 fadeSound 1; player groupChat 'EARPLUGS REMOVED'; };
	 case 2: { PlugsIN = 1; 2 fadeSound 0.2; player groupChat 'EARPLUGS FITTED';  };
	 default { };
	 };
}"];