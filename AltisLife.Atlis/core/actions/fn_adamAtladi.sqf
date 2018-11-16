if ((position player) select 2 > 100) then {
    private _backpack = backpack player;
    private _bpItems = backpackItems player;
    removeBackpack player;
    player addBackpack "B_Parachute";
    waitUntil {
        (position player) select 2 < 50
    };
    player action["OpenParachute", player];
    waitUntil {
        (position player) select 2 < 6
    };
    player allowDamage false;
    waitUntil {
        isTouchingGround player
    };
    removeBackpack player;
    player addBackpack _backpack; {
        player addItemToBackpack _x;
    }
    count _bpItems;
    if ({
            player distance getMarkerPos(_x select 0) < _x select 1
        }
        count[["kavalaguv", 640], ["kavalaseftaliguv", 50], ["bakirislemeguv", 50], ["demirislemeguv", 50], ["bakirmadeniguv", 50], ["rebelguv", 250], ["bagisciguv", 550], ["athiraguv", 650], ["havalaaniguv1", 400], ["havalaaniguv2", 400], ["pyrgosguv", 650], ["sofiaguv", 450], ["adaguv", 700], ["bagisciguv_2", 220], ["ada", 700], ["havaalanimed", 150], ["guvenlibolge_22", 650], ["guvenlibolge_3", 450], ["xoetkinlik", 200]] > 0) then {
        player allowDamage false;
    } else {
        player allowDamage true;
    };
};