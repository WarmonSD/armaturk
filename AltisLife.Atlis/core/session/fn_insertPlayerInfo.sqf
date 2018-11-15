if (life_session_completed) exitWith {};
cutText[localize "STR_Session_QueryFail", "BLACK FADED"];
0 cutFadeOut 9999999;
private["_bank"];
switch (playerSide) do {
    case west:{
            _bank = getNumber(missionConfigFile >> "Life_Settings" >> "bank_cop");
        };
    case civilian:{
            _bank = getNumber(missionConfigFile >> "Life_Settings" >> "bank_civ");
        };
    case independent:{
            _bank = getNumber(missionConfigFile >> "Life_Settings" >> "bank_med");
        };
};
[getPlayerUID player, profileName, life_nikitsf7, _bank, player]
remoteExecCall["DB_fnc_insertRequest", 2];