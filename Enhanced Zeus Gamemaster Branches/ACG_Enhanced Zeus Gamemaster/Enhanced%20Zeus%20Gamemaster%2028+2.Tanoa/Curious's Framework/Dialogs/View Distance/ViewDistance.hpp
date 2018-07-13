class ViewDistanceMenu
{
	idd = 10000;
	movingEnabled = false;

	class Controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Xysiby)
		////////////////////////////////////////////////////////
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.627 * safezoneH;
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "View Distance Adjustments"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.126 * safezoneH + safezoneY;
			w = 0.237247 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Complete Settings"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.247562 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "On Foot:"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0361028 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Adjust the settings that you feel happy with while playing."; //--- ToDo: Localize;
			x = 0.402007 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.206302 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscSlider_1900: RscSlider
		{
			idc = 1900;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2800: RscCheckbox
		{
			idc = 2800;
			x = 0.536103 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0128694 * safezoneW;
			h = 0.0210741 * safezoneH;
		};
		class RscSlider_1901: RscSlider
		{
			idc = 1901;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Sync OBJECT with VIEW?"; //--- ToDo: Localize;
			x = 0.432952 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0979933 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "In Vehicle:"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0464179 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "VIEW:"; //--- ToDo: Localize;
			x = 0.396849 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0294322 * safezoneW;
			h = 0.0210741 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "OBJECT:"; //--- ToDo: Localize;
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0340202 * safezoneW;
			h = 0.0257037 * safezoneH;
		};
		class RscSlider_1902: RscSlider
		{
			idc = 1902;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscSlider_1903: RscSlider
		{
			idc = 1903;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1403: RscEdit
		{
			idc = 1403;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1009: RscText
		{
			idc = 1009;
			text = "In Vehicle:"; //--- ToDo: Localize;
			x = 0.376219 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0464179 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "VIEW:"; //--- ToDo: Localize;
			x = 0.396849 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0294322 * safezoneW;
			h = 0.0210741 * safezoneH;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "OBJECT:"; //--- ToDo: Localize;
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0340202 * safezoneW;
			h = 0.0257037 * safezoneH;
		};
		class RscSlider_1904: RscSlider
		{
			idc = 1904;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscSlider_1905: RscSlider
		{
			idc = 1905;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1404: RscEdit
		{
			idc = 1404;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1405: RscEdit
		{
			idc = 1405;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "Global:"; //--- ToDo: Localize;
			x = 0.381377 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.0928357 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1013: RscText
		{
			idc = 1013;
			text = "VIEW:"; //--- ToDo: Localize;
			x = 0.396849 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0294322 * safezoneW;
			h = 0.0210741 * safezoneH;
		};
		class RscText_1014: RscText
		{
			idc = 1014;
			text = "VIEW:"; //--- ToDo: Localize;
			x = 0.396849 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0294322 * safezoneW;
			h = 0.0210741 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "OBJECT:"; //--- ToDo: Localize;
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0340202 * safezoneW;
			h = 0.0257037 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "OBJECT:"; //--- ToDo: Localize;
			x = 0.386534 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0340202 * safezoneW;
			h = 0.0257037 * safezoneH;
		};
		class RscSlider_1906: RscSlider
		{
			idc = 1906;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscSlider_1907: RscSlider
		{
			idc = 1907;
			x = 0.427794 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.139254 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1406: RscEdit
		{
			idc = 1406;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1407: RscEdit
		{
			idc = 1407;
			x = 0.572206 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};