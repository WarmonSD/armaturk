private "_action";
_action = [localize "STR_ANOTF_KayitEtmkeIsterSilah", localize "STR_Admin_KayitbilgiSilah", localize "STR_Global_Yes", localize "STR_Global_No"] call BIS_fnc_guiMessage;
if (_action) then {
    life_kayitetmekistiyor = true;
} else {
    life_kayitetmekistiyor = false;
};