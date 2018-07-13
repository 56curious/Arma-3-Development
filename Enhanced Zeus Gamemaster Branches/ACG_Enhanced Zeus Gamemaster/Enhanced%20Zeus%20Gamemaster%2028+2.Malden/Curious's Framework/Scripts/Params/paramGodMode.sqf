//Godmode
_godMode = ("CuratorGodMode" call bis_fnc_getParamValue) > 0;

//--- Init challenges
if !(_godMode) then {
	[
		_curator,
		[],
		2,
		nil,
		[
			{
				_curator = _this select 0;
				_curator addcuratorpoints 1;
				{
					(_this select 0) setcuratorcoef [_x,(_curator curatorcoef _x) * 0.9];
				} foreach ["place","delete"];
			},
			"10% discount on all objects" //--- ToDo: Localize
		]
	] spawn bis_fnc_manageCuratorChallenges;
};
