class life_dynmarket_prices {
	idd = 7100;
	name= "life_dynmarket_prices";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn {sleep 1;[] call life_fnc_LoadIntoListbox;};";
	
	class controlsBackground {
		class MainBackGround: Life_RscPicture
		{
			idc = 1200;
			text = "textures\PMenu\borsa.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};
	
	class controls {
		class RscListbox_1500: Life_RscListbox
		{
			idc = 7055;
			onLBSelChanged = "[] spawn {[] call life_fnc_DisplayPrices;};";
			x = 0.313625 * safezoneW + safezoneX;
			y = 0.312941 * safezoneH + safezoneY;
			w = 0.16049 * safezoneW;
			h = 0.374119 * safezoneH;
		};
		class MenuyuKapat: Life_RscButtonNativeGamer
		{
            idc = -1;
            onButtonClick = "closeDialog 0;";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
		};
		class RscButtonMenu_2401: Life_RscText
		{
			idc = -1;
			text = "Guncel Satis Fiyati"; //--- ToDo: Localize;
			x = 0.479292 * safezoneW + safezoneX;
			y = 0.400969 * safezoneH + safezoneY;
			w = 0.150135 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class RscButtonMenu_2402: Life_RscText
		{
			idc = 7056;
			text = "Oncelikle Bir Esya Secin"; //--- ToDo: Localize;
			x = 0.613896 * safezoneW + safezoneX;
			y = 0.400969 * safezoneH + safezoneY;
			w = 0.150135 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class RscButtonMenu_2403: Life_RscText
		{
			idc = -1;
			text = "Senin tarafindan satilan miktar"; //--- ToDo: Localize;
			x = 0.479292 * safezoneW + safezoneX;
			y = 0.455986 * safezoneH + safezoneY;
			w = 0.170844 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class RscButtonMenu_2404: Life_RscText
		{
			idc = 7057;
			text = "2345"; //--- ToDo: Localize;
			x = 0.644958 * safezoneW + safezoneX;
			y = 0.455986 * safezoneH + safezoneY;
			w = 0.0414167 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
	};
};