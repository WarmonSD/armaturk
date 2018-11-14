class Life_key_management {
    idd = 2700;
    name= "life_key_chain";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_keyMenu;";

    class controlsBackground {
        class MainBackground: Life_RscPicture
		{
            idc = -1;
			text = "textures\PMenu\anahtarlik.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
		};
    };

    class controls {
        class KeyChainList: Life_RscListbox
		{
            idc = 2701;
            text = "";
            sizeEx = 0.035;
			x = 0.282605 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.181162 * safezoneW;
			h = 0.286 * safezoneH;
		};
		
		class NearPlayers: Life_RscListbox
		{
			idc = 2702;
            text = "";
            sizeEx = 0.035;
			x = 0.520704 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.181162 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class DropKey: Life_RscButtonNativeGamerr
		{
			idc = 556688;
			text = "SIL";
            onButtonClick = "[] call life_fnc_keyDrop";
			x = 0.47412 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0362325 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Secili olan anahtari siler.";
		};
		class GiveKey: Life_RscButtonNativeGamerr
		{
			idc = 2703;
			text = "VER";
            onButtonClick = "[] call life_fnc_keyGive";
			x = 0.47412 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0362325 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Secili olan anahtari sectiginiz kisiye verir";
		};
		
		class CloseButtonKey: Life_RscButtonNativeGamer
		{
			idc = -1;
            onButtonClick = "closeDialog 0;";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
			tooltip = "Anahtarligi Kapatir.";
		};
    };
};