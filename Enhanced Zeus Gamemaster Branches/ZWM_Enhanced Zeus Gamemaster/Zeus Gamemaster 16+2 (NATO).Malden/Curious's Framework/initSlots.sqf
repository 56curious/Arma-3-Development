


//Blacklist Zeus Slots
_BlacklistedUIDs = [""];
_CuratorSlot = [curatorUnit, curatorUnit_1];

_uidActivePlayer = getPlayerUID player;

if ((Player in _CuratorSlot) && (_uidActivePlayer in _BlacklistedUIDs)) then {
   failMission "BlockedZeus";
};



//Whitelist exec script
_WhitelistUIDs = [""];

if (getPlayerUID player in _WhitelistUIDs) then {

	If (local player) then
	{
	  missionNamespace setVariable ['Ares_Allow_Zeus_To_Execute_Code', true];
	};

};