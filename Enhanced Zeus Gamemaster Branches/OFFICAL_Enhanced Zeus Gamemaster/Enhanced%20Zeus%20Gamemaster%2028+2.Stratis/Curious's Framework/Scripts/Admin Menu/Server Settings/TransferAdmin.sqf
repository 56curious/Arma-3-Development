/*
Script name:    TransferAdmin.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Transfer admin to another player before disconnect.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

{
	serverCommand format ["#Vote Admin %1",SelectedAdmin];
} forEach allPlayers;

SystemChat format ["%1 has been transfered admin!", SelectedAdmin];


{
	player setDamage 1;
	hint parseText "<t size='1.35' font='RobotoCondensedBold'>All Players have been forced to respawn!</ t>";
} forEach allPlayers;