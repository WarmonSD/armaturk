class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 1;

        class mav_tuning_fnc_saveTuningToDB {
            allowedTargets = 2;
        };
        class mav_tuning_fnc_disableLight {
            allowedTargets = 1;
        };
        class mav_tuning_fnc_enableLight {
            allowedTargets = 1;
        };
        class mav_tuning_fnc_hide {
            allowedTargets = 2;
        };

        class mav_taxi_fnc_serverFareFinished {
            allowedTargets = 2;
        };
        class mav_taxi_fnc_setDrivenDistance {
            allowedTargets = 1;
        };
        class mav_taxi_fnc_driverCallerPaid {
            allowedTargets = 1;
        };
        class mav_taxi_fnc_serverUpdateDestination {
            allowedTargets = 2;
        };
        class mav_taxi_fnc_serverQueueRequest {
            allowedTargets = 2;
        };
        class mav_taxi_fnc_serverDequeueRequest {
            allowedTargets = 2;
        };
        class mav_taxi_fnc_fareCancelled {
            allowedTargets = 1;
        };
        class mav_taxi_fnc_serverCallAccepted {
            allowedTargets = 2;
        };


        class mav_ttm_fnc_loadFromDatabase {
            allowedTargets = 2;
        };
        class mav_ttm_fnc_updateDatabaseEntry {
            allowedTargets = 2;
        };


        class life_fnc_AAN {
            allowedTargets = 1;
        };
        class life_fnc_addVehicle2Chain {
            allowedTargets = 1;
        };
        class life_fnc_adminID {
            allowedTargets = 1;
        };
        class life_fnc_adminInfo {
            allowedTargets = 1;
        };
        class life_fnc_polsSrnsk {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_copSearch {
            allowedTargets = 1;
        };
        class life_fnc_copSiren {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_copSiren2 {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_freezePlayer {
            allowedTargets = 1;
        };
        class life_fnc_gangCreated {
            allowedTargets = 1;
        };
        class life_fnc_gangDisbanded {
            allowedTargets = 1;
        };
        class life_fnc_gangInvite {
            allowedTargets = 1;
        };
        class life_fnc_garageRefund {
            allowedTargets = 1;
        };
        class life_fnc_giveDiff {
            allowedTargets = 1;
        };
        class life_fnc_hideObj {
            allowedTargets = 1;
        };
        class life_fnc_impoundMenu {
            allowedTargets = 1;
        };
        class life_fnc_jail {
            allowedTargets = 1;
        };
        class life_fnc_jailMe {
            allowedTargets = 1;
        };
        class life_fnc_knockedOut {
            allowedTargets = 1;
        };
        class life_fnc_licenseCheck {
            allowedTargets = 1;
        };
        class life_fnc_licensesRead {
            allowedTargets = 1;
        };
        class life_fnc_lightHouse {
            allowedTargets = 1;
        };
        class life_fnc_dktrSrnLgt {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_medicRequest {
            allowedTargets = 1;
        };
        class life_fnc_medicSiren {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_medicSiren2 {
            allowedTargets = 1;
            jip = 1;
        };
        class life_fnc_moveIn {
            allowedTargets = 1;
        };
        class life_fnc_pickupItem {
            allowedTargets = 1;
        };
        class life_fnc_pickupMoney {
            allowedTargets = 1;
        };
        class life_fnc_receiveItem {
            allowedTargets = 1;
        };
        class life_fnc_banapiriverpirii {
            allowedTargets = 1;
        };
        class life_fnc_removeLicenses {
            allowedTargets = 1;
        };
        class life_fnc_restrain {
            allowedTargets = 1;
        };
        class life_fnc_revived {
            allowedTargets = 1;
        };
        class life_fnc_soyMani {
            allowedTargets = 1;
        };
        class life_fnc_insnsoyarPara {
            allowedTargets = 1;
        };
        class life_fnc_searchClient {
            allowedTargets = 1;
        };
        class life_fnc_seizeClient {
            allowedTargets = 1;
        };
        class life_fnc_soundDevice {
            allowedTargets = 1;
        };
        class life_fnc_spikeStripEffect {
            allowedTargets = 1;
        };
        class life_fnc_tazeSound {
            allowedTargets = 1;
        };
        class life_fnc_ticketPaid {
            allowedTargets = 1;
        };
        class life_fnc_ticketPrompt {
            allowedTargets = 1;
        };
        class life_fnc_vehicleAnimate {
            allowedTargets = 1;
        };
        class life_fnc_wantedList {
            allowedTargets = 1;
        };
        class life_fnc_kisiyeHavale {
            allowedTargets = 1;
        };
        class life_fnc_initPayChecks {
            allowedTargets = 1;
        };
        class life_fnc_update {
            allowedTargets = 1;
        };
        class life_fnc_bountyHunterReceive {
            allowedTargets = 1;
        };
        class life_fnc_bountyList {
            allowedTargets = 1;
        };
        class life_fnc_markers {
            allowedTargets = 1;
        };
        class life_fnc_bountyReceive {
            allowedTargets = 1;
        };
        class SOCK_fnc_dataQuery {
            allowedTargets = 1;
        };
        class SOCK_fnc_insertPlayerInfo {
            allowedTargets = 1;
        };
        class SOCK_fnc_requestReceived {
            allowedTargets = 1;
        };
        class SOCK_fnc_istekGuncellesene {
            allowedTargets = 1;
        };
        class TON_fnc_clientGangKick {
            allowedTargets = 1;
        };
        class TON_fnc_clientGangLeader {
            allowedTargets = 1;
        };
        class TON_fnc_clientGangLeft {
            allowedTargets = 1;
        };
        class TON_fnc_clientGetKey {
            allowedTargets = 1;
        };
        class TON_fnc_clientMessage {
            allowedTargets = 1;
        };
        class TON_fnc_player_query {
            allowedTargets = 1;
        };
        class life_fnc_copSit {
            allowedTargets = 1;
        };
        class life_fnc_copStand {
            allowedTargets = 1;
        };
        class life_fnc_pb_response {
            allowedTargets = 1;
        };
        class BIS_fnc_execVM {
            allowedTargets = 2;
        };
        class DB_fnc_insertRequest {
            allowedTargets = 2;
        };
        class DB_fnc_queryRequest {
            allowedTargets = 2;
        };
        class DB_fnc_parcacikGuncelleyici {
            allowedTargets = 2;
        };
        class DB_fnc_istekGuncellesene {
            allowedTargets = 2;
        };
        class life_fnc_jailSys {
            allowedTargets = 2;
        };
        class life_fnc_wantedAdd {
            allowedTargets = 2;
        };
        class life_fnc_wantedBounty {
            allowedTargets = 2;
        };
        class life_fnc_realTimeSearch {
            allowedTargets = 2;
        };
        class life_fnc_wantedCrimes {
            allowedTargets = 2;
        };
        class life_fnc_wantedFetch {
            allowedTargets = 2;
        };
        class life_fnc_wantedProfUpdate {
            allowedTargets = 2;
        };
        class life_fnc_wantedRemove {
            allowedTargets = 2;
        };
        class life_fnc_bountyAdd {
            allowedTargets = 2;
        };
        class life_fnc_amountBounty {
            allowedTargets = 2;
        };
        class life_fnc_bountyFetch {
            allowedTargets = 2;
        };
        class life_fnc_bountyPerson {
            allowedTargets = 2;
        };
        class life_fnc_bountyProfUpdate {
            allowedTargets = 2;
        };
        class life_fnc_bountyRemove {
            allowedTargets = 2;
        };
        class life_fnc_bountyAlter {
            allowedTargets = 2;
        };
        class life_fnc_bountyCrimes {
            allowedTargets = 2;
        };
        class life_fnc_bountyAmountGather {
            allowedTargets = 2;
        };
        class TON_fnc_addContainer {
            allowedTargets = 2;
        };
        class TON_fnc_addHouse {
            allowedTargets = 2;
        };
        class TON_fnc_chopShopSell {
            allowedTargets = 2;
        };
        class TON_fnc_cleanupRequest {
            allowedTargets = 2;
        };
        class TON_fnc_deleteDBContainer {
            allowedTargets = 2;
        };
        class TON_fnc_getID {
            allowedTargets = 2;
        };
        class TON_fnc_getVehicles {
            allowedTargets = 2;
        };
        class TON_fnc_insertGang {
            allowedTargets = 2;
        };
        class TON_fnc_keyManagement {
            allowedTargets = 2;
        };
        class TON_fnc_manageSC {
            allowedTargets = 2;
        };
        class TON_fnc_pickupAction {
            allowedTargets = 2;
        };
        class TON_fnc_removeGang {
            allowedTargets = 2;
        };
        class TON_fnc_sellHouse {
            allowedTargets = 2;
        };
        class TON_fnc_sellHouseContainer {
            allowedTargets = 2;
        };
        class TON_fnc_setObjVar {
            allowedTargets = 2;
        };
        class TON_fnc_cikartAraci {
            allowedTargets = 2;
        };
        class TON_fnc_spikeStrip {
            allowedTargets = 2;
        };
        class TON_fnc_updateGang {
            allowedTargets = 2;
        };
        class TON_fnc_updateHouseContainers {
            allowedTargets = 2;
        };
        class TON_fnc_updateHouseTrunk {
            allowedTargets = 2;
        };
        class TON_fnc_vehicleCreate {
            allowedTargets = 2;
        };
        class TON_fnc_vehicleDelete {
            allowedTargets = 2;
        };
        class TON_fnc_vehicleDelete2 {
            allowedTargets = 2;
        };
        class TON_fnc_vehicleStore {
            allowedTargets = 2;
        };
        class TON_fnc_vehicleUpdate {
            allowedTargets = 2;
        };
        class TON_fnc_handleBlastingCharge {
            allowedTargets = 2;
        };
        class TON_fnc_houseGarage {
            allowedTargets = 2;
        };
        class TON_fnc_playerLogged {
            allowedTargets = 2;
        };
        class TON_fnc_getUpdate {
            allowedTargets = 2;
        };
        class TON_fnc_changePrice {
            allowedTargets = 2;
        };
        class TON_fnc_handleMessages {
            allowedTargets = 2;
        };
        class TON_fnc_msgRequest {
            allowedTargets = 2;
        };
        class TON_fnc_paintball {
            allowedTargets = 2;
        };
        class TON_fnc_game {
            allowedTargets = 2;
        };
        class HC_fnc_addContainer {
            allowedTargets = HC_Life;
        };
        class HC_fnc_addHouse {
            allowedTargets = HC_Life;
        };
        class HC_fnc_chopShopSell {
            allowedTargets = HC_Life;
        };
        class HC_fnc_deleteDBContainer {
            allowedTargets = HC_Life;
        };
        class HC_fnc_getVehicles {
            allowedTargets = HC_Life;
        };
        class HC_fnc_houseGarage {
            allowedTargets = HC_Life;
        };
        class HC_fnc_insertGang {
            allowedTargets = HC_Life;
        };
        class HC_fnc_insertRequest {
            allowedTargets = HC_Life;
        };
        class HC_fnc_insertVehicle {
            allowedTargets = HC_Life;
        };
        class HC_fnc_jailSys {
            allowedTargets = HC_Life;
        };
        class HC_fnc_keyManagement {
            allowedTargets = HC_Life;
        };
        class HC_fnc_queryRequest {
            allowedTargets = HC_Life;
        };
        class HC_fnc_removeGang {
            allowedTargets = HC_Life;
        };
        class HC_fnc_sellHouse {
            allowedTargets = HC_Life;
        };
        class HC_fnc_sellHouseContainer {
            allowedTargets = HC_Life;
        };
        class HC_fnc_cikartAraci {
            allowedTargets = HC_Life;
        };
        class HC_fnc_spikeStrip {
            allowedTargets = HC_Life;
        };
        class HC_fnc_updateGang {
            allowedTargets = HC_Life;
        };
        class HC_fnc_updateHouseContainers {
            allowedTargets = HC_Life;
        };
        class HC_fnc_updateHouseTrunk {
            allowedTargets = HC_Life;
        };
        class parcacikGuncelleyiciPartial {
            allowedTargets = HC_Life;
        };
        class HC_fnc_istekGuncellesene {
            allowedTargets = HC_Life;
        };
        class HC_fnc_vehicleCreate {
            allowedTargets = HC_Life;
        };
        class HC_fnc_vehicleDelete {
            allowedTargets = HC_Life;
        };
        class HC_fnc_vehicleStore {
            allowedTargets = HC_Life;
        };
        class HC_fnc_vehicleUpdate {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedAdd {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedBounty {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedCrimes {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedFetch {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedProfUpdate {
            allowedTargets = HC_Life;
        };
        class HC_fnc_wantedRemove {
            allowedTargets = HC_Life;
        };
        class BIS_fnc_effectKilledAirDestruction {
            allowedTargets = 0;
        };
        class BIS_fnc_effectKilledSecondaries {
            allowedTargets = 0;
        };
        class bis_fnc_showNotification {
            allowedTargets = 0;
        };
        class life_fnc_animSync {
            allowedTargets = 0;
        };
        class life_fnc_broadcast {
            allowedTargets = 0;
        };
        class life_fnc_colorVehicle {
            allowedTargets = 0;
        };
        class life_fnc_corpse {
            allowedTargets = 0;
        };
        class life_fnc_demoChargeTimer {
            allowedTargets = 0;
        };
        class life_fnc_flashbang {
            allowedTargets = 0;
        };
        class life_fnc_jumpFnc {
            allowedTargets = 0;
        };
        class life_fnc_lockVehicle {
            allowedTargets = 0;
        };
        class life_fnc_pulloutVeh {
            allowedTargets = 0;
        };
        class life_fnc_say3D {
            allowedTargets = 0;
        };
        class life_fnc_setFuel {
            allowedTargets = 0;
        };
        class life_fnc_simDisable {
            allowedTargets = 0;
        };
        class life_fnc_a3log {
            allowedTargets = 0;
        };
        class life_fnc_real_date {
            allowedTargets = 0;
        };
        class life_fnc_extDB3 {
            allowedTargets = 0;
        };
        class a3log {
            allowedTargets = 0;
        };
        class real_date {
            allowedTargets = 0;
        };
        class extDB3 {
            allowedTargets = 0;
        };
        class mav_ttm_fnc_addexp {
            allowedTargets = 0;
        };
        class life_fnc_duman {
            allowedTargets = 0;
        };
        class life_fnc_notification_system {
            allowedTargets = 0;
        };
    };
    class Commands {
        mode = 1;
        jip = 0;
        class addHandgunItem {
            allowedTargets = 0;
        };
        class addMagazine {
            allowedTargets = 0;
        };
        class addPrimaryWeaponItem {
            allowedTargets = 0;
        };
        class addWeapon {
            allowedTargets = 0;
        };
        class setFuel {
            allowedTargets = 0;
        };
        class a3log {
            allowedTargets = 0;
        };
        class real_date {
            allowedTargets = 0;
        };
        class extDB3 {
            allowedTargets = 0;
        };
    };
};