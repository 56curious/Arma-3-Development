[west, "WEST_RIFLEMAN"] call BIS_fnc_addRespawnInventory;
[west, "WEST_ENGINEER"] call BIS_fnc_addRespawnInventory;
[west, "WEST_MARKSMAN"] call BIS_fnc_addRespawnInventory;


onEachFrame {
	if !(isNull (findDisplay 49)) then {
				[{((findDisplay 49) displayCtrl 103) ctrlSetText "Curious's Framework - V1.1.2";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
				[{((findDisplay 49) displayCtrl 2) ctrlSetText "Return to game";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
				[{((findDisplay 49) displayCtrl 1010) ctrlSetText "manual respawn";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
				[{((findDisplay 49) displayCtrl 101) ctrlSetText "Options & Settings";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
				[{((findDisplay 49) displayCtrl 122) ctrlSetText "Help & Tips";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
				[{((findDisplay 49) displayCtrl 104) ctrlSetText "Leave Server";},"BIS_fnc_spawn",true,true] call BIS_fnc_MP;
	};
};


