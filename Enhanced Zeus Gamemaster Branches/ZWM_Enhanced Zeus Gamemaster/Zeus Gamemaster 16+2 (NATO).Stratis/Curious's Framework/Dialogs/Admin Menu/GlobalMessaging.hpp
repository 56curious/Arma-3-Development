class GlobalMessaging
{
	idd = -1;
	movingEnabled = false;

	class Controls
	{
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by Curious, v1.063, #Pegoci)
	////////////////////////////////////////////////////////

	class IGUIBack_2200: IGUIBack
	{
		idc = 2200;
		x = 0.340156 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.319688 * safezoneW;
		h = 0.451 * safezoneH;
		colorBackground[] = {0.137,0.137,0.137,0.75};
	};
	class IGUIBack_2201: IGUIBack
	{
		idc = 2201;
		x = 0.340156 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.319688 * safezoneW;
		h = 0.033 * safezoneH;
		colorBackground[] = {0.03,0.51,1,0.75};
	};
	class RscText_1000: RscText
	{
		idc = 1000;
		text = "EZGM Framework - Global Messaging"; //--- ToDo: Localize;
		x = 0.340156 * safezoneW + safezoneX;
		y = 0.291 * safezoneH + safezoneY;
		w = 0.319688 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscText_1001: RscText
	{
		idc = 1001;
		text = "Line 1:"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.335 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscEdit_1400: RscEdit
	{
		idc = 1400;
		text = "*EXAMPLE* WARNING!"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.368 * safezoneH + safezoneY;
		w = 0.299062 * safezoneW;
		h = 0.044 * safezoneH;
		tooltip = "This box is the first line. Formatting is: LARGE, BOLD 1 or 2 words."; //--- ToDo: Localize;

	};
	class RscEdit_1401: RscEdit
	{
		idc = 1401;
		text = "*EXAMPLE* DO NOT TEAMKILL!"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.299062 * safezoneW;
		h = 0.044 * safezoneH;
		tooltip = "This box is the second line. Formatting is: REGULAR, Small sentence."; //--- ToDo: Localize;
	};
	class RscEdit_1402: RscEdit
	{
		idc = 1402;
		text = "*EXAMPLE* You will be kicked from the server!"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.544 * safezoneH + safezoneY;
		w = 0.299062 * safezoneW;
		h = 0.044 * safezoneH;
		tooltip = "This box is the Third line. Formatting is: SMALL, Normal Sentence or detail."; //--- ToDo: Localize;
	};
	class RscEdit_1403: RscEdit
	{
		idc = 1403;
		text = "*EXAMPLE* Continuing to teamkill will result in further action being taken."; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.632 * safezoneH + safezoneY;
		w = 0.299062 * safezoneW;
		h = 0.044 * safezoneH;
		tooltip = "This box is the Fourth line. Formatting is: SMALL, Normal Sentence or detail."; //--- ToDo: Localize;
	};
	class RscText_1002: RscText
	{
		idc = 1002;
		text = "Line 4:"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.599 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscText_1003: RscText
	{
		idc = 1003;
		text = "Line 3:"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.511 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscText_1004: RscText
	{
		idc = 1004;
		text = "Line 2:"; //--- ToDo: Localize;
		x = 0.350469 * safezoneW + safezoneX;
		y = 0.423 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class RscButton_1600: RscButton
	{
		idc = 1600;
		text = "Create Introduction"; //--- ToDo: Localize;
		x = 0.412344 * safezoneW + safezoneX;
		y = 0.687 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.044 * safezoneH;
		tooltip = "Custom Messages are displayed at the top of the players screen in WHITE. About 5 seconds between each."; //--- ToDo: Localize;
		action = "closeDialog 0; Line1Text = ctrlText 1400; Line2Text = ctrlText 1401; Line3Text = ctrlText 1402; Line4Text = ctrlText 1403; 0 = [Line1Text, Line2Text, Line3Text, Line4Text] execVM ""Curious's Framework\scripts\admin menu\kits\GlobalMessage.sqf"";";
	};
	class RscButton_1601: RscButton
	{
		idc = 1601;
		text = "Exit Creation Kit"; //--- ToDo: Localize;
		x = 0.505156 * safezoneW + safezoneX;
		y = 0.687 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.044 * safezoneH;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////

	};
};

Line1Text = ctrlText 1400;
Line2Text = ctrlText 1401;
Line3Text = ctrlText 1402;
Line4Text = ctrlText 1403;