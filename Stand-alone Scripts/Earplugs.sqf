/*
Script name:	Earplugs.sqf
Created on:		09 ‎June ‎2018
Author:			Curious

Description:	Enable earplugs. Use F1 to enable/disable the ear plugs.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

PlugsIN = 2;
waitUntil {!isNull player};

(findDisplay 46 OR findDisplay 312) displayRemoveEventHandler ["KeyDown", MEP_KD];
sleep 1;
MEP_KD = (findDisplay 46 OR findDisplay 312) displayAddEventHandler ["KeyDown", "if (_this select 1 == 59) then {
 switch (PlugsIN) do {
     case 1: { PlugsIN = 2; 2 fadeSound 1; player groupChat 'EARPLUGS REMOVED'; };
	 case 2: { PlugsIN = 1; 2 fadeSound 0.2; player groupChat 'EARPLUGS FITTED';  };
	 default { };
	 };
}"];
