/*
 Created by Mokomoko
 Date: 04.08.2014
*/
private "_vehicle";
_vehicle = (vehicle player);
if (typeOf _vehicle in ["C_Offroad_01_F","O_Truck_03_device_F"]) then {
private["_vehicleToFuel","_velocityOfVehicle","_fuelConsumption"];
while{true} do 
{
	_vehicleToFuel = (vehicle player);
	if(isEngineOn _vehicleToFuel && ((driver _vehicleToFuel) == player) && !(_vehicleToFuel isKindOf "Air") && (_vehicleToFuel != player) ) then
	{
		_velocityOfVehicle = sqrt(((velocity _vehicleToFuel select 0)^2)+((velocity _vehicleToFuel select 1)^2))*3.6;
		_fuelConsumption = _velocityOfVehicle/80000 + 0.001;
	if(_fuelConsumption > 0.002) then
	{
		_fuelConsumption = 0.00000000002;
	};
		//_vehicleToFuel setFuel ((fuel _vehicleToFuel)-_fuelConsumption);
		_vehicleToFuel setFuel 1;
		
	if(fuel _vehicleToFuel < 0.2 && fuel _vehicleToFuel > 0.18) then {
		hint "Depon bitmek uzere yolda kalmak istemiyorsan en yakin benzinlikte dur.";
	}	else	{
			if(fuel _vehicleToFuel < 0.03) then
			{
				hint "Yolda kaldin neden mi ? Benzin bitti!";
			};
		};
	};
					sleep 2;
	};
};