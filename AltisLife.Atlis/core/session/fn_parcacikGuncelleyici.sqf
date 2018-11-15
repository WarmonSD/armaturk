private["_mode", "_packet", "_array", "_flag"];
_mode = param[0, 0, [0]];
_packet = [getPlayerUID player, playerSide, nil, _mode];
_array = [];
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
    };
    switch (_mode) do {
        case 0:{
                _packetset [2, life_nikitsf7];
            };
        case 1:{
                _packetset [2, life_binkasf7];
            };
        case 2:{
                {
                    _varName = format["license_%1_%2", _flag, getText(missionConfigFile >> "Licenses" >> configName _x >> "variable")];
                    _array pushBack[_varName, missionNamespace getVariable[format["license_%1_%2", _flag, getText(missionConfigFile >> "Licenses" >> configName _x >> "variable")], false]];
                }
                forEach(format["getText(_x >> 'side') isEqualTo '%1'", _flag] configClasses(missionConfigFile >> "Licenses"));
                _packetset [2, _array];
            };
        case 3:{
                [] call life_fnc_saveGear;
                _packetset [2, life_gear];
            };
        case 4:{
                _packetset [2, life_is_alive];
                _packetset [4, getPosATL player];
            };
        case 5:{
                _packetset [2, life_is_arrested];
            };
        case 6:{
                _packetset [2, life_nikitsf7];
                _packetset [4, life_binkasf7];
            };
        case 7:{};
    };
    _packet remoteExecCall["DB_fnc_parcacikGuncelleyici", 2];