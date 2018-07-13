class CreateMissions
{
	idd = -1;
	movingEnabled = false;

	class Controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Qafado)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.418 * safezoneH;
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
			text = "EZGM Framework - Create Quick Mission"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Faction:"; //--- ToDo: Localize;
			x = 0.314323 * safezoneW + safezoneX;
			y = 0.400074 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "No. Players:"; //--- ToDo: Localize;
			x = 0.300937 * safezoneW + safezoneX;
			y = 0.444074 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Vehicles:"; //--- ToDo: Localize;
			x = 0.310937 * safezoneW + safezoneX;
			y = 0.485185 * safezoneH + safezoneY;
			w = 0.0392187 * safezoneW;
			h = 0.0229259 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Armor:"; //--- ToDo: Localize;
			x = 0.319115 * safezoneW + safezoneX;
			y = 0.532074 * safezoneH + safezoneY;
			w = 0.0392187 * safezoneW;
			h = 0.0229259 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Helicopters:"; //--- ToDo: Localize;
			x = 0.300885 * safezoneW + safezoneX;
			y = 0.576074 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Support:"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0392187 * safezoneW;
			h = 0.0229259 * safezoneH;
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2101: RscCombo
		{
			idc = 2101;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2102: RscCombo
		{
			idc = 2102;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2103: RscCombo
		{
			idc = 2103;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2104: RscCombo
		{
			idc = 2104;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2105: RscCombo
		{
			idc = 2105;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Objective 1:"; //--- ToDo: Localize;
			x = 0.518542 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "Objective 2:"; //--- ToDo: Localize;
			x = 0.518542 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1009: RscText
		{
			idc = 1009;
			text = "Objective 3:"; //--- ToDo: Localize;
			x = 0.518542 * safezoneW + safezoneX;
			y = 0.489926 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "Objective 4:"; //--- ToDo: Localize;
			x = 0.518542 * safezoneW + safezoneX;
			y = 0.532074 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Extras:"; //--- ToDo: Localize;
			x = 0.535573 * safezoneW + safezoneX;
			y = 0.620074 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2106: RscCombo
		{
			idc = 2106;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2107: RscCombo
		{
			idc = 2107;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2108: RscCombo
		{
			idc = 2108;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2109: RscCombo
		{
			idc = 2109;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2110: RscCombo
		{
			idc = 2110;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "Area of Operations:"; //--- ToDo: Localize;
			x = 0.493229 * safezoneW + safezoneX;
			y = 0.575148 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2111: RscCombo
		{
			idc = 2111;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Create Mission(s)"; //--- ToDo: Localize;
			x = 0.469063 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Creates the mission from the params above. Cannot be stopped."; //--- ToDo: Localize;
			action = "_Sel1 = lbCurSel 2100; _Sel2 = lbCurSel 2101;	_Sel3 = lbCurSel 2102; _Sel4 = lbCurSel 2103; _Sel5 = lbCurSel 2104; _Sel6 = lbCurSel 2105;	_Sel7 = lbCurSel 2106; _Sel8 = lbCurSel 2107; _Sel9 = lbCurSel 2108; _Sel10 = lbCurSel 2109; _Sel11 = lbCurSel 2110; _Sel12 = lbCurSel 2111; [_Sel1,_Sel2,_Sel3,_Sel4,_Sel5,_Sel6,_Sel7,_Sel8,_Sel9,_Sel10,_Sel11,_Sel12] execVM ""Curious's Framework\Scripts\Misc\Modules\CreateMission.sqf"";";
		};
		class RscButton_1601: RscButton
		{
			idc = 1600;
			text = "Add Extra"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.044 * safezoneH;
			tooltip = "Do not double up extras.";
			action "_Extra = lbCurSel 2111; _FinalArray = _FinalArray + _Extra; ctrlSetText [1013, str _FinalArray];";
		};
		class RscText_1013: RscText
		{
			idc = 1013;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.044 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};