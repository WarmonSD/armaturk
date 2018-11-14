private "_type";
_type = _this select 0;
switch (_type) do {
    case 0:{
            deleteMarker "redzone0";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyon");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone0", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[1950, 1950];
        };
    case 1:{
            deleteMarker "redzone0";
            deleteMarker "redzone1";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonbir");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone1", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[1600, 1600];
        };
    case 2:{
            deleteMarker "redzone1";
            deleteMarker "redzone2";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyoniki");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone2", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[1150, 1150];
        };
    case 3:{
            deleteMarker "redzone2";
            deleteMarker "redzone3";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonuc");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone3", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[950, 950];
        };
    case 4:{
            deleteMarker "redzone3";
            deleteMarker "redzone4";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyondort");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone4", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[850, 850];
        };
    case 5:{
            deleteMarker "redzone4";
            deleteMarker "redzone5";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonbes");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone5", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[750, 750];
        };
    case 6:{
            deleteMarker "redzone5";
            deleteMarker "redzone6";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonalti");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone6", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[600, 600];
        };
    case 7:{
            deleteMarker "redzone6";
            deleteMarker "redzone7";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonyedi");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone7", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[450, 450];
        };
    case 8:{
            deleteMarker "redzone7";
            deleteMarker "redzone8";
            _pozisyonsec = getArray(missionConfigFile >> "Salihf7_RedZoneEtkn" >> "Pozisyonsekiz");
            _pozisyon = selectRandom _pozisyonsec;
            _markerZone = createMarker["redzone8", _pozisyon];
            _markerZone setMarkerColor "ColorRed";
            _markerZone setMarkerType "Empty";
            _markerZone setMarkerShape "ELLIPSE";
            _markerZone setMarkerSize[200, 200];
        };
    case 9:{
            deleteMarker "redzone0";
            deleteMarker "redzone1";
            deleteMarker "redzone2";
            deleteMarker "redzone3";
            deleteMarker "redzone4";
            deleteMarker "redzone5";
            deleteMarker "redzone6";
            deleteMarker "redzone7";
            deleteMarker "redzone8";
            hint "REDZONE ETKINLIGI SONLANDIRILMISTIR";
        };
};