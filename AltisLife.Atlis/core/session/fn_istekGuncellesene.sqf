private["_packet", "_array", "_flag", "_alive", "_position"];
_packet = [getPlayerUID player, (profileName), playerSide, life_nikitsf7, life_binkasf7];
_array = [];
_alive = alive player;
_position = getPosATL player;
_flag =
    switch (playerSide) do {
        case west:{
                "cop"
            };
        case civilian:{
                "civ"
            };
        case independent:{
                "med"
            };
    }; {
        _varName = format["license_%1_%2", _flag, getText(missionConfigFile >> "Licenses" >> configName _x >> "variable")];
        _array pushBack[_varName, missionNamespace getVariable[format["license_%1_%2", _flag, getText(missionConfigFile >> "Licenses" >> configName _x >> "variable")], false]];
    }
forEach(format["getText(_x >> 'side') isEqualTo '%1'", _flag] configClasses(missionConfigFile >> "Licenses"));
_packet pushBack _array;
[] call life_fnc_saveGear;
_packet pushBack life_gear;
_array = [];
_array pushBack life_hunger;
_array pushBack life_thirst;
_array pushBack(damage player);
_packet pushBack _array;
switch (playerSide) do {
    case civilian:{
            _packet pushBack life_is_arrested;
            _packet pushBack _alive;
            _packet pushBack _position;
        };
};
_packet remoteExecCall["DB_fnc_istekGuncellesene", 2];