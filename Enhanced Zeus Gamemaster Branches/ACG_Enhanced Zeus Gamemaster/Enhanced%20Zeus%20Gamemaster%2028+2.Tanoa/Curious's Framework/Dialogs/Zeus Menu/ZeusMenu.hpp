class ZeusMenu
{
	idd = 785;
	movingEnabled = false;
	enableSimulation = true;


	class Controls
	{

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Qugome)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Zeus Menu"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Jukebox Creation Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Loop a selection of audio tracks."; //--- ToDo: Localize;
			//action = "closeDialog 0; 0 = execVM ""Scripts\Admin Menu\Kits\Zeus_Jukebox_Compile.sqf"";";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Introduction Creation Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Select an audio track and then create an intro to accustom it."; //--- ToDo: Localize;
			//action = "closeDialog 0; createDialog ""CURF_TrackSelect""; lbAdd [2100, ""This is War (VR Remix)""]; lbAdd [2100, ""Stage A: Lead Track 03""];";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Spawn Loop Creation Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Create a loop for AI to spawn at."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Map Editor Creation Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Enhanced map editor. Enables more icons to be placed on the map."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Structures Creation Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Choose from a list of prefab bases and spawn them at the debug island. Add the objects and then move them to the location.";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Scenario Setup Kit"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			//action = "createDialog ""ZeusScenarioSetup""; closeDialog 0;";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class IGUIBack_2202: IGUIBack
		{
			idc = 2202;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.341 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Request Server Check"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Force respawn all players. Excludes Zeus for obvious reasons."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "Admin Check"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Checks the server for an admin."; //--- ToDo: Localize;
			action = "closeDialog 0; 0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\AdminCheck.sqf"";";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Add Timer"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Add a custom timer to count down from a number."; //--- ToDo: Localize;
			//action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
			action = "closeDialog 0; createDialog ""ZeusCountdownTimer"";"; //execVM ""Curious's Framework\Scripts\Misc\Features\Timer.sqf"";
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "Clear Debris"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Clear un-used items, dead bodies etc."; //--- ToDo: Localize;
			action = "closeDialog 0; fnc_cleanup = compileFinal preprocessFileLineNumbers ""Curious's Framework\Scripts\Admin Menu\Server Settings\CleanUpMap.sqf""; null = [[worldSize/2, worldSize/2, 0], worldSize/2, 100, 1200] spawn fnc_cleanup;";
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Update Zeus Objects"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Add all objects on the map to Zeus. This option will cause lag."; //--- ToDo: Localize;
			action = "closeDialog 0; { _x addCuratorEditableObjects [[player],true]; } forEach allCurators; hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Objects added to Zeus! Lag may be caused.</ t>"";";
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Adjust View Distance"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Adjust the view distance for all players.";
			action = "closeDialog 0; execVM ""Curious's Framework\Scripts\View Distance\CreateVDMenu.sqf"";";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};