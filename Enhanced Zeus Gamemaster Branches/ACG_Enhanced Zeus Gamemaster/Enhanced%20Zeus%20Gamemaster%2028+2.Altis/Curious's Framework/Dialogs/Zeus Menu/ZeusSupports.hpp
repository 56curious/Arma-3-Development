class ZeusSupports
{
	idd = -1;
	movingEnabled = false;
	enableSimulation = true;


	class Controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Bokuko)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.495 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Faction Supports"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Choose the support type desired, then the number of support runs available."; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Support Type:"; //--- ToDo: Localize;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "No. of Supports:"; //--- ToDo: Localize;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2101: RscCombo
		{
			idc = 2101;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2102: RscCombo
		{
			idc = 2102;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2103: RscCombo
		{
			idc = 2103;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2104: RscCombo
		{
			idc = 2104;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Please note, Ares is required to select specific units from the environment."; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RscCombo_2105: RscCombo
		{
			idc = 2105;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2106: RscCombo
		{
			idc = 2106;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2107: RscCombo
		{
			idc = 2107;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2108: RscCombo
		{
			idc = 2108;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2109: RscCombo
		{
			idc = 2109;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Cancel"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0;"
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Send"; //--- ToDo: Localize;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.044 * safezoneH;
			action = "SupportComplete = true; closeDialog 0;";
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Faction:"; //--- ToDo: Localize;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.417556 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscCombo_2110: RscCombo
		{
			idc = 2110;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};