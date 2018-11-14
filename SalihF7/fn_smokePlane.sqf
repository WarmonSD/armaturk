#include "..\..\script_macros.hpp"
/*
	Author: Victor alias Vivi la masse
	For BorderLife.eu / prism.ovh
	
	Description:
	Smoke on plane, What else ?
*/
_plane = vehicle player; //véhicule du joueur
_smokePrice = 19500; //prix de l'activation

if(isNil {_plane getVariable "smokedPlane"}) then { _plane setVariable ["smokedPlane",0];}; //Si la variable "smokedPlane" n'a pas de valeur, la mettre à 0

if ((_plane getVariable "smokedPlane") == 0) then {
	_smoke = "SmokeShell" createVehicle position _plane; //Fumigène blanc
	_smokeBlue = "SmokeShellBlue" createVehicle position _plane; //Fumigène bleu
	_smokeRed = "SmokeShellRed" createVehicle position _plane; //Fumigène touge
	
	if (BANK > _smokePrice) then
		{
			BANK = BANK - _smokePrice ;
			hint "19.500TL karsiliginda dumanlar acildi.";
		};
		
	if (BANK < _smokePrice) exitWith {hint "Banka hesabinda 19.500TL yok!";};

	_smoke attachTo[_plane, [0, 0, -0.8]];  
	_smokeBlue attachTo[_plane, [-5.3, 0.35, -0.57]]; 
	_smokeRed attachTo[_plane, [5.3, 0.35, -0.57]];
	_plane setVariable ["smokedPlane",1];	
	sleep 70;
	detach _smoke;
	detach _smokeBlue;
	detach _smokeRed;
	_plane setVariable ["smokedPlane",0];
};
