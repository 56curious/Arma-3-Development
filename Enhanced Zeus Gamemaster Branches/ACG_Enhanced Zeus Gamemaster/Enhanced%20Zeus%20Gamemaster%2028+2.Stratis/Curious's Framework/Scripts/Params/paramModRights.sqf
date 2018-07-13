_moderatorRights = "CuratorModeratorRights" call bis_fnc_getParamValue;
//Mod rights
	//Defines
	_logic = _this select 0;
	_curators = _logic getvariable ["curators",[objnull]];
	_curator = _curators select 0;
	_addons = curatoraddons _curator;
	_points = curatorpoints _curator;
	_coefPlace = _curator curatorcoef "place";
	_coefDelete = _curator curatorcoef "delete";


	//init
	_moderatorAddons = _addons;

	{
		removeallcuratoraddons _x;
	} foreach (_curators - [_curator]);

			//--- Detect moderator addons
			switch _moderatorRights do {

				case -1;
				case 0: { //--- Nothing
					_moderatorAddons = [];
					[_curator] execVM "Curious's Framework\Scripts\RemoveObjects.sqf";
				};

				case 1: { //--- Everything

				};

				case 2: { //--- Modules
					_moderatorAddons = [];
					{
						if (
							{
								gettext (configfile >> "cfgvehicles" >> _x >> "vehicleclass") == "Modules"
							} count getarray (_x >> "units") > 0
						) then {
							_moderatorAddons set [count _moderatorAddons,configname _x];
						};
					} foreach ((configfile >> "cfgpatches") call BIS_fnc_returnChildren);
				};
			};

	//Set moderator rights
	sleep 1;
	_curator addcuratoraddons _addons;
	_curator addcuratorpoints (_points - curatorpoints _curator);
	_curator setcuratorcoef ["place",_coefPlace];
	_curator setcuratorcoef ["delete",_coefDelete];


	//--- Set moderator addons
	if (_x != _curator) then {
			_x addcuratoraddons _moderatorAddons;
		};
	} foreach _curators;

	if (_moderatorRights >= 0) then {
		[_curator,	_curators - [_curator],	["objects","coefs"],_moderatorRights > 0] spawn BIS_fnc_mirrorCuratorSettings;
	};

