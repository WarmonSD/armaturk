class life_Etkinlik_XOACP {
    idd = 887890;
    name = "life_Etkinlik_XOACP";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\etkinlik.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class SoruNo: Life_RscEdit {
            idc = 6455;
            text = "1";
            x = 0.432727 * safezoneW + safezoneX;
            y = 0.313047 * safezoneH + safezoneY;
            w = 0.041399 * safezoneW;
            h = 0.0329918 * safezoneH;
        };
        class SoruNumarasi: Life_RscText {
            idc = -1;
            text = "Soru No:";
            x = 0.427535 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.0621128 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class SoruSuresi: Life_RscEdit {
            idc = 6456;
            text = "1";
            x = 0.531056 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.041399 * safezoneW;
            h = 0.0329918 * safezoneH;
        };
        class SoruSure: Life_RscText {
            idc = -1;
            text = "Süre:";
            x = 0.52588 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.0621128 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class SoruGonder: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Soru Gonder";
            onButtonClick = "[parseNumber(ctrlText 6455),parseNumber(ctrlText 6456)] execvm 'Etkinlik\oxsorular.sqf';";
            x = 0.324014 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class DuyuruGonder: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Duyuru Gonder";
            onButtonClick = "createDialog "
            "life_Etkinlik_XOACPDuyuru"
            ";";
            x = 0.453415 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class KatilBilgisi: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Katil Bilgisi";
            onButtonClick = "[9] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.577641 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "ETKINLIGE KATILMAK ICIN ETKINLIK SORUMLULARINI KULLABİLİRSİNİZ. ETKINLIK SORUMLULARI NEREDE: KAVALA-ATHIRA-REBEL VE BAGISCI BOLGESI-POLIS VE DOKTOR KARAKOLLARINDADIR. VE BIRKAC KUCUK SEHIRDEDIR.";
        };
        class OdulPaneli: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Odul Paneli";
            onButtonClick = "createDialog "
            "life_Etkinlik_XOACPGift"
            ";";
            x = 0.324014 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Ödül Panelini Açar.";
        };
        class ArenayiBosalt: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Arenayi Bosalt";
            onButtonClick = "[] call TON_fnc_etknlk_alanibosalt;";
            x = 0.453415 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class OzelSoru: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Ozel Soru";
            onButtonClick = "createDialog "
            "life_Etkinlik_XOACPozelsoru"
            ";";
            x = 0.577641 * safezoneW + safezoneX;
            y = 0.434 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class EtkinlikAc: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Etkinligi Ac";
            onButtonClick = "[10] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.324014 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class EtkinlikKapa: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Etkinligi Kapa";
            onButtonClick = "[11] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.324014 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class ArenayiAc: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Arenayi Ac";
            onButtonClick = "[12] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.453415 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class ArenayiKapa: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Arenayi Kapat";
            onButtonClick = "[13] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.453415 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class CikislariAc: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Cikislari Aç";
            onButtonClick = "[14] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.577641 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class CikislariKapa: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Cikislari Kapat";
            onButtonClick = "[15] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.577641 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0931692 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "";
        };
        class CloseButtonKey: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743219 * safezoneW + safezoneX;
            y = 0.456011 * safezoneH + safezoneY;
            w = 0.0310625 * safezoneW;
            h = 0.0550174 * safezoneH;
        };
    };
};
class life_Etkinlik_XOACPGift {
    idd = 887892;
    name = "life_Etkinlik_XOACPGift";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "hint 'Bu butonların calısması icin kazanan oyuncuyu odul alma alanına sokmayı unutma !';";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\etkinlik.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class ParaYaz: Life_RscButtonNativeGamerr {
            idc = 2400;
            text = "500K YAZ";
            onButtonClick = "[] call TON_fnc_etknlk_etknlktlgift1";
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.323984 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class YetenekYaz: Life_RscButtonNativeGamerr {
            idc = 2401;
            text = "1000 EXP";
            onButtonClick = "[] call TON_fnc_etknlk_etknlktlgift2";
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.378989 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class Boss1: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.433994 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class Boss2: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.488999 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class Boss3: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.544004 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class Boss4: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.417196 * safezoneW + safezoneX;
            y = 0.599009 * safezoneH + safezoneY;
            w = 0.124206 * safezoneW;
            h = 0.044004 * safezoneH;
        };
        class CloseButtonKey: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743219 * safezoneW + safezoneX;
            y = 0.456011 * safezoneH + safezoneY;
            w = 0.0310625 * safezoneW;
            h = 0.0550174 * safezoneH;
        };
    };
};
class life_Etkinlik_XOACPDuyuru {
    idd = 887345;
    name = "life_Etkinlik_XOACPDuyuru";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "hint 'BURADA SADECE OX ETKINLIGI ILE ILGILI DUYURU YAPABILIRSIN !!';";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\etkinlik.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class DuyuruYazisi: Life_RscEdit {
            idc = 6158;
            text = "";
            x = 0.386127 * safezoneW + safezoneX;
            y = 0.412 * safezoneH + safezoneY;
            w = 0.207043 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class DuyuruyuYolla: Life_RscText {
            idc = -1;
            text = "Duyuruyu Yaz:";
            x = 0.386127 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.191514 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class GonderButon: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Duyuruyu Gonder";
            onButtonClick = "[4] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.417183 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.139754 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class CloseButtonKey: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743219 * safezoneW + safezoneX;
            y = 0.456011 * safezoneH + safezoneY;
            w = 0.0310625 * safezoneW;
            h = 0.0550174 * safezoneH;
        };
    };
};
class life_Etkinlik_XOACPozelsoru {
    idd = 83355;
    name = "life_Etkinlik_XOACPozelsoru";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "hint 'KESINLIKLE EMIN OLMADIGIN HICBIR SORUYU BURADAN SORMA YOKSA BASINA BUYUK BELA ALIRSIN - SALIHF7';";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\etkinlik.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class Soruyuyaz: Life_RscEdit {
            idc = 6150;
            text = "";
            x = 0.386127 * safezoneW + safezoneX;
            y = 0.412 * safezoneH + safezoneY;
            w = 0.207043 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class SoruyuYolla: Life_RscText {
            idc = -1;
            text = "Soruyu Yaz:";
            x = 0.386127 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.191514 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class SGonderButon: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Soruyu Gonder";
            onButtonClick = "[6] execvm 'Etkinlik\oxayarlar.sqf';";
            x = 0.417183 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.139754 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class CevapX: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Cevap: X";
            onButtonClick = "[] call TON_fnc_etknlk_CvpX;";
            x = 0.417202 * safezoneW + safezoneX;
            y = 0.510997 * safezoneH + safezoneY;
            w = 0.139754 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class CevapO: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Cevap: O";
            onButtonClick = "[] call TON_fnc_etknlk_CvpO;";
            x = 0.417202 * safezoneW + safezoneX;
            y = 0.554986 * safezoneH + safezoneY;
            w = 0.139754 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class CloseButtonKey: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743219 * safezoneW + safezoneX;
            y = 0.456011 * safezoneH + safezoneY;
            w = 0.0310625 * safezoneW;
            h = 0.0550174 * safezoneH;
        };
    };
};