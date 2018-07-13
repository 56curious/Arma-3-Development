class Dialog_TypeText
{
	idd = 10500;
	movingEnabled = false;

	class Controls
	{
		class Text_Title: RscText
		{
			idc = 1000;
			text = "Curious's Charming Intro Creator"; //--- ToDo: Localize;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Text_Function_Title: RscText
		{
			idc = 1001;
			text = "BIS_fnc_typeText"; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Text_Line1: RscText
		{
			idc = 1002;
			text = "Line 1:"; //--- ToDo: Localize;
			x = 0.337031 * safezoneW + safezoneX;
			y = 0.433074 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Text_Params: RscText
		{
			idc = 1004;
			text = "Parameters: [""__TextToDisplay__,"",""<t align = '__Alignment__' shadow = '__0-1__' size = '__0.5 - 2__'>%1</t>""],"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "NOTE: Copy each parameter, changing the values where __ is present."; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.381563 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Line 2:"; //--- ToDo: Localize;
			x = 0.338021 * safezoneW + safezoneX;
			y = 0.521297 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Line 3:"; //--- ToDo: Localize;
			x = 0.336458 * safezoneW + safezoneX;
			y = 0.611111 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "NOTE: This function only supports three lines. For more, use ""BIS_fnc_typeText2""."; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Button_Main_Menu: RscButton
		{
			idc = 1600;
			text = "Main Menu"; //--- ToDo: Localize;
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 0; createDialog ""CCIC"";";
		};
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.381563 * safezoneW;
			h = 0.528 * safezoneH;
		};
	};
};