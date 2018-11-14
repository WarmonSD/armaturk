class CHIMPmap {
    idd = 38500;
    name = "CHIMPmap";
    movingenable = 0;
    enablesimulation = 1;
    onUnload = "[] spawn {{if(markerType _x != "
    "Empty"
    ") then {_x setMarkerAlphaLocal 1;};} forEach allMapMarkers;};";
    class controlsBackground {
        class Map: Life_RscMapControl {
            idc = 1200;
            x = 0.134375 * safezoneW + safezoneX;
            y = 0.107177974434612 * safezoneH + safezoneY;
            w = 0.740625 * safezoneW;
            h = 0.822025565388397 * safezoneH;
        };
    };
    class controls {
        class FilterList: Life_RscListBox {
            idc = 3265;
            text = "";
            sizeEx = 0.035;
            onlbselchanged = "[] spawn life_fnc_mapMarkers;";
            x = 0 * safezoneW + safezoneX;
            y = 0.107177974434612 * safezoneH + safezoneY;
            w = 0.134895833333333 * safezoneW;
            h = 0.822025565388397 * safezoneH;
        };
        class MapView: Life_RscText {
            x = 0.134375 * safezoneW + safezoneX;
            y = 0.0749331366764995 * safezoneH + safezoneY;
            h = 0.033 * safezoneH;
            w = 0.740625 * safezoneW;
            text = "ARMATURK HARITA FILTRELEME";
            colorbackground[] = {
                0,
                0,
                0.803921568627451,
                1
            };
            idc = 1000;
        };
    };
};