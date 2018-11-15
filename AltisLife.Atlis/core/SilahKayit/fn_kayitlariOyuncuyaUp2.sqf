private["_allowedItems", "_loadout", "_primary", "_launcher", "_handgun", "_magazines", "_primitems", "_secitems", "_handgunitems", "_uitems", "_vitems", "_bitems", "_handle"];
_loadout = [_this, 0, [],
    [
        []
    ]
] call BIS_fnc_param;
_primary = _loadout select 0;
_launcher = _loadout select 1;
_handgun = _loadout select 2;
_magazines = _loadout select 3;
_primitems = _loadout select 8;
_secitems = _loadout select 9;
_handgunitems = _loadout select 10;
_uitems = _loadout select 11;
_vitems = _loadout select 12;
_bitems = _loadout select 13;
RemoveAllWeapons player; {
    player removeMagazine _x;
}
forEach(magazines player);
if (!(_primary isEqualTo "")) then {
    [_primary, true, false, false, false] call life_fnc_handleItem; {
        [_x, true, false, true, false] call life_fnc_handleItem;
    }
    forEach _primitems;
};
if (!(_launcher isEqualTo "")) then {
    [_launcher, true, false, false, false] call life_fnc_handleItem; {
        [_x, true, false, true, false] call life_fnc_handleItem;
    }
    forEach _secitems;
};
if (!(_handgun isEqualTo "")) then {
    [_handgun, true, false, false, false] call life_fnc_handleItem; {
        [_x, true, false, true, false] call life_fnc_handleItem;
    }
    forEach _handgunitems;
}; {
    [_x, true, false, false, true] call life_fnc_handleItem;
}
forEach _uitems; {
    [_x, true, false, false, true] call life_fnc_handleItem;
}
forEach _vitems; {
    [_x, true, true, false, false] call life_fnc_handleItem;
}
forEach _bitems; {
    _handle = [_x, true, false, false, false] spawn life_fnc_handleItem;
    waitUntil {
        scriptDone _handle
    };
}
forEach _magazines;