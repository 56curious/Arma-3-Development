// Setting factions friendly
_FriendlySides = "GuerFriendly" call BIS_fnc_getParamValue;


if (isServer) then
{
	private _east = 0;
	private _west = 0;
	private _civ = 1;

	switch _FriendlySides do
	{
		case -1: {};
		case 0: {_east = 1};
		case 1: {_west = 1};
		case 2: {_east = 1; _west = 1};
		case 3: {_civ = 0};
		default {};
	};

	east setFriend [resistance, _east];
	resistance setFriend [east, _east];
	west setFriend [resistance, _west];
	resistance setFriend [west, _west];
	civilian setFriend [resistance, _civ];
	resistance setFriend [civilian, _west];
};
