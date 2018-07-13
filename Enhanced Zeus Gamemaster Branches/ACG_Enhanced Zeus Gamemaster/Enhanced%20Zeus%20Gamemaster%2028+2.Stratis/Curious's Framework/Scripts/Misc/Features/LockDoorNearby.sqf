/*
Script name:	LockDorNearby.sqf
Created on:		09 ‎June ‎2018
Author:			Curious

Description:	Lock doors from the defined params.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

_Radius = _this Select 0;
_LoopVal = _this Select 1;
_DoorVal = 1;


for "_i" from 1 to _LoopVal do {
	((nearestobjects [this, ["house_f"], _Radius]) select 0) setVariable ['bis_disabled_Door_1',_DoorVal,true];
	_DoorVal = _DoorVal + 1;
	sleep 0.5;
};