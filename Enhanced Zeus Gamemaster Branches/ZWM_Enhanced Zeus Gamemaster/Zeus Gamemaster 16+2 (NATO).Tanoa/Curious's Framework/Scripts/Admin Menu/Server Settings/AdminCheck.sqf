/*
Script name:    AdminCheck.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Checks the server for a dedicated admin.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/
if (getPlayerUID player in RequestedEverywhereAdmins) then {
	hint "An admin is online!";
} else {
	hint "No admins online!";
};