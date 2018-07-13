/*
Script name:	addSupport.sqf
Created on:		12 ‎June ‎2018
Author:			Curious

Description:	Define all listboxes and create dialog to choose supports for selected faction.
				Come back to this script and then add said supports to faction squad leaders.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

				*NOTE: _this select 0; = Location array - _this select 1; = Object module is on.
				*NOTE: The above is the same for any scripts within this script.
*/

//IGNORE NOTES, FOR PERSONAL USE ONLY
//Base Defines
SupportComplete = false;
createDialog "ZeusSupports";


//loop adding to first set of LB
_num = 2100;
for "_i" from 2100 to 2104 do {
	lbAdd [_Num, "Artillery"];
	lbAdd [_Num, "Transport"];
	lbAdd [_Num, "CAS_Heli"];
	lbAdd [_Num, "CAS_Bombing"];
	lbAdd [_Num, "Drop"];
	_num = _num + 1;
};


//loop adding to second set of LB
_num2 = 2105;
for "_i" from 2105 to 2109 do {
	lbAdd [_Num2, "1"];
	lbAdd [_Num2, "2"];
	lbAdd [_Num2, "3"];
	lbAdd [_Num2, "4"];
	lbAdd [_Num2, "5"];
	lbAdd [_Num2, "Unlimited"];
	_num2 = _num2 + 1;
};

lbAdd [2110, "NATO"];
lbAdd [2110, "CSAT"];
lbAdd [2110, "AAF"];


//wait until dialog is complete
waitUntil {SupportComplete isEqualTo true};

if (isServer) then {
//Return vals
_lb0T = lbCurSel 2100; _lb0 = lbText [2100,_lb0T];
_lb1T = lbCurSel 2101; _lb1 = lbText [2101,_lb1T];
_lb2T = lbCurSel 2102; _lb2 = lbText [2102,_lb2T];
_lb3T = lbCurSel 2103; _lb3 = lbText [2103,_lb3T];
_lb4T = lbCurSel 2104; _lb4 = lbText [2104,_lb4T];
_lb5T = lbCurSel 2105; _lb5 = lbText [2105,_lb5T];
_lb6T = lbCurSel 2106; _lb6 = lbText [2106,_lb6T];
_lb7T = lbCurSel 2107; _lb7 = lbText [2107,_lb7T];
_lb8T = lbCurSel 2108; _lb8 = lbText [2108,_lb8T];
_lb9T = lbCurSel 2109; _lb9 = lbText [2109,_lb9T];
_lb10T = lbCurSel 2110; _lb10 = LbText [2110,_lb10T];


//Work out used/un-used lbs
_SupportType = ["Artillery","Transport","CAS_Heli","CAS_Bombing","Drop"];
	if (_lb0 IN _SupportType) then { _lb0Active = _lb0; };
	if (_lb1 IN _SupportType) then { _lb1Active = _lb1; };
	if (_lb2 IN _SupportType) then { _lb2Active = _lb2; };
	if (_lb3 IN _SupportType) then { _lb3Active = _lb3; };
	if (_lb4 IN _SupportType) then { _lb4Active = _lb4; };

_Number = ["1","2","3","4","5","Unlimited"];
	if (_lb5 IN _Number) then { _lb5Active = _lb5; };
	if (_lb6 IN _Number) then { _lb6Active = _lb6; };
	if (_lb7 IN _Number) then { _lb7Active = _lb7; };
	if (_lb8 IN _Number) then { _lb8Active = _lb8; };
	if (_lb9 IN _Number) then { _lb9Active = _lb9; };

_FactionType = ["NATO","CSAT","AAF"];
	if (_lb10 IN _FactionType) then { _lb10Active = _lb0; };


//Grab squadleaders
_UnitLeader = leader player;


//Call functions
	//setup limits
	[(leader player), _lb0Active, _lb5Active] call BIS_fnc_limitSupport;
	[(leader player), _lb1Active, _lb6Active] call BIS_fnc_limitSupport;
	[(leader player), _lb2Active, _lb7Active] call BIS_fnc_limitSupport;
	[(leader player), _lb3Active, _lb8Active] call BIS_fnc_limitSupport;
	[(leader player), _lb4Active, _lb9Active] call BIS_fnc_limitSupport;








};