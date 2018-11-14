class Life_My_Gang_Diag {
    idd = 2620;
    name= "life_my_gang_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground {
        class MainBackground: life_RscPicture 
		{
            idc = -1;
			text = "textures\PMenu\cetem.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
        };
    };

    class controls {
        class Title: Life_RscTitle 
		{
            idc = 2629;
            text = "";
			x = 0.41199 * safezoneW + safezoneX;
			y = 0.301937 * safezoneH + safezoneY;
			w = 0.2485 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class GangMemberList: Life_RscListBox
        {
            idc = 2621;
            text = "";
            sizeEx = 0.035;
			x = 0.298094 * safezoneW + safezoneX;
			y = 0.345951 * safezoneH + safezoneY;
			w = 0.134604 * safezoneW;
			h = 0.352112 * safezoneH;
        };

        class CloseLoadMenu: Life_RscButtonNativeGamer 
		{
            idc = -1;
            text = "";
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
        };

        class GangLeave: Life_RscButtonNativeGamerr 
		{
            idc = -1;
            text = "$STR_Gang_Leave";
            onButtonClick = "[] call life_fnc_gangLeave";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.46699 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class GangLock: Life_RscButtonNativeGamerr 
		{
            idc = 2622;
            text = "$STR_Gang_UpgradeSlots";
            onButtonClick = "[] spawn life_fnc_gangUpgrade";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.522007 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class GangKick: Life_RscButtonNativeGamerr 
		{
            idc = 2624;
            text = "$STR_Gang_Kick";
            onButtonClick = "[] call life_fnc_gangKick";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.411972 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class GangLeader: Life_RscButtonNativeGamerr 
		{
            idc = 2625;
            text = "$STR_Gang_SetLeader";
            onButtonClick = "[] spawn life_fnc_gangNewLeader";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.577024 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class InviteMember: Life_RscButtonNativeGamerr 
		{
            idc = 2630;
            text = "$STR_Gang_Invite_Player";
            onButtonClick = "[] spawn life_fnc_gangInvitePlayer";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.356955 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class DisbandGang: Life_RscButtonNativeGamerr
		{
            idc = 2631;
            text = "$STR_Gang_Disband_Gang";
            onButtonClick = "[] spawn life_fnc_gangDisband";
			x = 0.432698 * safezoneW + safezoneX;
			y = 0.632042 * safezoneH + safezoneY;
			w = 0.119073 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class ColorList: Life_RscListBox 
		{
            idc = 2632;
			x = 0.551771 * safezoneW + safezoneX;
			y = 0.345951 * safezoneH + safezoneY;
			w = 0.134604 * safezoneW;
			h = 0.352112 * safezoneH;
        };
    };
};

class Life_Create_Gang_Diag {
    idd = 2520;
    name= "life_my_gang_menu_create";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)}; ((findDisplay 2520) displayCtrl 2523) ctrlSetText format [localize ""STR_Gang_PriceTxt"",[(getNumber(missionConfigFile >> 'Life_Settings' >> 'gang_price'))] call life_fnc_numberText]};";

    class controlsBackground {
        class MainBackground: life_RscPicture {
            idc = -1;
			text = "textures\PMenu\cetem.paa";
			x = 0.21014 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.590072 * safezoneW;
			h = 0.858 * safezoneH;
        };
    };

    class controls {
        class InfoMsg: Life_RscStructuredText {
            idc = 2523;
            sizeEx = 0.020;
            text = "";
			x = 0.391281 * safezoneW + safezoneX;
			y = 0.334948 * safezoneH + safezoneY;
			w = 0.227792 * safezoneW;
			h = 0.110035 * safezoneH;
        };

        class CloseLoadMenu: Life_RscButtonNativeGamer {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu;";
			x = 0.744428 * safezoneW + safezoneX;
			y = 0.648478 * safezoneH + safezoneY;
			w = 0.0310714 * safezoneW;
			h = 0.0439934 * safezoneH;
        };

        class GangCreateField: Life_RscButtonNativeGamerr {
            idc = -1;
            text = "Ceteyi Olustur";
            onButtonClick = "[] call life_fnc_createGang";
			x = 0.458583 * safezoneW + safezoneX;
			y = 0.53301 * safezoneH + safezoneY;
			w = 0.0880104 * safezoneW;
			h = 0.0330105 * safezoneH;
        };

        class CreateGangText: Life_RscEdit {
            idc = 2522;
            text = "$STR_Gang_YGN";
			x = 0.422344 * safezoneW + safezoneX;
			y = 0.455986 * safezoneH + safezoneY;
			w = 0.16049 * safezoneW;
			h = 0.0660209 * safezoneH;
        };
    };
};