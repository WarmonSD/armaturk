waitUntil {
    !(isNull(findDisplay 46))
};
if (((call life_mcdlvl)) < 1 && ((call life_acplvlsf7) isEqualTo 0)) exitWith {
    ["Notwhitelisted", false, true] call BIS_fnc_endMission;
    sleep 35;
};
[] call life_fnc_spawnMenu;
[] call life_fnc_initPayChecks;
waitUntil {
    !isNull(findDisplay 38500)
};
waitUntil {
    isNull(findDisplay 38500)
};
[] spawn life_fnc_placeablesInit;