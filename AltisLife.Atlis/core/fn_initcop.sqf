waitUntil {
    !(isNull(findDisplay 46))
};
if (life_blacklisted) exitWith {
    ["Blacklisted", false, true] call BIS_fnc_endMission;
    sleep 30;
};
if (((call life_cp2cxxplvl) isEqualTo 0) && ((call life_acplvlsf7) isEqualTo 0)) then {
    ["NotWhitelisted", false, true] call BIS_fnc_endMission;
    sleep 35;
};
player setVariable["rank", ((call life_cp2cxxplvl)), true];
[] call life_fnc_spawnMenu;
[] call life_fnc_initPayChecks;
waitUntil {
    !isNull(findDisplay 38500)
};
waitUntil {
    isNull(findDisplay 38500)
};
[] spawn life_fnc_placeablesInit;