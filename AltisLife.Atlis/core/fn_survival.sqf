private["_fnc_food", "_fnc_water", "_foodTime", "_waterTime", "_bp", "_walkDis", "_lastPos", "_curPos"];
_fnc_food = {
    if (life_hunger < 2) then {
        player setDamage 1;
        hint localize "STR_NOTF_EatMSG_Death";
    } else {
        life_hunger = life_hunger - 10;
        [] call life_fnc_hudUpdate;
        if (life_hunger < 2) then {
            player setDamage 1;
            hint localize "STR_NOTF_EatMSG_Death";
        };
        switch (life_hunger) do {
            case 30:{
                    hint localize "STR_NOTF_EatMSG_1";
                };
            case 20:{
                    hint localize "STR_NOTF_EatMSG_2";
                };
            case 10:{
                    hint localize "STR_NOTF_EatMSG_3";
                    if (getNumber(missionConfigFile >> "Life_Settings" >> "enable_fatigue") isEqualTo 1) then {
                        player setFatigue 1;
                    };
                };
        };
    };
};
_fnc_water = {
    if (life_thirst < 2) then {
        player setDamage 1;
        hint localize "STR_NOTF_DrinkMSG_Death";
    } else {
        life_thirst = life_thirst - 10;
        [] call life_fnc_hudUpdate;
        if (life_thirst < 2) then {
            player setDamage 1;
            hint localize "STR_NOTF_DrinkMSG_Death";
        };
        switch (life_thirst) do {
            case 30:{
                    hint localize "STR_NOTF_DrinkMSG_1";
                };
            case 20:{
                    hint localize "STR_NOTF_DrinkMSG_2";
                    if (getNumber(missionConfigFile >> "Life_Settings" >> "enable_fatigue") isEqualTo 1) then {
                        player setFatigue 1;
                    };
                };
            case 10:{
                    hint localize "STR_NOTF_DrinkMSG_3";
                    if (getNumber(missionConfigFile >> "Life_Settings" >> "enable_fatigue") isEqualTo 1) then {
                        player setFatigue 1;
                    };
                };
        };
    };
};
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (_lastPos select 0) + (_lastPos select 1);
_lastState = vehicle player;
for "_i"
from 0 to 1 step 0 do {
    0 setOvercast 0;
    0 setfog 0;
    0 setRain 0;
    if ((time - _waterTime) > 600 && {!life_god
        }) then {
        [] call _fnc_water;
        _waterTime = time;
    };
    if ((time - _foodTime) > 850 && {!life_god
        }) then {
        [] call _fnc_food;
        _foodTime = time;
    };
    if (backpack player isEqualTo "") then {
        life_maxWeight = getNumber(missionConfigFile >> "Life_Settings" >> "total_maxWeight");
        _bp = backpack player;
    } else {
        if (!(backpack player isEqualTo "") && {!(backpack player isEqualTo _bp)
            }) then {
            _bp = backpack player;
            life_maxWeight = getNumber(missionConfigFile >> "Life_Settings" >> "total_maxWeight") + round(getNumber(configFile >> "CfgVehicles" >> _bp >> "maximumload") / 4);
        };
    };
    if (!(vehicle player isEqualTo _lastState) || {!alive player
        }) then {
        [] call life_fnc_updateViewDistance;
        _lastState = vehicle player;
    };
    if (life_carryWeight > life_maxWeight && {!isForcedWalk player
        } && {!life_god
        }) then {
        player forceWalk true;
        if (getNumber(missionConfigFile >> "Life_Settings" >> "enable_fatigue") isEqualTo 1) then {
            player setFatigue 1;
        };
        hint localize "STR_NOTF_MaxWeight";
    } else {
        if (isForcedWalk player) then {
            player forceWalk false;
        };
    };
    if (!alive player || {
            life_god
        }) then {
        _walkDis = 0;
    } else {
        _curPos = visiblePosition player;
        _curPos = (_curPos select 0) + (_curPos select 1);
        if (!(_curPos isEqualTo _lastPos) && {
                (isNull objectParent player)
            }) then {
            _walkDis = _walkDis + 1;
            if (_walkDis isEqualTo 650) then {
                _walkDis = 0;
                life_thirst = life_thirst - 5;
                life_hunger = life_hunger - 5;
                [] call life_fnc_hudUpdate;
            };
        };
        _lastPos = visiblePosition player;
        _lastPos = (_lastPos select 0) + (_lastPos select 1);
    };
    uiSleep 5;
};