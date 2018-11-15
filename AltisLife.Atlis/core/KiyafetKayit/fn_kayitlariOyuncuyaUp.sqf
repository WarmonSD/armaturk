private["_loadout", "_uniform", "_vest", "_backpack", "_items", "_handle"];
_loadout = [_this, 0, [],
    [
        []
    ]
] call BIS_fnc_param;
_uniform = _loadout select 0;
_vest = _loadout select 1;
_backpack = _loadout select 2;
_items = _loadout select 3;
_headgear = _loadout select 4;
_goggles = _loadout select 5;
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player; {
    player unassignItem _x;
    player removeItem _x;
}
forEach(assignedItems player);
if (!(_uniform isEqualTo "")) then {
    _handle = [_uniform, true, false, false, false] spawn life_fnc_handleItem;
    waitUntil {
        scriptDone _handle
    };
};
if (!(_vest isEqualTo "")) then {
    _handle = [_vest, true, false, false, false] spawn life_fnc_handleItem;
    waitUntil {
        scriptDone _handle
    };
};
if (!(_backpack isEqualTo "")) then {
    _handle = [_backpack, true, false, false, false] spawn life_fnc_handleItem;
    waitUntil {
        scriptDone _handle
    };
}; {
    _handle = [_x, true, false, false, false] spawn life_fnc_handleItem;
    waitUntil {
        scriptDone _handle
    };
}
forEach _items;
if (!(_headgear isEqualTo "")) then {
    player addHeadGear _headgear
};
if (!(_goggles isEqualTo "")) then {
    player addGoggles _goggles
};
[] call life_fnc_playerSkins;