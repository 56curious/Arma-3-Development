class ZeusCountdownTimer
	{
		idd = 321;
		movingEnabled = false;
		enableSimulation = true;

		class controls
		{
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by Curious, v1.063, #Nicety)
			////////////////////////////////////////////////////////
			class IGUIBack_2200: IGUIBack
			{
				idc = 2200;
				text = "Amount of time to countdown:"; //--- ToDo: Localize;
				x = 0.386534 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.216617 * safezoneW;
				h = 0.396 * safezoneH;
				colorBackground[] = {0.137,0.137,0.137,0.75};
			};
			class IGUIBack_2201: IGUIBack
			{
				idc = 2201;
				x = 0.386534 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.216617 * safezoneW;
				h = 0.033 * safezoneH;
				colorBackground[] = {0.03,0.51,1,0.75};
			};
			class RscText_1000: RscText
			{
				idc = 1000;
				text = "EZGM Framework - Countdown Timer"; //--- ToDo: Localize;
				x = 0.386534 * safezoneW + safezoneX;
				y = 0.313 * safezoneH + safezoneY;
				w = 0.216617 * safezoneW;
				h = 0.033 * safezoneH;
			};
			class RscText_1001: RscText
			{
				idc = 1001;
				text = "Amount of time on the countdown (Seconds):"; //--- ToDo: Localize;
				x = 0.412322 * safezoneW + safezoneX;
				y = 0.39 * safezoneH + safezoneY;
				w = 0.159363 * safezoneW;
				h = 0.0376297 * safezoneH;
			};
			class RscEdit_1400: RscEdit
			{
				idc = 1400;
				x = 0.422637 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.139254 * safezoneW;
				h = 0.033 * safezoneH;
			};
			class RscButton_1601: RscButton
			{
				idc = 1601;
				text = "Cancel Current Timer"; //--- ToDo: Localize;
				x = 0.5 * safezoneW + safezoneX;
				y = 0.533 * safezoneH + safezoneY;
				w = 0.0773631 * safezoneW;
				h = 0.055 * safezoneH;
				tooltip = "Cancels any active timers with a message to say this has been done."; //--- ToDo: Localize;
				action = "StopTimer = true;";
			};
			class RscButton_1600: RscButton
			{
				idc = 1600;
				text = "Start Timer"; //--- ToDo: Localize;
				x = 0.407164 * safezoneW + safezoneX;
				y = 0.533 * safezoneH + safezoneY;
				w = 0.0773631 * safezoneW;
				h = 0.055 * safezoneH;
				tooltip = "Start the timer using the seconds above (Default 5 minutes)."; //--- ToDo: Localize;
				action = "_timerAmount = ctrlText ((findDisplay 321) displayCtrl 1400); [_timerAmount] execVM ""Curious's Framework\scripts\misc\features\countdownTimer.sqf""; closeDialog 0; StopTimer = false;";
			};
			class RscButton_1602: RscButton
			{
				idc = 1602;
				text = "Close Menu"; //--- ToDo: Localize;
				x = 0.45874 * safezoneW + safezoneX;
				y = 0.621 * safezoneH + safezoneY;
				w = 0.0618905 * safezoneW;
				h = 0.044 * safezoneH;
				tooltip = "Close this menu."; //--- ToDo: Localize;
				action = "closeDialog 0;";
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
		};
	};






