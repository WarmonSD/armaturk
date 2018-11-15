if (life_action_inUse) exitWith {
    hint "Ayni anda 2 tane islem yapamazsiniz.";
};
if (life_kayitOnayfiyati < 140000) exitWith {
    hint "Bu sistemi sadece belirli fiyat uzerindeki kiyafet setlerinde kullanabilirsin. (140.000TL)";
};
if ((time - life_action_delay) < 0.4) exitWith {
    hint localize "STR_NOTF_ActionDelay";
};
life_action_delay = time;
if (life_kayitOnayfiyati == 0) exitWith {
    hint "Kayitli setiniz bulunamadi."
};
if (life_nikitsf7 < life_kayitOnayfiyati) then {
    hint format["Onceki kayit ettigin kiyafetlerinin tutari %1 TL ustunde %1TL olmadigi icin kiyafetlerini yukleyemedim.", life_kayitOnayfiyati];
} else {
    life_nikitsf7 = life_nikitsf7 - life_kayitOnayfiyati;
    hint format["%1TL karsiliginda onceden tanimlanmis kiyafetlerin yuklendi.", life_kayitOnayfiyati];
    [life_save_gear_ucretli] spawn life_fnc_kayitlariOyuncuyaUp;
};