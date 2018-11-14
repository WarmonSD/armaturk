_chair = _this select 0;
_unit = _this select 1;
_chair setVariable["occupied", true, true];
[_unit, "Crew"] remoteExec["life_fnc_animSync", 0];
waitUntil {
    animationState player == "crew"
};
_unit setpos(getPosATL _chair);
_unit setDir((getDir _chair) - 180);
life_action_standup = _unit addaction["Ayaga kalk", "standup.sqf"];
life_sitting_chair = _chair;