/*
Script name:	countdownTimer.sqf
Created on:		04 July ‎2018
Author:			Curious

Description:	Collect a time amount and run a countdown timer using a UI pannel.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

params ["_timerAmount", "60", ["string"]];

_timerAmount = parseNumber _timerAmount;

[[_timerAmount], {
params ["_timerAmount"];
StopTimer = false;
sleep 1;

"CUR_Countdown" cutRsc ["CountdownNotification", "PLAIN", -1, true];
playSound "Beep_Target";

_displayM = uiNamespace getVariable "CUR_CountdownVar";
_control = (_displayM displayCtrl 1000);


for "_i" from _timerAmount to 0 step -1 do {
    if !(StopTimer isEqualTo true) then {
    if (_timerAmount < 60) then {
        _control ctrlSetStructuredText parseText format ["%1 seconds!" , _timerAmount];
    } else {
        _control ctrlSetStructuredText parseText format ["%1 minutes" ,floor (_timerAmount / 60)];
    };
    if (_timerAmount < 15) then { _control ctrlSetStructuredText parseText format ["%1 seconds!" , _timerAmount]; playSound "Beep_Target"; };
    _timerAmount = _timerAmount - 1;
    sleep 1;
    } else {
        ["<t color='#ff7635' size = '.8'>THE CURRENT COUNTDOWN HAS BEEN CANCELED BY ZEUS!</t>",0.01,(safeZoneY + 0.05),10,1,0,90]spawn BIS_fnc_dynamicText;
        "CUR_Countdown" cutFadeOut 2;
    };
};

playSound "Transition3";
["<t color='#ff7635' size = '1.2' font = 'RobotoCondensedBold'>THE TIMER HAS ENDED!</t>",0.01,(safeZoneY + 0.05),3,1,0,90]spawn BIS_fnc_dynamicText;
"CUR_Countdown" cutFadeOut 2;
}] remoteExec ["spawn"];
