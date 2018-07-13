
class ZeusScenarioSetup
	{
		idd = 457;
		movingEnabled = false;
		enableSimulation = true;

		class controls
		{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Vudydo)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Scenario Setup"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.376406 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "NOTE: Some edits here will effect some scripts using this data!"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Scenario Environment:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "View Distance (Max 12K):"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Overcast (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Fog (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Rain (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Waves (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "Wind (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1009: RscText
		{
			idc = 1009;
			text = "Lightning (use 0.1 to 1):"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "Scenario Information:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Date (Year, Month, Day, Hour (24Hr), Minute): "; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "Scenario Name:"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1408: RscEdit
		{
			idc = 1408;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1403: RscEdit
		{
			idc = 1403;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1404: RscEdit
		{
			idc = 1404;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1405: RscEdit
		{
			idc = 1405;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1406: RscEdit
		{
			idc = 1406;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class IGUIBack_2202: IGUIBack
		{
			idc = 2202;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscEdit_1407: RscEdit
		{
			idc = 1407;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Confirm Setup"; //--- ToDo: Localize;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};