class AdminMenu
{
	idd = 20000;
	movingEnabled = false;
	enableSimulation = true;


	class Controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Zyjude)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
				class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class IGUIBack_2202: IGUIBack
		{
			idc = 2202;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.011 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Admin Menu"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Creation Kits"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Enhance the experience of the players using various kits."; //--- ToDo: Localize;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Server Settings"; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Various options to maintain order on the server."; //--- ToDo: Localize;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Creation Kits (Zeus Only)"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Enhance your missions using various scripted functions. "; //--- ToDo: Localize;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Some features may not be working!"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {249,64,64,1};
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Spawn Loop Kit"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Create a loop for AI to spawn at."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Jukebox Kit"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Loop a selection of audio tracks."; //--- ToDo: Localize;
			//action = "closeDialog 0; 0 = execVM ""Scripts\Admin Menu\Kits\Zeus_Jukebox_Compile.sqf"";";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "Global MSG Kit"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Send a global message that appears on the screen of every player."; //--- ToDo: Localize;
			action = "closeDialog 0; createDialog ""GlobalMessaging"";";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Settings Kit"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Spawns a menu that allows players to setup their game to their liking."; //--- ToDo: Localize;
			action = "closeDialog 0; [""UserSettings"", ""CreateDialog""] call BIS_fnc_MP;";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Introduction Kit"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Select an audio track and then create an intro to accustom it."; //--- ToDo: Localize;
			//action = "closeDialog 0; createDialog ""CURF_TrackSelect"";";
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Name Of Kit"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Map Editor Kit"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Enhanced map editor. Enables more icons to be placed on the map."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Structures Kit"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Name Of Kit"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "Name Of Kit"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Name Of Kit"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Name Of Kit"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "Force View Distance"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Force the view distance for ALL players. Over-rides player-set."; //--- ToDo: Localize;
			action = "execVM ""taw_VD\fn_openMenu.sqf"";";
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "Anti-Team kill (Toggle)"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Block team killing. Ensure you toggle back to revert damage allowance."; //--- ToDo: Localize;
			action = "closeDialog 0; 0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\Anti-teamkill.sqf"";";
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Teleport to a Player"; //--- ToDo: Localize;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Teleport to a player."; //--- ToDo: Localize;
			action = "hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Feature Currently Down - Coming soon!</ t>"";";
		};
		class RscButton_1615: RscButton
		{
			idc = 1615;
			text = "Clean Up Map"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Clean the map up of objects, dead bodies etc."; //--- ToDo: Localize;
			action = "closeDialog 0; fnc_cleanup = compileFinal preprocessFileLineNumbers ""Curious's Framework\Scripts\Admin Menu\Server Settings\CleanUpMap.sqf""; null = [[worldSize/2, worldSize/2, 0], worldSize/2, 100, 1200] spawn fnc_cleanup;";
		};
		class RscButton_1616: RscButton
		{
			idc = 1616;
			text = "Transfer Admin"; //--- ToDo: Localize;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Transfer your admin to another player. NOTE: You will be placed back in lobby to remove your admin menu.";
			action = "close dialog; """";";
		};
		class RscButton_1617: RscButton
		{
			idc = 1617;
			text = "Disable Fatigue (Toggle)"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Remove fatigue from all players and JIP. "; //--- ToDo: Localize;
			action = "closeDialog 0; 0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\DisableFatigue.sqf"";";
		};
		class RscButton_1618: RscButton
		{
			idc = 1618;
			text = "Update Zeus Objects"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Add all objects on the map to Zeus. This option will cause lag. Ensure you toggle back to revert fatigue allowance."; //--- ToDo: Localize;
			action = "closeDialog 0; { _x addCuratorEditableObjects [[player],true]; } forEach allCurators; hint parseText ""<t size='1.35' font='RobotoCondensedBold'>Objects added to Zeus! Lag may be caused.</ t>"";";
		};
		class RscButton_1619: RscButton
		{
			idc = 1619;
			text = "Force Respawn"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Force respawn all players. Excludes Zeus for obvious reasons."; //--- ToDo: Localize;
			action = "closeDialog 0; {player setDamage 1; hint parseText ""<t size='1.35' font='RobotoCondensedBold'>All Players have been forced to respawn!</ t>"";} forEach allPlayers;";
		};
		class RscButton_1620: RscButton
		{
			idc = 1620;
			text = "Wipe Map"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Wipes the map of objects."; //--- ToDo: Localize;
			action = "closeDialog 0; 0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\WipeMap.sqf"";";
		};
		class RscButton_1621: RscButton
		{
			idc = 1621;
			text = "Dynamic Weather"; //--- ToDo: Localize;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Enable the Dynamic Weather Script. (CANNOT BE PAUSED/STOPPED!)"; //--- ToDo: Localize;
			action = "closeDialog 0; if (isServer) then {_nil = [] execVM ""Weather.sqf""};";
		};
		class RscButton_1622: RscButton
		{
			idc = 1622;
			text = "Admin Check"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Checks the server for an admin."; //--- ToDo: Localize;
			action = "closeDialog 0; 0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\AdminCheck.sqf"";";
		};
		class RscButton_1623: RscButton
		{
			idc = 1623;
			text = "Request Server Check"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Force respawn all players. Excludes Zeus for obvious reasons."; //--- ToDo: Localize;
			action = "0 = execVM ""Curious's Framework\Scripts\Admin Menu\Server Settings\RequestServerCheck.sqf"";";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};