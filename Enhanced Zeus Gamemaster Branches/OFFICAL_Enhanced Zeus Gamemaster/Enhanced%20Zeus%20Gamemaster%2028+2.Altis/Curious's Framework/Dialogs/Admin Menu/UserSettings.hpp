class UserSettings
{
	idd = 4561234;
	movingEnabled = false;

	class Controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Zewuqu)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Custom User Settings"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Enable First Person Perspective Lock?"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2800: RscCheckbox
		{
			idc = 2800;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2801: RscCheckbox
		{
			idc = 2801;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Enable Mine Hints?"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			text = "3000"; //--- ToDo: Localize;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Can be overriden by the admin."; //--- ToDo: Localize;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Custom View Distance"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2802: RscCheckbox
		{
			idc = 2802;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Enable Map Information/Hints?"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2803: RscCheckbox
		{
			idc = 2803;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Enable Friendly Name Tags?"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCheckbox_2804: RscCheckbox
		{
			idc = 2804;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Enable Fatigue? (Not Local, i.e admin can override)"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Will block communication on this channel. This can only be reset when you relog! Leave blank to not block any channels."; //--- ToDo: Localize;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Disable Channels: (Seperate with a comma i.e ""Global, Side,Vehicle"")"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Send Away to the Wizards"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
			action ="(findDisplay 46) displayAddEventHandler [""KeyDown"",SettingsMenuEH]; _Display = findDisplay 4561234; systemChat str _Display; _Control_FPPLocked = _Display displayCtrl 2800;_Control_MineHints = _Display displayCtrl 2801;_Control_MapInfo = _Display displayCtrl 2802;_Control_FriendlyTags = _Display displayCtrl 2803;_Control_Fatigue = _Display displayCtrl 2804;_FPPLocked = cbChecked _Control_FPPLocked;_MineHints = cbChecked _Control_MineHints;_MapInfo = cbChecked _Control_MapInfo;_FriendlyTags = cbChecked _Control_FriendlyTags;_Fatigue = cbChecked _Control_Fatigue;_Channels = ctrlText 1401;_ViewDistance = ctrlText 1400; [_FPPLocked, _MineHints, _MapInfo, _FriendlyTags, _Fatigue, _Channels, _ViewDistance] execVM ""Scripts\Admin Menu\Kits\Settings.sqf""; closeDialog 0;";

		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};
