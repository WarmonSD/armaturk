StartProgress = false;
profilenamespace setvariable['GUI_BCG_RGB_R', 73];
profilenamespace setvariable['GUI_BCG_RGB_G', 137];
profilenamespace setvariable['GUI_BCG_RGB_B', 70];
profilenamespace setvariable['GUI_BCG_RGB_A', 0.4];
if (hasInterface) then {
    [] execVM "briefing.sqf";
};
[] execVM "KRON_Strings.sqf";
enableSaving[false, false];
enableEnvironment[false, false];
enableRadio false;
enableSentences false;
disableRemoteSensors true;
onPlayerDisconnected {
    [_id, _name, _uid] call compile preProcessFileLineNumbers "core\functions\fn_altF4DupeFix.sqf"
};
[] spawn {
    while {
        true
    }
    do {
        uiSleep(10 * 60);
        0 setOvercast 0;
        0 setfog 0;
        0 setRain 0;
    };
};
0 enableChannel false;
1 enableChannel false;
[] execVM "ban.sqf";
StartProgress = true;