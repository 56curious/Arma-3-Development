/*
Script name:	CompileMissions.sqf
Created on:		‎12 ‎June ‎2018
Author:			Curious

Description:	Compile data and create the menu for creating missions.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/


		//Send comboBoxes off and create GUI
		createDialog "CreateMissions";

		//Setup each comboBox
			//Faction
			lbAdd [2100, "CSAT"];
			lbAdd [2100, "AAF"];

			//Players
			_Increase = 0; //Stops unexpected error
			for "_i" from 1 to 20 do {
				_Increase = _Increase + 1;
				lbAdd [2101, str _Increase];
			};

			//Vehicles
			_FactionChosen = lbCurSel 2100;
			if (_FactionChosen == "CSAT") then {
			lbAdd [2102, "1x Ifrit"];
			lbAdd [2102, "2x Ifrit"];
			lbAdd [2102, "1x Ifrit HMG"];
			lbAdd [2102, "2x Ifrit HMG"];
			lbAdd [2102, "1x Qilin"];
			lbAdd [2102, "2x Qilin"];
			lbAdd [2102, "1x Qilin (Armed)"];
			lbAdd [2102, "2x Qilin (Armed)"];
			} else {
			lbAdd [2102, "1x Strider"];
			lbAdd [2102, "2x Strider"];
			lbAdd [2102, "1x Strider HMG"];
			lbAdd [2102, "2x Strider HMG"];
			lbAdd [2102, "1x Prowler"];
			lbAdd [2102, "2x Prowler"];
			lbAdd [2102, "1x Prowler (Armed)"];
			lbAdd [2102, "2x Prowler (Armed)"];
			};

			//Armor
			_FactionChosen = lbCurSel 2100;
			if (_FactionChosen == "CSAT") then {
			lbAdd [2103, "1x Kamysh"];
			lbAdd [2103, "2x Kamysh"];
			lbAdd [2103, "1x Marid"];
			lbAdd [2103, "2x Marid"];
			} else {
			lbAdd [2103, "1x Gorgon"];
			lbAdd [2103, "2x Gorgon"];
			lbAdd [2103, "1x Mora"];
			lbAdd [2103, "2x Mora"];
			};

			//Helicopters
			_FactionChosen = lbCurSel 2100;
			if (_FactionChosen == "CSAT") then {
			lbAdd [2104, "1x Orca (Unarmed)"];
			lbAdd [2104, "1x Orca (Armed)"];
			} else {
			lbAdd [2104, "1x Hellcat (Unarmed)"];
			lbAdd [2104, "1x Hellcat (Armed)"];
			};

			//Support
			lbAdd [2105, "Yes"];
			lbAdd [2105, "No"];

			//Objective 1
			lbAdd [2106, "Destroy Weapon Cache"];
			lbAdd [2106, "Destroy Building"];
			lbAdd [2106, "Destroy Vehicle"];
			lbAdd [2106, "Destory Vehcile"];
			lbAdd [2106, "Capture Weapon Cache"];
			lbAdd [2106, "Capture Outpost"];
			lbAdd [2106, "Capture Town"];
			lbAdd [2106, "Kill HVT"];
			lbAdd [2106, "Secure HVT"];

			//Objective 2
			lbAdd [2107, "Destroy Weapon Cache"];
			lbAdd [2107, "Destroy Building"];
			lbAdd [2107, "Destroy Vehicle"];
			lbAdd [2107, "Destory Vehcile"];
			lbAdd [2107, "Capture Weapon Cache"];
			lbAdd [2107, "Capture Outpost"];
			lbAdd [2107, "Capture Town"];
			lbAdd [2107, "Kill HVT"];
			lbAdd [2107, "Secure HVT"];

			//Objective 3
			lbAdd [2108, "Destroy Weapon Cache"];
			lbAdd [2108, "Destroy Building"];
			lbAdd [2108, "Destroy Vehicle"];
			lbAdd [2108, "Destory Vehcile"];
			lbAdd [2108, "Capture Weapon Cache"];
			lbAdd [2108, "Capture Outpost"];
			lbAdd [2108, "Capture Town"];
			lbAdd [2108, "Kill HVT"];
			lbAdd [2108, "Secure HVT"];

			//Objective 4
			lbAdd [2109, "Destroy Weapon Cache"];
			lbAdd [2109, "Destroy Building"];
			lbAdd [2109, "Destroy Vehicle"];
			lbAdd [2109, "Destory Vehcile"];
			lbAdd [2109, "Capture Weapon Cache"];
			lbAdd [2109, "Capture Outpost"];
			lbAdd [2109, "Capture Town"];
			lbAdd [2109, "Kill HVT"];
			lbAdd [2109, "Secure HVT"];

			//AO
			lbAdd [2110, "North East"];
			lbAdd [2110, "North West"];
			lbAdd [2110, "South East"];
			lbAdd [2110, "South East"];
			lbAdd [2110, "Center"];
			lbAdd [2110, "Eastern Island"];

			//Extras
			lbAdd [2111, "IEDs"];
			lbAdd [2111, "CAS and CAP (Jets)"];
			lbAdd [2111, "CQB"];
			lbAdd [2111, "Roadblocks"];



		//Log
		systemChat str _moduleLocation;
		systemChat str _objectUnderCursor;
		SystemChat "Module loading...";