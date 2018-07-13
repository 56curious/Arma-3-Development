/*
Script name:	paramFog.sqf
Created on:		25 ‎January ‎2018
Author:			Curious

Description:	Setup Fog for the server.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/
//Fog
_fogValue = "Fog" call BIS_fnc_getParamValue;
10 setFog _fogValue;




