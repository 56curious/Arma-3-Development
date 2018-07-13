class CCIC
{
	idd = 10000;
	movingEnabled = false;

	class Controls
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Curious's Charming Intro Creator"; //--- ToDo: Localize;
			x = 0.438000 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Background: IGUIBack
		{
			idc = 2200;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0.098,0.098,0.098,0.5};
		};
		class Button_Option1: RscButton
		{
			idc = 1600;
			text = "BIS_fnc_typeText"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 0; createDialog ""Dialog_TypeText"";";
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option2: RscButton
		{
			idc = 1601;
			text = "BIS_fnc_typeText2"; //--- ToDo: Localize;
			x = 0.510313 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 0; createDialog Dialog_TypeText2;";
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option3: RscButton
		{
			idc = 1602;
			text = "BIS_fnc_dynamicText"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option4: RscButton
		{
			idc = 1603;
			text = "BIS_fnc_infoText"; //--- ToDo: Localize;
			x = 0.510313 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option5: RscText
		{
			idc = 1001;
			text = "Text Introductions"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.044 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option6: RscText
		{
			idc = 1002;
			text = "Video Introductions"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.044 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
		class Button_Option7: RscButton
		{
			idc = 1604;
			text = "BIS_fnc_playVideo"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = "0.018 / (getResolution select 5)";
			colorText[] = {1,1,1,1};
		};
	};
};
