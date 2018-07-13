#include "defines.h"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Called via addAction and opens the TAW View Distance Menu
*/
if(isNull (findDisplay MENU_IDD)) then {
	if(!createDialog "TAW_VDMenu") exitWith {hint "Something went wrong, the menu won't open?"};
};