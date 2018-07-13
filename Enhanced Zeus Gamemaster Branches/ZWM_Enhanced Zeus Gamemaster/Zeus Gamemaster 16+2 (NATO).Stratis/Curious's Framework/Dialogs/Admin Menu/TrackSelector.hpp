
class CURF_TrackSelect
{
	idd = -1;
	movingEnabled = false;

	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.297 * safezoneH;
		};
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.297 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Track Selection:"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class CUR_Combo: RscCombo
		{
			idc = 2100;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CUR_Exit: RscButton
		{
			idc = 1600;
			text = "Exit Creation Kit"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0;";
		};
		class CUR_Continue: RscButton
		{
			idc = 1601;
			text = "Continue"; //--- ToDo: Localize;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			action = "_Index = lbCurSel 2100; TrackSelection = lbText [2100, _Index]; closeDialog 0; createDialog ""CURF_Intro1""; ctrlSetText [1001,format[""Track Name: %1"", TrackSelection]];";
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "EZGM Framework - Track Selector"; //--- ToDo: Localize;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};