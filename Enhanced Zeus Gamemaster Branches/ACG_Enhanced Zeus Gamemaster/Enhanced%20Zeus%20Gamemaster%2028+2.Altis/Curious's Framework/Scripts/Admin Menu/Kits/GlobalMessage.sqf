/*
Script name:    globalMessage.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Creates a global message for the players to view.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

[Line1Text,0.01,(safeZoneY + 0.05),2,0,0,90]spawn bis_fnc_dynamicText;
playsound "Hint";
sleep 4;
[Line2Text,0.01,(safeZoneY + 0.05),2,0,0,90]spawn bis_fnc_dynamicText;
playsound "Hint";
sleep 7;
[Line3Text,0.01,(safeZoneY + 0.05),5,0,0,90]spawn bis_fnc_dynamicText;
playsound "Hint";
sleep 7;
[Line4Text,0.01,(safeZoneY + 0.05),15,0,0,90]spawn bis_fnc_dynamicText;
playsound "Hint";