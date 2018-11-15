player addEventHandler["Killed", {
    _this call life_fnc_onPlayerKilled
}];
player addEventHandler["HandleDamage", {
    _this call life_fnc_handleDamage
}];
player addEventHandler["Respawn", {
    _this call life_fnc_onPlayerRespawn
}];
player addEventHandler["Take", {
    _this call life_fnc_onTakeItem
}];
player addEventHandler["Put", {
    _this call life_fnc_onPutItem
}];
player addEventHandler["Fired", {
    _this call life_fnc_onFired
}];
player addEventHandler["InventoryClosed", {
    _this call life_fnc_inventoryClosed
}];
player addEventHandler["InventoryOpened", {
    _this call life_fnc_inventoryOpened
}];
player addEventHandler["HandleRating", {
    0
}];
player addEventHandler["GetOutMan", {
    _this spawn life_fnc_adamAtladi
}];
addMissionEventHandler["Map", {
    _this call life_fnc_checkMap
}];