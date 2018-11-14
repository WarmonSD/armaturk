class life_moves_menu {
	idd = 2900;
	name= "life_moves_menu";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_movesMenu;";
	
	class controlsBackground {
		
		class SF7_ArkaPlan: life_RscPicture
		{
			idc = -1;
			text = "textures\PMenu\hareketler.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};
	
	class controls {
		class movesList : Life_RscListBox 
		{
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			x = 0.422344 * safezoneW + safezoneX;
			y = 0.290934 * safezoneH + safezoneY;
			w = 0.150135 * safezoneW;
			h = 0.352112 * safezoneH;
		};
		

		class CloseButtonKey : Life_RscButtonNativeGamer {
			idc = -1;
			onButtonClick = "closeDialog 0;";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
		};
		
		class performMove : Life_RscButtonNativeGamerr {
			idc = -1;
			text = "Secili Hareketi Baslat";
			onButtonClick = "_move = lbData[2902,lbCurSel (2902)];_move = call compile format[""%1"", _move]; player playMove _move; closeDialog 0;";
			x = 0.437875 * safezoneW + safezoneX;
			y = 0.654049 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
	};
};