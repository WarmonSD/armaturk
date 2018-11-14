class Life_my_smartphone {
    idd = 88888;
    name = "life_my_telephone_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_smartphone;";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\telefon.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class MessageTitle: Life_RscText {
            idc = 88886;
            text = "";
            x = 0.417162 * safezoneW + safezoneX;
            y = 0.290963 * safezoneH + safezoneY;
            w = 0.310641 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class PlayerList: Life_RscListBox {
            idc = 88881;
            onLBSelChanged = "[2] spawn life_fnc_smartphone;";
            sizeEx = 0.030;
            x = 0.261842 * safezoneW + safezoneX;
            y = 0.268959 * safezoneH + safezoneY;
            w = 0.150143 * safezoneW;
            h = 0.352063 * safezoneH;
        };
        class MessageList: Life_RscListNBox {
            idc = 88882;
            onLBSelChanged = "[(lbCurSel 88882)] call life_fnc_showMsg;";
            sizeEx = 0.050;
            drawSideArrows = 0;
            idcLeft = -1;
            idcRight = -1;
            rowHeight = 0.050;
            x = 0.417162 * safezoneW + safezoneX;
            y = 0.334971 * safezoneH + safezoneY;
            w = 0.310641 * safezoneW;
            h = 0.209037 * safezoneH;
        };
        class RandomTitle: Life_RscText {
            idc = 88890;
            text = "$STR_SMARTPHONE_RANDOMTITLE";
            x = 0.417162 * safezoneW + safezoneX;
            y = 0.55501 * safezoneH + safezoneY;
            w = 0.310641 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class showText: Life_RscStructuredText {
            idc = 88887;
            text = "";
            x = 0.417162 * safezoneW + safezoneX;
            y = 0.599018 * safezoneH + safezoneY;
            w = 0.310641 * safezoneW;
            h = 0.0990177 * safezoneH;
        };
        class Yazmak: Life_RscButtonNativeGamerr {
            idc = 887892;
            text = "$STR_SMARTPHONE_SCHREIBEN";
            onButtonClick = "[4] call life_fnc_smartphone;";
            x = 0.261842 * safezoneW + safezoneX;
            y = 0.632024 * safezoneH + safezoneY;
            w = 0.144966 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class CloseLoadMenu: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743335 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0258867 * safezoneW;
            h = 0.0440079 * safezoneH;
        };
        class Notruf: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "$STR_SMARTPHONE_NOTRUF";
            onButtonClick = "createDialog "
            "Life_smartphone_notruf"
            ";";
            x = 0.261842 * safezoneW + safezoneX;
            y = 0.676031 * safezoneH + safezoneY;
            w = 0.144966 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
    };
};
class Life_smartphone_schreiben {
    idd = 88883;
    name = "life_my_smartphone_schreiben";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\telefon.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class Title: Life_RscText {
            idc = 88886;
            text = "$STR_SMARTPHONE_NACHRICHTTITLE";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.345973 * safezoneH + safezoneY;
            w = 0.201917 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class Absenden: Life_RscButtonNativeGamerr {
            idc = 88885;
            text = "$STR_SMARTPHONE_ABSENDEN";
            onButtonClick = "[1,-1,(ctrlText 88884)] call life_fnc_newMsg;";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class AdminMsg: Life_RscButtonNativeGamerr {
            idc = 888897;
            text = "$STR_CELL_AdminMsg";
            onButtonClick = "[5,-1,(ctrlText 88884)] call life_fnc_newMsg;";
            x = 0.494823 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class Close: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743335 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0258867 * safezoneW;
            h = 0.0440079 * safezoneH;
        };
        class textEdit: Life_RscEdit {
            idc = 88884;
            text = "";
            sizeEx = 0.060;
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.38998 * safezoneH + safezoneY;
            w = 0.201917 * safezoneW;
            h = 0.0660118 * safezoneH;
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
    };
};
class Life_smartphone_notruf {
    idd = 887890;
    name = "life_my_smartphone_notruf";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[6] spawn life_fnc_newMsg;";
    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
            text = "textures\PMenu\telefon.paa";
            x = 0.21014 * safezoneW + safezoneX;
            y = 0.06 * safezoneH + safezoneY;
            w = 0.590072 * safezoneW;
            h = 0.858 * safezoneH;
        };
    };
    class controls {
        class Title: Life_RscText {
            idc = 888892;
            text = "$STR_SMARTPHONE_Notruftitle";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.345973 * safezoneH + safezoneY;
            w = 0.201917 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class textEdit: Life_RscEdit {
            idc = 888894;
            text = "";
            sizeEx = 0.060;
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.38998 * safezoneH + safezoneY;
            w = 0.201917 * safezoneW;
            h = 0.0660118 * safezoneH;
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
        class TxtCopButton: Life_RscButtonNativeGamerr {
            idc = 888895;
            text = "$STR_CELL_TextPolice";
            onButtonClick = "[] call TON_fnc_cell_textcop";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class TxtAdminButton: Life_RscButtonNativeGamerr {
            idc = 888896;
            text = "$STR_CELL_TextAdmins";
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.511002 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class AdminMsgAll: Life_RscButtonNativeGamerr {
            idc = 888898;
            text = "$STR_CELL_AdminMSGAll";
            onButtonClick = "[7,-1,(ctrlText 888894)] call life_fnc_newMsg;";
            x = 0.391276 * safezoneW + safezoneX;
            y = 0.665029 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class XoXSoruSor: Life_RscButtonNativeGamerr {
            idc = 888988;
            text = "Soruyu Gonder";
            onButtonClick = "[] call TON_fnc_cell_XOXSoru";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.665029 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class EMSReq: Life_RscButtonNativeGamerr {
            idc = 888899;
            text = "$STR_CELL_EMSRequest";
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
            x = 0.494823 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0931923 * safezoneW;
            h = 0.0330059 * safezoneH;
        };
        class Close: Life_RscButtonNativeGamer {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.743335 * safezoneW + safezoneX;
            y = 0.466994 * safezoneH + safezoneY;
            w = 0.0258867 * safezoneW;
            h = 0.0440079 * safezoneH;
        };
    };
};