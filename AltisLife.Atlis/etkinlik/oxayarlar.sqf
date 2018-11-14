private _type = _this select 0;
switch (_type) do {
    case 0:{
            {
                if (player distance(getMarkerPos _x) < 4) then {
                    player setPos(getMarkerPos "yarisma_bekleme");
                    hint "SORU SORULDUGUNDA ORTADA KALDIGIN ICIN ARENADAN CIKARTILDIN";
                };
            }
            forEach["yarisma_orta_1", "yarisma_orta_2", "yarisma_orta_3", "yarisma_orta_4", "yarisma_orta_5", "yarisma_orta_6", "yarisma_orta_7", "yarisma_orta_8", "yarisma_orta_9", "yarisma_orta_10", "yarisma_orta_11", "yarisma_orta_12", "yarisma_orta_13", "yarisma_orta_14", "yarisma_orta_15", "yarisma_orta_16", "yarisma_orta_17", "yarisma_orta_18"];
            if (player distance(getMarkerPos "yarisma_x1") < 23) then {
                player setPos(getMarkerPos "yarisma_bekleme");
                hint "SORUNUN CEVABINI BILEMEDIGIN ICIN ARENADAN CIKARTILDIN";
            }; {
                if (player distance(getMarkerPos _x) < 5) then {
                    player setPos(getMarkerPos "yarisma_bekleme");
                    hint "SORUNUN CEVABINI BILEMEDIGIN ICIN ARENADAN CIKARTILDIN";
                };
            }
            forEach["yarisma_xx_1", "yarisma_xx_2", "yarisma_xx_3", "yarisma_xx_4", "yarisma_xx_5", "yarisma_xx_7", "yarisma_xx_8", "yarisma_xx_9"]; {
                if (player distance(getMarkerPos _x) < 15) then {
                    player setPos(getMarkerPos "yarisma_bekleme");
                    hint "SORUNUN CEVABINI BILEMEDIGIN ICIN ARENADAN CIKARTILDIN";
                };
            }
            forEach["yarisma_x1_2", "yarisma_x1_3"];
        };
    case 1:{
            {
                if (player distance(getMarkerPos _x) < 4) then {
                    player setPos(getMarkerPos "yarisma_bekleme");
                    hint "SORU SORULDUGUNDA ORTADA KALDIGIN ICIN ARENADAN CIKARTILDIN";
                };
            }
            forEach["yarisma_orta_1", "yarisma_orta_2", "yarisma_orta_3", "yarisma_orta_4", "yarisma_orta_5", "yarisma_orta_6", "yarisma_orta_7", "yarisma_orta_8", "yarisma_orta_9", "yarisma_orta_10", "yarisma_orta_11", "yarisma_orta_12", "yarisma_orta_13", "yarisma_orta_14", "yarisma_orta_15", "yarisma_orta_16", "yarisma_orta_17", "yarisma_orta_18"];
            if (player distance(getMarkerPos "yarisma_oo_x1") < 19) then {
                player setPos(getMarkerPos "yarisma_bekleme");
                hint "SORUNUN CEVABINI BILEMEDIGIN ICIN ARENADAN CIKARTILDIN";
            }; {
                if (player distance(getMarkerPos _x) < 5) then {
                    player setPos(getMarkerPos "yarisma_bekleme");
                    hint "SORUNUN CEVABINI BILEMEDIGIN ICIN ARENADAN CIKARTILDIN";
                };
            }
            forEach["yarisma_oo_1", "yarisma_oo_2", "yarisma_oo_3", "yarisma_oo_4", "yarisma_oo_5", "yarisma_oo_6", "yarisma_oo_7", "yarisma_oo_8", "yarisma_oo_9", "yarisma_oo_10", "yarisma_oo_11", "yarisma_oo_12", "yarisma_oo_13", "yarisma_oo_14", "yarisma_oo_15", "yarisma_oo_16"];
        };
    case 2:{
            player setPos(getMarkerPos "yarisma_sorubekleme");
        };
    case 3:{
            player setPos(getMarkerPos "yarisma_bekleme");
        };
    case 4:{
            _msg = ctrlText 6158;
            [format["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'>%1", _msg], true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            ["EtkinlikXOSoru", ["XO ETKINLIK DUYURUSU!!!"]] remoteExecCall["BIS_fnc_showNotification", -2];
        };
    case 5:{
            if (player distance(getMarkerPos "yarisma_sorubekleme") < 95) then {
                player setPos(getMarkerPos "yarisma_cikiskav");
            };
        };
    case 6:{
            _msg = ctrlText 6150;
            [format["<t color='#FF0000'><t size='3'><t align='center'>YENI SORU<br/><br/><t color='#FFFFFF'><t size='1.5'>%1<br/><br/><br/><t color='#FF0000'><t underline='true'> DOGRU ISE <t color='#ddea0e'>O</t> YANLIS ISE <t color='#ddea0e'>X</t> YONUNE ILERLE.<br/><br/> HER SORU ICIN 10 SANIYENIZ VAR.", _msg], true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            ["EtkinlikXOSoru", ["XO ETKINLIK SORUSU GELDI!!!"]] remoteExecCall["BIS_fnc_showNotification", -2];
        };
    case 7:{
            if (player distance(getMarkerPos "yarisma_odulal") < 3) then {
                life_binkasf7 = life_binkasf7 + 500000;
                ["HESABINA ETKINLIK KAZANDIGIN ICIN PARA EKLENDI.", true, "slow"] call life_fnc_notification_system;
                [format["1| %1(%2) adli oyuncuya OX kazandigi icin 500K PARA yazildi.", player getVariable["realname", name player], getPlayerUID player], "OXEtkinligi"] remoteExecCall["A3Log", 2];
            };
        };
    case 8:{
            if (player distance(getMarkerPos "yarisma_odulal") < 3) then {
                ["BINEXP"] spawn mav_ttm_fnc_addExp;
                ["HESABINA ETKINLIGI KAZANDIGIN ICIN YETENEK PUANI EKLENDI. CTRL+SHIFT+T ILE DAGITABILIRSIN.", true, "slow"] call life_fnc_notification_system;
                [format["1| %1(%2) adli oyuncuya OX kazandigi icin 1K EXP yazildi. ", player getVariable["realname", name player], getPlayerUID player], "OXEtkinligi"] remoteExecCall["A3Log", 2];
            };
        };
    case 9:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> ETKINLIGE KATILMAK ICIN ETKINLIK SORUMLULARINI KULLABİLİRSİNİZ. ETKINLIK SORUMLULARI NEREDE: KAVALA-ATHIRA-REBEL VE BAGISCI BOLGESI-POLIS VE DOKTOR KARAKOLLARINDADIR. VE BIRKAC KUCUK SEHIRDEDIR. ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
        };
    case 10:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> XO ETKINLIGI GIRISLERI ACILMISTIR. GIRIS YAPMAK ICIN ETKINLIK SORUMLUSUNU KULLANABILRSINIZ. BANKA SOYGUNU VE BENZİNLİK SOYGUNU ETKINLIK BITENE KADAR YASAKTIR! ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlikgirisi = true;
            publicVariable "life_etknlikgirisi";
        };
    case 11:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> XO ETKINLIGI ARENAYA GIRISLERI KAPATILMISTIR. SUANDA ETKINLIK BASLAMAK UZERE KATILMAK ISTEYENLER 1 DAKIKA ICERISINDE ADMINLERE MESAJ ATMALILAR. ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlikgirisi = false;
            publicVariable "life_etknlikgirisi";
        };
    case 12:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> SORU-CEVAP ARENASINA GIRISLER ACILMISTIR ARENAYA KIRMIZI OKLU TABELADAN GIRIS YAPABILIRSINIZ. ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlkgrsoru = true;
            publicVariable "life_etknlkgrsoru";
        };
    case 13:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> SORU-CEVAP ARENASINA GIRISLER KAPATILMISTIR. BIRAZDAN XO ETKINLIGI BASLAYACAKTIR. LUTFEN HERKES ORTADA YERLERINI ALSIN. ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlkgrsoru = false;
            publicVariable "life_etknlkgrsoru";
        };
    case 14:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> ARENADAN CIKIS TABELALARI KILITLERI ACILMISTIR, ELENEN OYUNCULARIMIZ CIKABILIR VEYA KALIP IZLEMEYE DEVAM EDEBILIR ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlkcks = true;
            publicVariable "life_etknlkcks";
        };
    case 15:{
            ["<t color='#FF0000'><t size='3'><t align='center'>OX ETKINLIGI DUYURU!!<br/><br/><t color='#FFFFFF'><t size='1.5'> ARENADAN CIKIS TABELALARI KILITLERI KAPATILMISTIR. ", true, "slow"] remoteExecCall["life_fnc_notification_system", -2];
            life_etknlkcks = false;
            publicVariable "life_etknlkcks";
        };
};