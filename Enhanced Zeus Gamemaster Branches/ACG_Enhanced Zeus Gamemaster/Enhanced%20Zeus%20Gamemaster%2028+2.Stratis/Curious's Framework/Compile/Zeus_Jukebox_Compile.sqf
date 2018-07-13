/*
Script name:    Zeus_Jukebox_compile.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Compile relevent data for setup of the jukebox.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

createDialog "Jukebox";

[] spawn {
	Val = -1;
	_AddVal = 1;
	hint parseText "<t size='1.35' font='RobotoCondensedBold'>Audio Tracks are now being added!</ t>";

	for "_i" from 1 to 183 do {

		_Track = {MusicNames select Val + _AddVal} forEach MusicNames;
		_AddVal = _AddVal + 1;

		lbAdd [2100, str _Track];
		sleep random [0.0001,0.01,1];
	};
};