params[["_unit", objNull, [objNull]]];
if (isNull _unit) exitWith {};
private _uniform = uniform _unit;
private _vest = vest _unit;
private _backpack = backpack _unit;
private _items = assignedItems _unit;
private _headgear = headgear _unit;
private _goggles = goggles _unit;
[_uniform, _vest, _backpack, _items, _headgear, _goggles];