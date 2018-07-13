/*
Script name:    Zeus_Jukebox_Create.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Create the jukebox from the compiled data.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

_FinalTracks = str SelectedTrack + str HiddenTracks;
hint "adding tracks now.";
sleep 10;
hint str _FinalTracks;




/*
Script name:    Zeus_Jukebox.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Create the jukebox from the cfgMusic, selects a track at random
				and then plays it. Will stop after next song by setting
				StopMusic = true; to resume, set StopMusic = false;

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

_cfgMusic = [];
StopMusic = false;
_cfg = configFile >> "CfgMusic";
for "_i" from 0 to count _cfg - 1 do {
	_class = _cfg select floor random _i;
	sleep 1;
	if (isClass _class) then {
		_name = getText (_class >> "name");
		_duration = getNumber (_class >> "duration");
		_Track = configName _class;
		PlayMusic _Track;
		SystemChat format ["%1 is now playing for %2. Function By Curious <3", if (_name == "") then {"N/A"} else {_name}, if (_duration == 0) then {"N/A"} else {_duration}];
		sleep _Duration + 2;
		if (StopMusic isEqualTo true) exitWith {};
	};
};




