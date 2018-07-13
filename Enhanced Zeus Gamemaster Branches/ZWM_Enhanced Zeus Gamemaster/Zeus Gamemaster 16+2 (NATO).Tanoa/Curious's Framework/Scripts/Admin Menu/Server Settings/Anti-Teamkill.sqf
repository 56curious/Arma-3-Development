/*
Script name:    Anti-Teamkill.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Stops teamkilling for all players.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

[{
_GodmodeOn = parseText "<t size='1.35' font='RobotoCondensedBold'>Teamkill Prevention </ t><t size='1.4' font='RobotoCondensedBold' color='#45d147'>Enabled!</ t>";
_GodmodeOff = parseText "<t size='1.35' font='RobotoCondensedBold'>Teamkill Prevention </ t><t size='1.4' font='RobotoCondensedBold' color='#d14d45'>Disabled!</ t>";

if (isNil "Toggled") then {Toggled = 1};
if (Toggled == 1) then {
    Toggled = 0;
    player setCaptive true;
    player allowDamage false;
    vehicle player allowDamage false;

    godmode_Event = player addEventHandler ["Respawn", {
        player setCaptive true;
        player allowDamage false;
        (vehicle player) allowDamage false;
    }];
    hint _GodmodeOn;
} else {
    Toggled = 1;
    player setCaptive false;
    player allowDamage true;
    vehicle player allowDamage true;
    player removeEventHandler ["Respawn", godmode_Event];
    hint _GodmodeOff;
};
}, "BIS_fnc_spawn"] call BIS_fnc_MP;