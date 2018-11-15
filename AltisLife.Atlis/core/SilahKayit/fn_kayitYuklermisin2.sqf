if (life_action_inUse) exitWith {
    hint "Ayni anda 2 tane islem yapamazsiniz.";
};
if (life_kayitOnayfiyati2 < 255000) exitWith {
    hint "Bu sistemi sadece belirli fiyat uzerindeki silah setlerinde kullanabilirsin. (255.000TL)";
};
if ((time - life_action_delay) < 0.4) exitWith {
    hint localize "STR_NOTF_ActionDelay";
};
life_action_delay = time;
if (life_kayitOnayfiyati2 == 0) exitWith {
    hint "Kayitli setiniz bulunamadi."
};
if (life_nikitsf7 < life_kayitOnayfiyati2) then {
    hint format["Onceki kayit ettigin Silah ve Ekipmanların tutari: %1TL Üstunde %1TL olmadigi icin Silah ve Ekipmanlarını yukleyemedim.", life_kayitOnayfiyati2];
} else {
    life_nikitsf7 = life_nikitsf7 - life_kayitOnayfiyati2;
    hint format["%1TL karsiliginda onceden tanimlanmis Silah ve Ekipmanların yuklendi.", life_kayitOnayfiyati2];
    [life_save_gear_ucretli2] spawn life_fnc_kayitlariOyuncuyaUp2;
};