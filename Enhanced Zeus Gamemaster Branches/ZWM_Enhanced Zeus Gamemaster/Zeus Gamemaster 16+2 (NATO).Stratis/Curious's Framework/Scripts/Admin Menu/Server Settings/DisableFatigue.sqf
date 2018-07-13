/*
Script name:    DisableFatigue.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Disables Fatigue for all players.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

[{
_FatigueOff = parseText "<t size='1.35' font='RobotoCondensedBold'>Fatigue Prevention </ t><t size='1.4' font='RobotoCondensedBold' color='#45d147'>Enabled!</ t>";
_FatigueOn = parseText "<t size='1.35' font='RobotoCondensedBold'>Fatigue Prevention </ t><t size='1.4' font='RobotoCondensedBold' color='#d14d45'>Disabled!</ t>";

if (isNil "Toggled") then {Toggled = 1};
if (Toggled == 1) then {
    Toggled = 0;
    player enableFatigue false;
    vehicle player enableFatigue false;

    Fatigue_Event = player addEventHandler ["Respawn", {
        player setCaptive true;
        player allowDamage false;
        (vehicle player) allowDamage false;
    }];
    hint _FatigueOff;
} else {
    Toggled = 1;
    player enableFatigue true;
    vehicle player enableFatigue true;
    player removeEventHandler ["Respawn", Fatigue_Event];
    hint _FatigueOn;
};
}, "BIS_fnc_spawn"] call BIS_fnc_MP;