_id = _this select 0;
_pname = _this select 1;
_puid = _this select 2;
_Oyuncu = allPlayers - entities "HeadlessClient_F";
call cleanNearItems;
cleanNearItems = {
    if (_pname != "__SERVER__") then {
        _player = objNull; {
            if (getPlayerUID _x == _puid) exitWith {
                _player = _x;
            };
        }
        forEach _Oyuncu;
        if (!(isNull _player)) then {
            removeAllWeapons _player;
            removeBackpack _player;
            removeAllItems _player; {
                deleteVehicle _x;
            }
            forEach nearestObjects[player, ["WeaponHolder", "GroundWeaponHolder", "WeaponHolderSimulated", "Land_Money_F"], 10];
        };
    };
};