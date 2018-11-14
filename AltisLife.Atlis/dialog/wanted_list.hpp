class life_wanted_menu {
    idd = 2400;
    name= "life_wanted_menu";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "[] spawn life_fnc_wantedadd2;";

    class controlsBackground {
		class MainBackground: Life_RscPicture
		{
			idc = -1;
			text = "textures\PMenu\arananlar.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
		};
    };

    class controls {
        class WantedConnection: Life_RscText 
		{
            idc = 2406;
            text = "";
			x = 0.650135 * safezoneW + safezoneX;
			y = 0.665052 * safezoneH + safezoneY;
			w = 0.0983646 * safezoneW;
			h = 0.0330105 * safezoneH;
        };
		
		class WantedList: Life_RscListBox
		{
			idc = 2401;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
			x = 0.303271 * safezoneW + safezoneX;
			y = 0.356955 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.176056 * safezoneH;
		};
		class PlayerList: Life_RscListBox
		{
			idc = 2406;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
			x = 0.437875 * safezoneW + safezoneX;
			y = 0.356955 * safezoneH + safezoneY;
			w = 0.108719 * safezoneW;
			h = 0.176056 * safezoneH;
		};
		class WantedAddL: Life_RscListBox
		{
			idc = 2407;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
			x = 0.567302 * safezoneW + safezoneX;
			y = 0.356955 * safezoneH + safezoneY;
			w = 0.113896 * safezoneW;
			h = 0.176056 * safezoneH;
		};

		class WantedDetails: Life_RscListBox
		{
            idc = 2402;
            text = "";
            sizeEx = 0.035;
			x = 0.303271 * safezoneW + safezoneX;
			y = 0.544014 * safezoneH + safezoneY;
			w = 0.377927 * safezoneW;
			h = 0.0770244 * safezoneH;
		};

		class BountyPrice: Life_RscText
		{
            idc = 2403;
            text = "";
			x = 0.303271 * safezoneW + safezoneX;
			y = 0.632042 * safezoneH + safezoneY;
			w = 0.129427 * safezoneW;
			h = 0.0330105 * safezoneH;
		};

		class Kapat: Life_RscButtonNativeGamer
		{
			idc = -1;
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
		};
		class PardonButton: Life_RscButtonNativeGamerr
		{
			idc = 2405;
			text = "Affet"; //--- ToDo: Localize;
			x = 0.479292 * safezoneW + safezoneX;
			y = 0.643045 * safezoneH + safezoneY;
			w = 0.0517708 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class AddPButton: Life_RscButtonNativeGamerr
		{
			idc = 9800;
			text = "Ekle"; //--- ToDo: Localize;
			x = 0.541417 * safezoneW + safezoneX;
			y = 0.643045 * safezoneH + safezoneY;
			w = 0.0517708 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		
		class wantedText: Life_RscText
		{
			idc = 1000;
			text = "Aranan Oyuncular"; //--- ToDo: Localize;
			x = 0.303271 * safezoneW + safezoneX;
			y = 0.312941 * safezoneH + safezoneY;
			w = 0.113896 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class citizensText: Life_RscText
		{
			idc = 1001;
			text = "Aktif Oyuncular"; //--- ToDo: Localize;
			x = 0.437875 * safezoneW + safezoneX;
			y = 0.312941 * safezoneH + safezoneY;
			w = 0.113896 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class crimesText: Life_RscText
		{
			idc = 1002;
			text = "Eklenebilecek Suclar"; //--- ToDo: Localize;
			x = 0.567302 * safezoneW + safezoneX;
			y = 0.312941 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
    };
};