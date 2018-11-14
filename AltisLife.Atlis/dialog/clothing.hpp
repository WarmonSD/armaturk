class Life_Clothing {
    idd = 3100;
    name= "Life_Clothing";
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.0821059 * safezoneW + safezoneX;
            y = 0.212176 * safezoneH + safezoneY;
            w = 0.318;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.082235 * safezoneW + safezoneX;
            y = 0.236099 * safezoneH + safezoneY;
            w = 0.318 * safezoneW;
            h = 0.412 * safezoneH;
        };
    };

    class controls {
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3103;
            text = "";
            x = 0.082105 * safezoneW + safezoneX;
            y = 0.212176 * safezoneH + safezoneY;
            w = 0.315810 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class ClothingList: Life_RscListBox {
            idc = 3101;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[_this] call life_fnc_changeClothes;";
            x = 0.084297 * safezoneW + safezoneX;
            y = 0.240498 * safezoneH + safezoneY;
            w = 0.313618 * safezoneW;
            h = 0.358514 * safezoneH;
        };

        class PriceTag: Life_RscStructuredText {
            idc = 3102;
            text = "";
            sizeEx = 0.035;
            x = 0.084375 * safezoneW + safezoneX;
            y = 0.604937 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class TotalPrice: Life_RscStructuredText {
            idc = 3106;
            text = "";
            sizeEx = 0.035;
            x = 0.183333 * safezoneW + safezoneX;
            y = 0.606789 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class FilterList: Life_RscCombo {
            idc = 3105;
            colorBackground[] = {0,0,0,0.7};
            onLBSelChanged  = "_this call life_fnc_clothingFilter";
            x = 0.081625 * safezoneW + safezoneX;
            y = 0.653734 * safezoneH + safezoneY;
            w = 0.318 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";
            x = 0.236458 * safezoneW + safezoneX;
            y = 0.684567 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class BuyButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Buy";
            onButtonClick = "[] call life_fnc_buyClothes;";
            x = 0.08125 * safezoneW + safezoneX;
            y = 0.684567 * safezoneH + safezoneY;
            w = 0.15625 * safezoneW;
            h = 0.04 * safezoneH;
        };

        class viewAngle: life_RscXSliderH {
            color[] = {1, 1, 1, 0.45};
            colorActive[] = {1, 1, 1, 0.65};
            idc = 3107;
            text = "";
            onSliderPosChanged = "[4,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "";
            x = 0.25 * safezoneW + safezoneX;
            y = 0.93 * safezoneH + safezoneY;
            w = 0.5 * safezoneW;
            h = 0.02 * safezoneH;
        };
    };
};