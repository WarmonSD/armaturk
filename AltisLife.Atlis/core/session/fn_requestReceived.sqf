private _count = count _this;
life_session_tries = life_session_tries + 1;
if (life_session_completed) exitWith {};
if (life_session_tries > 3) exitWith {
    cutText[localize "STR_Session_Error", "BLACK FADED"];
    0 cutFadeOut 999999999;
};
0 cutText[localize "STR_Session_Received", "BLACK FADED"];
0 cutFadeOut 9999999;
if (isNil "_this") exitWith {
    [] call SOCK_fnc_insertPlayerInfo;
};
if (_this isEqualType "") exitWith {
    [] call SOCK_fnc_insertPlayerInfo;
};
if (count _this isEqualTo 0) exitWith {
    [] call SOCK_fnc_insertPlayerInfo;
};
if ((_this select 0) isEqualTo "Error") exitWith {
    [] call SOCK_fnc_insertPlayerInfo;
};
if (!(getPlayerUID player isEqualTo(_this select 0))) exitWith {
    [] call SOCK_fnc_dataQuery;
};
if (!isServer && (!isNil "life_acplvlsf7" || !isNil "life_cp2cxxplvl" || !isNil "life_bgsvel123")) exitWith {
    sleep 0.9;
    failMission "NotWhitelisted";
};
life_nikitsf7 = parseNumber(_this select 2);
life_binkasf7 = parseNumber(_this select 3);
life_acplvlsf7 = compileFinal(
    if ((_this select 4) isEqualType "") then {
        (_this select 4)
    } else {
        str((_this select 4))
    });
if (getNumber(missionConfigFile >> "Life_Settings" >> "donor_level") isEqualTo 1) then {
    life_bgsvel123 = compileFinal(
        if ((_this select 5) isEqualType "") then {
            (_this select 5)
        } else {
            str((_this select 5))
        });
} else {
    life_bgsvel123 = compileFinal(
        if (0 isEqualType "") then {
            0
        } else {
            str(0)
        });
};
if (count(_this select 6) > 0) then {
    {
        missionNamespace setVariable[(_x select 0), (_x select 1)];
    }
    forEach(_this select 6);
};
switch (playerSide) do {
    case west:{
            life_cp2cxxplvl = compileFinal(
                if ((_this select 7) isEqualType "") then {
                    (_this select 7)
                } else {
                    str((_this select 7))
                });
            life_banlistlvl = compileFinal(
                if ((_this select 12) isEqualType "") then {
                    (_this select 12)
                } else {
                    str((_this select 12))
                });
            life_mcdlvl = compileFinal(
                if (0 isEqualType "") then {
                    0
                } else {
                    str(0)
                });
            life_blacklisted = _this select 9;
            if (getNumber(missionConfigFile >> "Life_Settings" >> "save_playerStats") isEqualTo 1) then {
                life_hunger = ((_this select 10) select 0);
                life_thirst = ((_this select 10) select 1);
                player setDamage((_this select 10) select 2);
            };
        };
    case civilian:{
            life_is_arrested = _this select 7;
            life_cp2cxxplvl = compileFinal(
                if (0 isEqualType "") then {
                    0
                } else {
                    str(0)
                });
            life_banlistlvl = compileFinal(
                if ((_this select 13) isEqualType "") then {
                    (_this select 13)
                } else {
                    str((_this select 13))
                });
            life_mcdlvl = compileFinal(
                if (0 isEqualType "") then {
                    0
                } else {
                    str(0)
                });
            life_houses = _this select(_count - 3);
            if (getNumber(missionConfigFile >> "Life_Settings" >> "save_playerStats") isEqualTo 1) then {
                life_hunger = ((_this select 9) select 0);
                life_thirst = ((_this select 9) select 1);
                player setDamage((_this select 9) select 2);
            };
            if (getNumber(missionConfigFile >> "Life_Settings" >> "save_civilian_position") isEqualTo 1) then {
                life_is_alive = _this select 10;
                life_civ_position = _this select 11;
                if (life_is_alive) then {
                    if !(count life_civ_position isEqualTo 3) then {
                        diag_log format["[requestReceived] Bad position received. Data: %1", life_civ_position];
                        life_is_alive = false;
                    };
                    if (life_civ_position distance(getMarkerPos "respawn_civilian") < 300) then {
                        life_is_alive = false;
                    };
                };
            }; {
                _house = nearestObject[(call compile format["%1", (_x select 0)]), "House"];
                life_vehicles pushBack _house;
            }
            forEach life_houses;
            life_gangData = _this select(_count - 2);
            if !(count life_gangData isEqualTo 0) then {
                [] spawn life_fnc_initGang;
            };
            [] spawn life_fnc_initHouses;
        };
    case independent:{
            life_mcdlvl = compileFinal(
                if ((_this select 7) isEqualType "") then {
                    (_this select 7)
                } else {
                    str((_this select 7))
                });
            life_banlistlvl = compileFinal(
                if ((_this select 11) isEqualType "") then {
                    (_this select 11)
                } else {
                    str((_this select 11))
                });
            life_cp2cxxplvl = compileFinal(
                if (0 isEqualType "") then {
                    0
                } else {
                    str(0)
                });
            if (getNumber(missionConfigFile >> "Life_Settings" >> "save_playerStats") isEqualTo 1) then {
                life_hunger = ((_this select 9) select 0);
                life_thirst = ((_this select 9) select 1);
                player setDamage((_this select 9) select 2);
            };
        };
};
life_gear = _this select 8;
[true] call life_fnc_loadGear;
if (count(_this select(_count - 1)) > 0) then {
    {
        life_vehicles pushBack _x;
    }
    forEach(_this select(_count - 1));
};
life_session_completed = true;