life_query_time = time;
life_action_delay = time;
life_trunk_vehicle = objNull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_net_dropped = false;
life_siren_active = false;
life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
life_spikestrip = objNull;
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
tawvd_addon_disable = true;
life_god = false;
life_frozen = false;
life_save_gear = [];
life_container_activeObj = objNull;
life_disable_getIn = false;
life_disable_getOut = false;
life_admin_debug = false;
life_preview_3D_vehicle_cam = objNull;
life_preview_3D_vehicle_object = objNull;
life_preview_light = objNull;
life_pos_exist = false;
life_pos_attach = [];
life_civ_position = [];
life_markers = false;
life_markers_active = false;
life_canpay_bail = true;
life_request_timer = false;
life_storagePlacing = scriptNull;
life_nlrtimer_running = false;
life_nlrtimer_stop = false;
life_seatbelt = false;
life_removeBounty = false;
life_open_notifications = [];
life_hints = [];
life_evmenusuactim = false;
life_lightskullanimi = false;
life_yasaklitus = 0;
life_terminate = 0;
roentgen_in_progress = false;
roentgen_request_accepted = false;
life_smoking = false;
life_tmenuAcik = false;
life_polislertoplantida = false;
life_etknlikgirisi = false;
life_etknlkgrsoru = false;
life_etknlkcks = false;
life_bildirdim = 0;
life_save_gear_ucretli = [];
life_save_gear_ucretli2 = [];
life_kayitfiyati = 0;
life_kayitfiyati2 = 0;
life_kayitOnayfiyati = 0;
life_kayitOnayfiyati2 = 0;
life_kayitetmekistiyor = false;
life_baltaelinde = false;
life_athirayitutuyor = false;
life_bugcokyaptin = 0;
life_smartphoneTarget = ObjNull;
life_settings_enableNewsBroadcast = profileNamespace getVariable["life_enableNewsBroadcast", true];
life_settings_enableSidechannel = profileNamespace getVariable["life_enableSidechannel", true];
life_settings_tagson = profileNamespace getVariable["life_settings_tagson", true];
life_settings_revealObjects = profileNamespace getVariable["life_settings_revealObjects", true];
life_settings_viewDistanceFoot = profileNamespace getVariable["life_viewDistanceFoot", 1250];
life_settings_viewDistanceCar = profileNamespace getVariable["life_viewDistanceCar", 1250];
life_settings_viewDistanceAir = profileNamespace getVariable["life_viewDistanceAir", 1250];
life_clothing_purchase = [-1, -1, -1, -1, -1];
life_maxWeight = getNumber(missionConfigFile >> "Life_Settings" >> "total_maxWeight");
life_carryWeight = 0;
life_net_dropped = false;
life_use_atm = true;
life_is_arrested = false;
life_is_alive = false;
life_delivery_in_progress = false;
life_thirst = 100;
life_hunger = 100;
life_nikitsf7 = 0;
life_istazed = false;
life_isknocked = false;
life_vehicles = []; {
    missionNamespace setVariable[format["life_inv_%1", getText(missionConfigFile >> "VirtualItems" >> configName _x >> "variable")], 0];
}
forEach("true"
    configClasses(missionConfigFile >> "VirtualItems")); {
    _varName = getText(_x >> "variable");
    _sideFlag = getText(_x >> "side");
    missionNamespace setVariable[format["license_%1_%2", _sideFlag, getText(missionConfigFile >> "Licenses" >> _varName >> "variable")], false];
}
forEach("true"
    configClasses(missionConfigFile >> "Licenses"));