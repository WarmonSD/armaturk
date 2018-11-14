/*
	File : hud_stats.hpp
	Author: Neil Smith / Deadlesszombie
	http://steamcommunity.com/id/AceVintage
	Usage: ONLY to be used given permission by deadlesszombie/neil smith (you can contact me on www.altisliferpg.com
*/

//this is just for us to remember, or we can actually use these to update the hud
#define IDC_LIFE_HEALTH 3301
#define IDC_LIFE_HEALTH_PRCNT 3302
#define IDC_LIFE_FOOD 3303
#define IDC_LIFE_FOOD_PRCNT 3304
#define IDC_LIFE_WATER 3305
#define IDC_LIFE_WATER_PRCNT 3306
#define IDC_LIFE_PLAYERNAME 3307
#define IDC_LIFE_CASH 3308
#define IDC_LIFE_BANK 3309

class playerHUD 
{
    idd = 3300;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
	objects[] = { };
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	class ControlsBackground{};
	class Controls
	{
		class LIFE_CTRL_Bars: Life_RscBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.681875;
			y = safeZoneY + safeZoneH * 0.45666667;
			w = safeZoneW * 0.413125;
			h = safeZoneH * 0.89666667;
			style = 0+48;
			text = "textures\Bars.paa";
			colorBackground[] = {0.0039,0.0431,0.0353,1};
			colorText[] = {0.9961,0.9569,0.9647,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class LIFE_CTRL_Water: Life_RscProgress
		{
			type = 8;
			idc = IDC_LIFE_WATER;
			x = safeZoneX + safeZoneW * 0.963125;
			y = safeZoneY + safeZoneH * 0.71333334;
			w = safeZoneW * 0.014375;
			h = safeZoneH * 0.16888889;
			style = 1;
			colorBar[] = {0.102,0.2,0.6,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class LIFE_CTRL_Health: Life_RscProgress
		{
			type = 8;
			idc = IDC_LIFE_HEALTH;
			x = safeZoneX + safeZoneW * 0.9375;
			y = safeZoneY + safeZoneH * 0.69666667;
			w = safeZoneW * 0.014375;
			h = safeZoneH * 0.18;
			style = 1;
			colorBar[] = {0.6,0,0,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class LIFE_CTRL_Food: Life_RscProgress
		{
			type = 8;
			idc = IDC_LIFE_FOOD;
			x = safeZoneX + safeZoneW * 0.911875;
			y = safeZoneY + safeZoneH * 0.71444445;
			w = safeZoneW * 0.014375;
			h = safeZoneH * 0.16666667;
			style = 1;
			colorBar[] = {0.2,0.4,0.2,1};
			colorFrame[] = {0,0,0,1};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			
		};
		class LIFE_CTRL_Background: Life_RscBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.70875;
			y = safeZoneY + safeZoneH * 0.53777778;
			w = safeZoneW * 0.3875;
			h = safeZoneH * 0.67222223;
			style = 0+48;
			text = "textures\Base.paa";
			colorBackground[] = {0.0039,0.0431,0.0353,1};
			colorText[] = {0.9961,0.9569,0.9647,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class LIFE_CTRL_Food_Percent: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_FOOD_PRCNT;
			x = safeZoneX + safeZoneW * 0.91;
			y = safeZoneY + safeZoneH * 0.78333334;
			w = safeZoneW * 0.0175;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};

			
		};
		class LIFE_CTRL_Water_Percent: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_WATER_PRCNT;
			x = safeZoneX + safeZoneW * 0.96125;
			y = safeZoneY + safeZoneH * 0.78333334;
			w = safeZoneW * 0.0175;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};
		
		};
		class LIFE_CTRL_Health_Percent: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_HEALTH_PRCNT;
			x = safeZoneX + safeZoneW * 0.93625;
			y = safeZoneY + safeZoneH * 0.78333334;
			w = safeZoneW * 0.0175;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};
			
		};
		class LIFE_CTRL_Cash: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_CASH;
			x = safeZoneX + safeZoneW * 0.81875;
			y = safeZoneY + safeZoneH * 0.91222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.02;
			style = 0+1;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};

			
		};
		class LIFE_CTRL_PlayerName: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_PLAYERNAME;
			x = safeZoneX + safeZoneW * 0.82875;
			y = safeZoneY + safeZoneH * 0.87666667;
			w = safeZoneW * 0.086875;
			h = safeZoneH * 0.02;
			style = 0+1;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};

			
		};
		class LIFE_CTRL_Bank: Life_RscStructuredText
		{
			type = 13;
			idc = IDC_LIFE_BANK;
			x = safeZoneX + safeZoneW * 0.82875;
			y = safeZoneY + safeZoneH * 0.94666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.02;
			style = 0+1;
			text = "";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};

		};
	};
};
