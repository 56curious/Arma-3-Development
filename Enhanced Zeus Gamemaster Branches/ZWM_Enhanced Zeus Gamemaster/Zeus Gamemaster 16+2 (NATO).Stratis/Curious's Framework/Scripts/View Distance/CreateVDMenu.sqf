if(isNull (findDisplay MENU_IDD)) then {
	if(!createDialog "TAW_VDMenu") exitWith {hint "Something went wrong, the menu won't open?"};
};