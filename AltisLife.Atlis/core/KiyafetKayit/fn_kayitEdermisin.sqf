private "_action";
_action = [localize "STR_ANOTF_KayitEtmkeIster", localize "STR_Admin_Kayitbilgi", localize "STR_Global_Yes", localize "STR_Global_No"] call BIS_fnc_guiMessage;
if (_action) then {
    life_save_gear_ucretli = [];
    life_save_gear_ucretli = [player] call life_fnc_kayitlariSistemeAt;
    life_kayitOnayfiyati = life_kayitfiyati;
    hint "Satin aldigin butun kiyafetler sisteme kayit edildi.";
    closeDialog 0;
} else {
    closeDialog 0;
};