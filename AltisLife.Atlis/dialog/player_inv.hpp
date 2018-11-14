#include "player_sys.sqf"

class playerSettings {
    idd = 2001;
    movingEnable = 1;
    enableSimulation = 1;
    class controlsBackground {
        class MainBackground: life_RscPicture {
            idc = -1;
            text = "textures\PMenu\ymenu.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
        class PlayersName: Life_RscTitle {
            idc = carry_weight;
            style = 1;
            text = "";
            x = 0.655282 * safezoneW + safezoneX;
            y = 0.258 * safezoneH + safezoneY;
            w = 0.077641 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class moneyStatusInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.437887 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.154 * safezoneH;
        };
    };
    class controls {
        class itemHeader: Life_RscText {
            idc = -1;
            text = "$STR_PM_cItems";
            sizeEx = 0.04;
            x = 0.292957 * safezoneW + safezoneX;
            y = 0.302 * safezoneH + safezoneY;
            w = 0.124226 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class licenseHeader: Life_RscText {
            idc = -1;
            text = "$STR_PM_Licenses";
            sizeEx = 0.04;
            x = 0.587993 * safezoneW + safezoneX;
            y = 0.302 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class moneySHeader: Life_RscText {
            idc = -1;
            text = "$STR_PM_MoneyStats";
            sizeEx = 0.04;
            x = 0.437887 * safezoneW + safezoneX;
            y = 0.302 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class itemList: Life_RscListbox {
            idc = item_list;
            sizeEx = 0.030;
            x = 0.287781 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.231 * safezoneH;
        };
        class moneyEdit: Life_RscEdit {
            idc = 2018;
            text = "1";
            sizeEx = 0.030;
            x = 0.437887 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.022 * safezoneH;
            ColorBackground[] = {
                1,
                1,
                1,
                0
            };
            ColorText[] = {
                1,
                1,
                1,
                1
            };
            colorSelection[] = {
                1,
                1,
                1,
                0
            };
            colorDisabled[] = {
                1,
                1,
                1,
                0
            };
        };
        class NearPlayers: Life_RscCombo {
            idc = 2022;
            x = 0.437887 * safezoneW + safezoneX;
            y = 0.555 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class moneyDrop: Life_RscButtonNativeGamerr {
            idc = playersys_DIALOG;
            text = "PARA VER";
            onButtonClick = "[] call life_fnc_caktirmaPiriVer";
            sizeEx = 0.025;
            x = 0.468944 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.0517607 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class itemEdit: Life_RscEdit {
            idc = item_edit;
            text = "1";
            sizeEx = 0.030;
            x = 0.287781 * safezoneW + safezoneX;
            y = 0.588 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.022 * safezoneH;
            ColorBackground[] = {
                1,
                1,
                1,
                0
            };
            ColorText[] = {
                1,
                1,
                1,
                1
            };
            colorSelection[] = {
                1,
                1,
                1,
                0
            };
            colorDisabled[] = {
                1,
                1,
                1,
                0
            };
        };
        class iNearPlayers: Life_RscCombo {
            idc = 2023;
            x = 0.287781 * safezoneW + safezoneX;
            y = 0.621 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DropButton: Life_RscButtonNativeGamer {
            idc = money_text;
            onButtonClick = "[] call life_fnc_giveItem;";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Esyayi Ver";
        };
        class UseButton: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "[] call life_fnc_useItem;";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.412 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Esyayi Kullan";
        };
        class RemoveButton: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "[] call life_fnc_removeItem;";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.0207043 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Esyayi Sil";
        };
        class ButtonClose: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.654 * safezoneH + safezoneY;
            w = 0.0310564 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Oyuncu Menusunu Kapatir.";
        };
        class ButtonSettings: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Gorus mesafesi vs. gibi ayarlari yonetirsiniz.";
        };
        class ButtonMyGang: Life_RscButtonNativeGamer {
            idc = 2011;
            onButtonClick = "if (isNil "
            "life_action_gangInUse"
            ") then {if (isNil {(group player) getVariable "
            "gang_owner"
            "}) then {createDialog "
            "Life_Create_Gang_Diag"
            ";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Oyunici Cete Yonetim Panelini Acar";
        };
        class Life_Licenses: Life_RscStructuredText {
            idc = 2014;
            sizeEx = 0.020;
            text = "";
            x = 0.587993 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.129402 * safezoneW;
            h = 0.308 * safezoneH;
        };
        class ButtonGangList: Life_RscButtonNativeGamer {
            idc = 2012;
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Sunucudaki azili katilleri vs. arananlari burada siralanir.";
        };
        class ButtonKeys: Life_RscButtonNativeGamer {
            idc = 2013;
            onButtonClick = "createDialog "
            "Life_key_management"
            ";";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Evlerinizi ve Sahip oldugunuz garaj disindaki araclarinizi gorebilirsiniz.";
        };
        class ButtonCell: Life_RscButtonNativeGamer {
            idc = 2014;
            onButtonClick = "createDialog "
            "Life_cell_phone"
            ";";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Oyuncular ile etkilesim menusudur";
        };
        class ButtonAdminMenu: Life_RscButtonNativeGamerr {
            idc = 2021;
            text = "$STR_PM_AdminMenu";
            onButtonClick = "closeDialog 0; createDialog "
            "life_admin_menu"
            ";";
            x = 0.468944 * safezoneW + safezoneX;
            y = 0.214 * safezoneH + safezoneY;
            w = 0.0672889 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class SunucuBilgi: Life_RscButtonNativeGamer {
            idc = 655475;
            onButtonClick = "[] spawn life_fnc_sunucubilgi;";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.0207043 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Sunucuda kac polis-doktor ve sivil oldugunu gosterir.FPS";
        };
        class ButtonMarket: Life_RscButtonNativeGamer {
            idc = 3025;
            text = "Borsa";
            onButtonClick = "createDialog "
            "life_dynmarket_prices"
            ";";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.445 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Aktif Borsadir. Is yapmadan once kontrol etmeyi unutmayin.";
        };
        class ButtonSyncData: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.743275 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Oyundaki butun verilerinizi gunceller. ";
        };
        class Hareketler: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0; createDialog "
            "life_moves_menu"
            ";";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.577 * safezoneH + safezoneY;
            w = 0.0207043 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Hareketler menusunu acar";
        };
        class PolisCP: Life_RscButtonNativeGamer {
            idc = 20003;
            onButtonClick = "[] spawn life_fnc_placeablesMenu; closeDialog 0;";
            x = 0.717395 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Polislere Ozel Yonetim Paneli";
        };
        class TaksiYonetim: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0; createDialog "
            "RscDisplayTaxiMenu"
            ";";
            x = 0.675986 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0310564 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Taksi Yonetim Panelini Acar.";
        };
        class DoktorCagir: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.634578 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0310564 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "Bastiginiz Anda Doktor Cagirirsiniz.";
        };
        class KelleAvcisi: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "[] spawn life_fnc_bountyMenu; closeDialog 0;";
            x = 0.593169 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0310564 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "KELLE AVCISI YONETİM PANELIDIR!! Bir oyuncunun kellesini aldirtmak istiyorsaniz seri katil kiralama bolgelerine gitmelisiniz..";
        };
        class Istihbarat: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0; [] spawn life_fnc_openMap;";
            x = 0.546585 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0258803 * safezoneW;
            h = 0.044 * safezoneH;
            tooltip = "HARITADAKI SIMGELERI VE YER ADLARINI FILTRELER";
        };
        class KralAvcilar: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.494824 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0310564 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class AziliCeteler: Life_RscButtonNativeGamer {
            idc = -1;
            x = 0.437887 * safezoneW + safezoneX;
            y = 0.698 * safezoneH + safezoneY;
            w = 0.0362325 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class CraftButton: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0; ["
            "YmenuCraft"
            "] spawn cat_crafting_fnc_craft;";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.0258763 * safezoneW;
            h = 0.0439861 * safezoneH;
            tooltip = "Bazi esyalar ve ogeler ile yeni esyalar uretebilirsiniz.";
        };
        class YetenekAgaci: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0; createDialog "
            "TTM_GUI_RscDisplayTalentOverview"
            ";";
            x = 0.241197 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.0258763 * safezoneW;
            h = 0.0439861 * safezoneH;
            tooltip = "BU PANELDEN KAZANDIGINIZ YETENEK PUANLARINIZI DAGITABILIR VE YENI OZELLIKLERI ACABILIRSINIZ.";
        };
    };
};