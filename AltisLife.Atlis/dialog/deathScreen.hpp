class DeathScreen {
    idd = 7300;
    name = "Life_Death_Screen";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
		class RscText_1003: Life_RscText
		{
			idc = -1;
			x = 0.391281 * safezoneW + safezoneX;
			y = 0.401119 * safezoneH + safezoneY;
			w = 0.221719 * safezoneW;
			h = 0.241926 * safezoneH;
			colorBackground[] = {0,0,0,0.698039};
		};
	};

    class Controls {
        class MedicsOnline: Life_RscText {
            idc = 7304;
			text = "Aktif Doktor";
			x = 0.422344 * safezoneW + safezoneX;
			y = 0.422976 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.0329899 * safezoneH;
			colorText[] = {0.678431,1,0.184313,1};
        };

        class MedicsNearby: Life_RscText {
            idc = 7305;
			text = "En Yakın Doktor: Yakında Yok";
			x = 0.422344 * safezoneW + safezoneX;
			y = 0.455986 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.0329899 * safezoneH;
			colorText[] = {0.678431,1,0.184313,1};
        };

        class RespawnBtn: Life_RscButtonMenu {
            idc = 7302;
            text = "Yeniden Doğ";
            onButtonClick = "closeDialog 0; life_respawned = true; [] call life_fnc_spawnMenu;";
			x = 0.437875 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.0329899 * safezoneH;
			colorText[] = {0,0.50196,0,1};
            //class Attributes {align = "center";};
        };

        class MedicBtn: Life_RscButtonMenu {
            idc = 7303;
            onButtonClick = "[] call life_fnc_requestMedic;";
            text = "Doktor Cagir";
			x = 0.437875 * safezoneW + safezoneX;
			y = 0.577024 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.0329899 * safezoneH;
			colorText[] = {1,0,0,1};
           // class Attributes {align = "center";};
        };

        class respawnTime: Life_RscText {
            idc = 7301;
            text = "";
			x = 0.422344 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.0329899 * safezoneH;
			colorText[] = {0.50196,0,0,1};
        };
    };
};
