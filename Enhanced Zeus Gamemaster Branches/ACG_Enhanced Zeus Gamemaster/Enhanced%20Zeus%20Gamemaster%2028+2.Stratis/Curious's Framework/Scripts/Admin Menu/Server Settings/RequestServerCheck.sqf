/*
Script name:    RequestServerCheck.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Run debug console and output results about the server.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

_Seperater = parseText format ["<br />"];
_Main1 = parseText format [
"

<t size='2' underline='true' color='#f44242'>DEBUG</t>
<br />
<t size='1.5' color='#64c8ef'>Global Varables:</t>
<br />
", 12];

_Var1 = str player;

_Main2 = parseText format [
"
<br />
<t size='1.5' color='#64c8ef'>Mission Stats:</t>
<br />
", 12];

_Title1 = "Server up-time [HH:MM:SS]: ";
_Var2Temp = serverTime;
_Var2 = [_Var2Temp, "HH:MM:SS"] call BIS_fnc_secondsToString;
_Title2 = "Date [YY:MM:DD, HH:MM]: ";
_Var3 = date;
_Title3 = "Rain Level: ";
_var4 = rain;
_Title4 = "No. of users on west: ";
_var5 = west countSide playableUnits;
_Title5 = "Fog Level: ";
_var6 = fog;

_Main3 = parseText format [
"
<br />
<t size='1.5' color='#64c8ef'>More to come</t>
<br />
", 12];

_Final = composeText [_Main1, _Var1, _Main2, _Title1, str _Var2, _Seperater, _Title2, str _Var3, _Seperater, _Title3, str _Var4, _Seperater, _Title4, str _Var5, _Seperater, _Title5, str _Var6, _Main3];

hint _Final;