class Socket_Reciever {
    tag = "SOCK";
    class SQL_Socket {
        file = "core\session";
        class dataQuery {};
        class insertPlayerInfo {};
        class requestReceived {};
        class syncData {};
        class parcacikGuncelleyici {};
        class istekGuncellesene {};
    };
};
class Life_Client_Core {
    tag = "life";
    class Master_Directory {
        file = "core";
        class initCiv {};
        class initCop {};
        class initMedic {};
        class setupActions {};
        class setupEVH {};
        class survival {};
        class welcomeNotification {};
    };
    class Actions {
        file = "core\actions";
        class arrestAction {};
        class buyLicense {};
        class captureHideout {};
        class captureHideout2 {};
        class catchFish {};
        class dpFinish {};
        class dropFishingNet {};
        class escortAction {};
        class gather {};
        class getDPMission {};
        class healHospital {};
        class impoundAction {};
        class mine {};
        class newsBroadcast {};
        class packupSpikes {};
        class pickupItem {};
        class pickupMoney {};
        class postBail {};
        class processAction {};
        class pulloutAction {};
        class putInCar {};
        class removeContainer {};
        class repairTruck {};
        class restrainAction {};
        class soyManAksiyon {};
        class searchAction {};
        class searchVehAction {};
        class seizePlayerAction {};
        class serviceChopper {};
        class stopEscorting {};
        class storeVehicle {};
        class surrender {};
        class ticketAction {};
        class unrestrain {};
        class holsterWeapon {};
        class robShops {};
        class robShops2 {};
        class copEnter {};
        class medEnter {};
        class sf7pain {};
        class civrestrainAction {};
        class civRestrain {};
        class adamAtladi {};
        class elkoyAksiyon {};
    };
    class Admin {
        file = "core\admin";
        class adminCompensate {};
        class adminDebugCon {};
        class adminFreeze {};
        class admingetID {};
        class adminGodMode {};
        class adminid {};
        class admininfo {};
        class adminMarkers {};
        class adminMenu {};
        class adminQuery {};
        class adminSpectate {};
        class adminTeleport {};
        class adminTpHere {};
    };
    class Civilian {
        file = "core\civilian";
        class civLoadout {};
        class civMarkers {};
        class demoChargeTimer {};
        class freezePlayer {};
        class jail {};
        class jailMe {};
        class knockedOut {};
        class knockoutAction {};
        class removeLicenses {};
        class soyMani {};
        class insnsoyarPara {};
        class tazed {};
        class civInteractionMenu {};
    };
    class Config {
        file = "core\config";
        class houseConfig {};
        class itemWeight {};
        class vehicleAnimate {};
        class vehicleWeightCfg {};
    };
    class Cop {
        file = "core\cop";
        class bountyReceive {};
        class containerInvSearch {};
        class copInteractionMenu {};
        class polsSrnsk {};
        class copLoadout {};
        class copMarkers {};
        class copSearch {};
        class copSiren {};
        class copSiren2 {};
        class doorAnimate {};
        class fedCamDisplay {};
        class licenseCheck {};
        class licensesRead {};
        class questionDealer {};
        class radar {};
        class repairDoor {};
        class restrain {};
        class searchClient {};
        class seizeClient {};
        class isikSrn {};
        class spikeStripEffect {};
        class ticketGive {};
        class ticketPaid {};
        class ticketPay {};
        class ticketPrompt {};
        class vehInvSearch {};
        class wantedGrab {};
        class seizeObjects {};
        class copSit {};
        class copStand {};
    };
    class Dialog_Controls {
        file = "dialog\function";
        class bankDeposit {};
        class bankTransfer {};
        class bankWithdraw {};
        class displayHandler {};
        class gangDeposit {};
        class gangWithdraw {};
        class garageLBChange {};
        class impoundMenu {};
        class progressBar {};
        class safeFix {};
        class safeFix2 {};
        class safeFix3 {};
        class safeInventory {};
        class safeOpen {};
        class safeTake {};
        class sellGarage {};
        class setMapPosition {};
        class spawnConfirm {};
        class spawnMenu {};
        class spawnPointCfg {};
        class spawnPointSelected {};
        class unimpound {};
        class vehicleGarage {};
        class kisiyeHavale {};
    };
    class Functions {
        file = "core\functions";
        class AAN {};
        class accType {};
        class actionKeyHandler {};
        class animSync {};
        class calWeightDiff {};
        class checkMap {};
        class clearVehicleAmmo {};
        class dropItems {};
        class escInterupt {};
        class fetchCfgDetails {};
        class fetchDeadGear {};
        class fetchVehInfo {};
        class isDamaged {};
        class giveDiff {};
        class handleDamage {};
        class handleInv {};
        class handleItem {};
        class hideObj {};
        class hudSetup {};
        class hudUpdate {};
        class inventoryClosed {};
        class inventoryOpened {};
        class isUIDActive {};
        class keyHandler {};
        class loadDeadGear {};
        class loadDeadGearLog {};
        class loadGear {};
        class nearATM {};
        class nearestDoor {};
        class nearUnits {};
        class numberText {};
        class onFired {};
        class onTakeItem {};
        class onPutItem {};
        class playerSkins {};
        class playerTags {};
        class postNewsBroadcast {};
        class pullOutVeh {};
        class pushObject {};
        class receiveItem {};
        class banapiriverpirii {};
        class revealObjects {};
        class saveGear {};
        class searchPosEmpty {};
        class simDisable {};
        class stripDownPlayer {};
        class teleport {};
        class whereAmI {};
        class initPayChecks {};
        class sf7sivilli {};
        class sf7surucu {};
        class guvenli {};
        class copOpener {};
        class sunucubilgi {};
        class movesMenu {};
        class newLifeRule {};
        class seatbelt {};
        class notification_system {};
        class realTimeCheck {};
        class expYukleOldurene {};
        class ryn_message {};
        class message {};
    };
    class Gangs {
        file = "core\gangs";
        class createGang {};
        class gangCreated {};
        class gangDisband {};
        class gangDisbanded {};
        class gangInvite {};
        class gangInvitePlayer {};
        class gangKick {};
        class gangLeave {};
        class gangMenu {};
        class gangNewLeader {};
        class gangUpgrade {};
        class initGang {};
    };
    class Housing {
        file = "core\housing";
        class buyHouse {};
        class buyHouseGarage {};
        class containerMenu {};
        class copBreakDoor {};
        class copHouseOwner {};
        class garageRefund {};
        class getBuildingPositions {};
        class houseMenu {};
        class initHouses {};
        class lightHouse {};
        class lightHouseAction {};
        class lockHouse {};
        class lockupHouse {};
        class placeContainer {};
        class PlayerInBuilding {};
        class raidHouse {};
        class sellHouse {};
        class sellHouseGarage {};
    };
    class Items {
        file = "core\items";
        class blastingCharge {};
        class boltcutter {};
        class defuseKit {};
        class flashbang {};
        class jerrycanRefuel {};
        class jerryRefuel {};
        class lockpick {};
        class placestorage {};
        class spikeStrip {};
        class storageBox {};
        class gpsTracker {};
        class bandages {};
        class morphine {};
        class medkit {};
        class sigara {};
        class duman {};
        class eroin {};
        class esrar {};
        class kokain {};
    };
    class Medical_System {
        file = "core\medical";
        class deathScreen {};
        class dktrSrnLgt {};
        class medicLoadout {};
        class medicMarkers {};
        class medicRequest {};
        class medicSiren {};
        class medicSiren2 {};
        class dktrSrnIsklri {};
        class onPlayerKilled {};
        class onPlayerRespawn {};
        class requestMedic {};
        class respawned {};
        class revived {};
        class revivePlayer {};
        class requestRoentgen {};
        class startRoentgen {};
    };
    class Network {
        file = "core\functions\network";
        class broadcast {};
        class corpse {};
        class jumpFnc {};
        class say3D {};
        class setFuel {};
        class soundDevice {};
    };
    class Player_Menu {
        file = "core\pmenu";
        class cellphone {};
        class giveItem {};
        class caktirmaPiriVer {};
        class keyDrop {};
        class keyGive {};
        class keyMenu {};
        class p_openMenu {};
        class p_updateMenu {};
        class pardon {};
        class removeItem {};
        class s_onChar {};
        class s_onCheckedChange {};
        class s_onSliderChange {};
        class settingsMenu {};
        class updateViewDistance {};
        class useItem {};
        class wantedAddP {};
        class wantedInfo {};
        class wantedList {};
        class wantedMenu {};
        class smartphone {};
        class newMsg {};
        class showMsg {};
    };
    class Shops {
        file = "core\shops";
        class atmMenu {};
        class buyClothes {};
        class changeClothes {};
        class chopShopMenu {};
        class chopShopSelection {};
        class chopShopSell {};
        class clothingFilter {};
        class clothingMenu {};
        class fuelLBchange {};
        class fuelStatOpen {};
        class levelCheck {};
        class vehicleShop3DPreview {};
        class marketSatinAlArac {};
        class vehicleShopEnd3DPreview {};
        class vehicleShopInit3DPreview {};
        class vehicleShopLBChange {};
        class vehicleShopMenu {};
        class virt_buy {};
        class virt_menu {};
        class virt_sell {};
        class virt_update {};
        class weaponShopAccs {};
        class weaponShopBuySell {};
        class weaponShopFilter {};
        class weaponShopMags {};
        class weaponShopMenu {};
        class weaponShopSelection {};
        class licenses {};
        class licshop_update {};
    };
    class Vehicle {
        file = "core\vehicle";
        class addVehicle2Chain {};
        class colorVehicle {};
        class deviceMine {};
        class FuelRefuelcar {};
        class fuelStore {};
        class fuelSupply {};
        class lockVehicle {};
        class openInventory {};
        class vehiclecolor3DRefresh {};
        class vehicleOwners {};
        class vehicleWeight {};
        class vehInventory {};
        class vehStoreItem {};
        class vehTakeItem {};
        class vInteractionMenu {};
    };
    class Agacisi {
        file = "core\Agacisi";
        class tahtabacak {};
        class budama {};
        class holdItem {};
    };
    class DynMarket {
        file = "core\DynMarket";
        class bought {};
        class update {};
        class DisplayPrices {};
        class LoadIntoListbox {};
        class ForcePrice {};
        class DYNMARKET_getPrice {};
    };
    class CopPlaceables {
        file = "core\cop\placeables";
        class placeablesInit {};
        class placeablesMenu {};
        class placeablesRemoveAll {};
        class placeablePlace {};
        class placeableCancel {};
        class placeablesPlaceComplete {};
    };
    class BountyHunters {
        file = "core\BountyHunters";
        class bountyAddMenu {};
        class bountyAddP {};
        class bountyBuy {};
        class bountyGrab {};
        class bountyHunterReceive {};
        class bountyInfo {};
        class bountyKill {};
        class bountyList {};
        class bountyMenu {};
        class markers {};
    };
    class KiyafetKayitEt {
        file = "core\KiyafetKayit";
        class kayitEdermisin {};
        class kayitYuklermisin {};
        class kayitlariSistemeAt {};
        class kayitlariOyuncuyaUp {};
    };
    class SilahKayitEt {
        file = "core\SilahKayit";
        class kayitEdermisin1 {};
        class kayitYuklermisin2 {};
        class kayitlariSistemeAt2 {};
        class kayitlariOyuncuyaUp2 {};
    };
    class Paintball {
        file = "core\paintball";
        class pb_response {};
        class ryn_message {};
    };
    class Map {
        file = "core\map";
        class openMap {};
        class mapMarkers {};
    };
};
class Toxic_Functions {
    tag = "Toxic";
    class Toxic_Main {
        file = "core\Toxic";
        class busMenu {};
        class busStart {};
    };
};