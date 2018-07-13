
class CURF_Intro1
{
	idd = -1;
	movingEnabled = false;

	class Controls
	{
		class CUR_Base_Frame: RscFrame
		{
			idc = 1800;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.473 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,1};
		};
		class CUR_Back: IGUIBack
		{
			idc = 2200;
			text = "CURF - By Curious"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.473 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,1};
		};
		class CUR_BACK2: IGUIBack
		{
			idc = 2201;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.37125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,1};
		};
		class CUR_Text_Title2: RscText
		{
			idc = 1006;
			text = "CURF - By Curious"; //--- ToDo: Localize;
			x = 0.314374 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Line1_Edit: RscEdit
		{
			idc = 1400;
			text = "NOTE: This box will flash text twice, such as an operation name."; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CUR_Line2_Edit: RscEdit
		{
			idc = 1401;
			text = "EXAMPLE: Location"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CUR_Line3_Edit: RscEdit
		{
			idc = 1402;
			text = "EXAMPLE: *STATIC*_Date"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CUR_Line4_Edit: RscEdit
		{
			idc = 1403;
			text = "EXAMPLE: Subtitle"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class CUR_Text_Title1: RscText
		{
			idc = 1001;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class CUR_Line1_Text: RscText
		{
			idc = 1000;
			text = "Text Line 1:"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Line2_Text: RscText
		{
			idc = 1002;
			text = "Text Line 2:"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Line3_Text: RscText
		{
			idc = 1003;
			text = "Text Line 3:"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Line4_Text: RscText
		{
			idc = 1004;
			text = "Text Line 4:"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Button_Close: RscButton
		{
			idc = 1600;
			text = "Exit Creation Kit"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0;";
		};
		class CUR_Button_Done: RscButton
		{
			idc = 1601;
			text = "Finish"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "_Text1 = ctrlText 1400; _Text2 = ctrlText 1401; _Text3 = ctrlText 1402; _Text4 = ctrlText 1403; _Text5 = ctrlText 1404; [_text1,_text2,_text3,_text4,_text5] execVM ""Curious's Framework\Scripts\Admin Menu\Kits\Zeus_Introduction.sqf""; closeDialog 0;";
		};
		class CUR_Line5_Text: RscText
		{
			idc = 1005;
			text = "Text Line 5:"; //--- ToDo: Localize;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class CUR_Line5_Edit: RscEdit
		{
			idc = 1404;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};