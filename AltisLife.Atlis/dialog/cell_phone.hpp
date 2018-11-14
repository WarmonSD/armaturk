class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class MainBackground: Life_RscPicture
		{
			idc = 1200;
			text = "textures\PMenu\telefon.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
		};
    };

    class controls {
		class TextToSend: Life_RscTitle
		{
            idc = 3002;
			text = "Gonderilecek Kisi:";
			x = 0.298103 * safezoneW + safezoneX;
			y = 0.290934 * safezoneH + safezoneY;
			w = 0.0931834 * safezoneW;
			h = 0.0330105 * safezoneH;
            colorBackground[] = {0, 0, 0, 0};
		};

		class textEdit: Life_RscEdit
		{
            idc = 3003;
            text = "";
            sizeEx = 0.080;
			x = 0.448231 * safezoneW + safezoneX;
			y = 0.290934 * safezoneH + safezoneY;
			w = 0.196721 * safezoneW;
			h = 0.0990314 * safezoneH;
            ColorBackground[] = {1,1,1,0};
            ColorText[] = {1,1,1,1};
            colorSelection[] = {1,1,1,0};
            colorDisabled[] = {1,1,1,0};
		};
		
		class PlayerList: Life_RscListbox
		{
			idc = 3004;
            sizeEx = 0.045;
			x = 0.27739 * safezoneW + safezoneX;
			y = 0.323944 * safezoneH + safezoneY;
			w = 0.144958 * safezoneW;
			h = 0.385122 * safezoneH;
		};

       		class TextMsgButton: Life_RscButtonNativeGamerr
		{
            idc = 3015;
            onButtonClick = "[] call TON_fnc_cell_textmsg";
			text = "Kisisel Mesaj Gonder";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.400969 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class TextAdminButton: Life_RscButtonNativeGamerr
		{
            idc = 3017;
            onButtonClick = "[] call TON_fnc_cell_textadmin";
			text = "Admine Mesaj Gonder";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.444983 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class AdminMsgAllButton: Life_RscButtonNativeGamerr
		{
            idc = 3021;
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			text = "Genel Duyuru Gec";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.665052 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class TextCopButton: Life_RscButtonNativeGamerr
		{
            idc = 3016;
            onButtonClick = "[] call TON_fnc_cell_textcop";
			text = "Polise Mesaj Gonder";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.400969 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class AdminMsgButton: Life_RscButtonNativeGamerr
		{
            idc = 3020;
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
			text = "Admin Mesaji Gonder";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.665052 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "ADMIN SIFATIYLA MESAJ GONDERIR";
		};
		class EMSRequest: Life_RscButtonNativeGamerr
		{
            idc = 3022;
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
			text = "112 Yardim";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.444983 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
		};
		class CloseButtonKey: Life_RscButtonNativeGamer
		{
            idc = -1;
            onButtonClick = "closeDialog 0;";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
		};
		class polis1: Life_RscButtonNativeGamerr
		{
			idc = 2408;
			text = "Polis1";
			onButtonClick = "[] call TON_fnc_cell_Hazir1";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Polis: İhbarınız Alınmıştır Ekiplerimiz  En Kısa Sürede Bölgeye İntikal Edecektir.";
		};
		class doktor1: Life_RscButtonNativeGamerr
		{
			idc = 24008;
			text = "Doktor1";
			onButtonClick = "[] call TON_fnc_cell_Hazir1";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Doktor: Acil Çağrınınz İlgili Ekiplerimize Ulaşmıştır En Kısa Sürede Bölgeye İntikal Edilecektir";
		};
		class sivil1: Life_RscButtonNativeGamerr
		{
			idc = 240008;
			text = "Sivil 1";
			onButtonClick = "[] call TON_fnc_cell_Hazir1";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "TESLIM OL. Ellerini Başının Üstüne Koy (TAB) Ters Bir Hareket Yaparsan Ateş Açılacaktır. Teslım Olman İçin 25 Saniyen Başladı.";
		};
		class polis2: Life_RscButtonNativeGamerr
		{
			idc = 2409;
			text = "Polis2";
			onButtonClick = "[] call TON_fnc_cell_Hazir2";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Polis: hbarınız Alınmıştır Fakat Yoğunluk Sebebiyle Bölgeye İntikal Edemiyoruz.";
		};
		class doktor2: Life_RscButtonNativeGamerr
		{
			idc = 24009;
			text = "Doktor2";
			onButtonClick = "[] call TON_fnc_cell_Hazir2";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Doktor: Bulunduğunz Bölgede Yaşanan Çatışma Nedeni İçin Gelemiyoruz. Çatışma Sesleri Bittiğinde 112 Çağrı Atınız";
		};
		class sivil2: Life_RscButtonNativeGamerr
		{
			idc = 240009;
			text = "Sivil 2";
			onButtonClick = "[] call TON_fnc_cell_Hazir2";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.488996 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "TESLIM OL. Yanındakı Silah Arkadaşların ve Sen TESLIM Olun Ellerinizi Başının Üstüne Koy (TAB) Aksi Bir Durumda Ateş Açılacaktır. Teslım Olman İçin 25 Sanıyen Başladı";
		};
		class polis3: Life_RscButtonNativeGamerr
		{
			idc = 2410;
			text = "Polis3";
			onButtonClick = "[] call TON_fnc_cell_Hazir3";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Polis: İhbarınız Alınmıştır Bölgeye Gecikmeli Olarak  İntikal Edilecektir.";
		};
		class doktor3: Life_RscButtonNativeGamerr
		{
			idc = 24010;
			text = "Doktor3";
			onButtonClick = "[] call TON_fnc_cell_Hazir3";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Doktor: Ekiplerimiz Elinden Geleni Yaptı Fakat Enkaz Altığında Olduğunuz İçin Müdahale Edemiyoruz.";
		};
		class sivil3: Life_RscButtonNativeGamerr
		{
			idc = 240010;
			text = "Sivil 3";
			onButtonClick = "[] call TON_fnc_cell_Hazir3";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "TESLIM OL. Aracı Sağa Çek Ellerını Basının Üstüne Koy (TAB) Aksi Takdirde Kaçmaya Devam Ederisen Ateş Açılacaktır. Teslim Olman İçin 15 Saniyen Başladı.";
		};
		class polis4: Life_RscButtonNativeGamerr
		{
			idc = 2411;
			text = "Polis4";
			onButtonClick = "[] call TON_fnc_cell_Hazir4";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "Polis: İhbarınız Alınmıştır Ancak Yeterli Ekibimiz Olmadığından Dolayı Bölgeye İntikal Edemiyoruz.";
		};
		class sivil4: Life_RscButtonNativeGamerr
		{
			idc = 24011;
			text = "Sivil 4";
			onButtonClick = "[] call TON_fnc_cell_Hazir4";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "POLİS İMDAT. Bulunduğumuz Bölgede Elleri Silahlı Şahıslar var. Çok Korkuyorum Milletimize Zarar Verecekler diye.";
		};
		/*
		class RscButtonMenu_2412: Life_RscButtonNativeGamerr
		{
			idc = 2412;
			text = "";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.577024 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "HAZIRLANIYOR";
		};
		class RscButtonMenu_2413: Life_RscButtonNativeGamerr
		{
			idc = 2413;
			text = "";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.577024 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "HAZIRLANIYOR";
		};
		class RscButtonMenu_2414: Life_RscButtonNativeGamerr
		{
			idc = 2414;
			text = "";
			x = 0.437878 * safezoneW + safezoneX;
			y = 0.621038 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "HAZIRLANIYOR";
		};
		class RscButtonMenu_2415: Life_RscButtonNativeGamerr
		{
			idc = 2415;
			text = "";
			x = 0.572476 * safezoneW + safezoneX;
			y = 0.621038 * safezoneH + safezoneY;
			w = 0.113891 * safezoneW;
			h = 0.0330105 * safezoneH;
			tooltip = "HAZIRLANIYOR";
		};*/
    };
};