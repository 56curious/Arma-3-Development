
class Jukebox
{
	idd = -1;
	movingEnabled = false;

	class Controls
	{
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by Curious, v1.063, #Camimi)
	////////////////////////////////////////////////////////
	class IGUIBack_2200: IGUIBack
	{
		idc = 2200;
		x = 0.386562 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.396 * safezoneH;
		colorBackground[] = {0.137,0.137,0.137,0.75};

	};
	class IGUIBack_2201: IGUIBack
	{
		idc = 2201;
		x = 0.386562 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.03,0.51,1,0.75};
	};
	class RscText_1000: RscText
	{
		idc = 1000;
		text = "EZGM Framework - Jukebox"; //--- ToDo: Localize;
		x = 0.386562 * safezoneW + safezoneX;
		y = 0.302 * safezoneH + safezoneY;
		w = 0.226875 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscCombo_2100: RscCombo
	{
		idc = 2100;
		x = 0.4175 * safezoneW + safezoneX;
		y = 0.412 * safezoneH + safezoneY;
		w = 0.159844 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class RscText_1001: RscText
	{
		idc = 1001;
		text = "Track Selection"; //--- ToDo: Localize;
		x = 0.469062 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.061875 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscCombo_2101: RscCombo
	{
		idc = 2101;
		x = 0.4175 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class RscText_1002: RscText
	{
		idc = 1002;
		text = "Final Selection"; //--- ToDo: Localize;
		x = 0.469062 * safezoneW + safezoneX;
		y = 0.478 * safezoneH + safezoneY;
		w = 0.061875 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscButton_1600: RscButton
	{
		idc = 1600;
		text = "Confirm Track"; //--- ToDo: Localize;
		x = 0.396875 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.0670312 * safezoneW;
		h = 0.044 * safezoneH;
		action = "_Index = lbCurSel 2100; _Text = lbText [2100, _Index]; lbAdd [2101, _Text];";
	};
	class RscButton_1601: RscButton
	{
		idc = 1601;
		text = "Clear"; //--- ToDo: Localize;
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.04125 * safezoneW;
		h = 0.044 * safezoneH;
		action = "closeDialog 0;";
	};
	class RscButton_1602: RscButton
	{
		idc = 1602;
		text = "Create Jukebox"; //--- ToDo: Localize;
		x = 0.536094 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.0670312 * safezoneW;
		h = 0.044 * safezoneH;
		action = "SelectedTrack = lbCurSel 2101; _countingIndex = -1; for ""_i"" from 1 to 183 do {	_countingIndex = _countingIndex + 1;	HiddenTracks = lbData [2101, _countingIndex]; sleep 0.1;};  0 = execVM ""Curious's Framework\Scripts\Admin Menu\Kits\Zeus_Jukebox_Create.sqf""; closeDialog 0;";
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////
	};
};











