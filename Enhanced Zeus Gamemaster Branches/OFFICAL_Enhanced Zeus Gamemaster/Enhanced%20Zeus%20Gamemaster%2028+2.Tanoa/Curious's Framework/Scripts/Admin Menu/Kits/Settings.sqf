/*
Script name:    Settings.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Create and impliment settings from the user settings menu.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

params ["_FPPLocked", "_MineHints", "_MapInfo", "_FriendlyTags", "_Fatigue", "_Channels", "_ViewDistance"];


hint "Exporting Options";
sleep 5;
hint format ["%1 %2 %3 %4 %5 %6 %7", _FPPLocked, _MineHints, _MapInfo, _FriendlyTags, _Fatigue, _Channels, _ViewDistance]; // displays the return values of the params


//
//
//First Person Lock - IGNORE
//
//
/*
display_Options = (findDisplay 46) createDisplay "RscDisplayEmpty";
CTRL_FPPLock = display_Options ctrlCreate ["RscCheckbox", 7147];
CTRL_FPPLock ctrlSetPosition [0.402031 * safezoneW + safezoneX, 0.313 * safezoneH + safezoneY , 0.0154688 * safezoneW, 0.022 * safezoneH];

CTRL_FPPLock ctrladdEventHandler ["onCheckedChanged", {
    If (!FPPLocked) then {
        FPPLocked = true;
    } else {
        FPPLocked = false;
    };
    If (FPPLocked) then {
        EH_FPPLocked = player addEventHandler ["Respawn", {

    	[] spawn {
			while {(true)} do
			{
				if (cameraView == "External") then
				{
					if ((vehicle player) == player) then
					{
						player switchCamera "Internal";
					};
				};
			};
		};
}];
    };
}];
*/

SystemChat "First Person toggle is currently not working. Sorry for any inconvenience.";

//
//
//Mine Hints
//
//

SystemChat "Mine Hints toggle is currently not working. Sorry for any inconvenience.";


//
//
//Map Information and hints
//
//

        QS_ST_map_enableUnitIcons = _MapInfo;
        QS_ST_enableGroupIcons = _MapInfo;

//
//
//Name Tag Removeal
//
//

        QS_ST_gps_enableUnitIcons = _FriendlyTags;

//
//
//Enable Fatigue
//
//

        player enableFatigue _Fatigue;

//
//
//Disable Channels  - IGNORE
//
//
/*
_BrokenChannels = _Channels splitString ",";
switch _BrokenChannels  do {

    case "Global": {0 enableChannel false;};
    case "global": {0 enableChannel false;};
    case "Side": {1 enableChannel false;};
    case "side": {1 enableChannel false;};
    case "Command": {2 enableChannel false;};
    case "command": {2 enableChannel false;};
    case "Vehicle": {4 enableChannel false;};
    case "vehicle": {4 enableChannel false;};
    case "Direct": {5 enableChannel false;};
    case "direct": {5 enableChannel false;};
    case "": {systemChat "No channels are being muted."};

};
*/
SystemChat "Channel toggle is currently not working. Sorry for any inconvenience.";

//
//
//Adjust View Distance
//
//

setViewDistance _ViewDistance;
setObjectViewDistance _ViewDistance;

sleep 2;

0 = execVM "Curious's Framework\Dialogs\Settings Menu\SoldierTracking.sqf";






















/*
if (_FPPLocked == true) then {
waituntil {!(IsNull (findDisplay 46))};
_CheckBoxFPP = (findDisplay 46) displayAddEventHandler ["onCheckBoxesSelChanged", "
[] spawn {
    if ((difficultyOption ""thirdPersonView"") == 1) then {
        waitUntil {
            _veh = (vehicle player);
            _inVeh = (_veh != player);
            _isTP = (cameraView == ""EXTERNAL"");
            _isDriving = (((player == commander _veh) || (player == driver _veh)) && (_inVeh));

            if (_isTP) then {
                if (!(_isDriving)) then {
                    _veh switchCamera ""INTERNAL"";
                };
            };
            (false)
        };
    };
};}"
];};

/*
CUR_FPPLock = {

["CUR_FPPEH", "onEachFrame", {(vehicle player) switchCamera "cargo"}] call BIS_fnc_addStackedEventHandler;

waituntil {!(IsNull (findDisplay 46))};
_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 65665,82) then {  hint RightClicked.	;}"];



};[""CUR_FPPEH"", ""onEachFrame""] call BIS_fnc_removeStackedEventHandler;





// Checkbox Collection
"closeDialog 0; _Display = findDisplay 4561234;_Control_FPPLocked = _Display displayCtrl 2800;_Control_MineHints = _Display displayCtrl 2800;_Control_MapInfo = _Display displayCtrl 2800;_Control_FriendlyTags = _Display displayCtrl 2800;_Control_Fatigue = _Display displayCtrl 2800;_FPPLocked = ctrlChecked _Control_FPPLocked;_MineHints = ctrlChecked _Control_MineHints;_MapInfo = ctrlChecked _Control_MapInfo;_FriendlyTags = ctrlChecked _Control_FriendlyTags;_Fatigue = ctrlChecked _Control_Fatigue;_Channels = ctrlText 1401;_ViewDistance = ctrlText 1400; 0 = [_FPPLocked, _MineHints, _MapInfo, _FriendlyTags, _Fatigue, _Channels, _ViewDistance] execVM ""Scripts\Admin Menu\Kits\Settings.sqf"";";
*/