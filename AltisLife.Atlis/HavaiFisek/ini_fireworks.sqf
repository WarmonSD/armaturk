// by ALIAS
// nul = [obj_pozition,duration] execvm "HavaiFisek\alias_fireworks.sqf";
// Tutorial: https://www.youtube.com/watch?v=aNlaH8Do1Tk


/*
* Script MP and SP compatible
obj_pozition				- string, the name you gave to the object you want as origin for the fireworks, it can be any object
duration					- seconds, how long the fireworks show should go

======= Example Usage ====================
1) you can place a line inside the object ini field like this and fireworks will start as soon as you start the mission
	nul = [this,120] execvm "HavaiFisek\alias_fireworks.sqf";

2) you can run the script via trigger, action menu etc using a line where you specify the name of the object you want to be used as fireworks' position
	nul = [fireworks_object_1,120] execvm "HavaiFisek\alias_fireworks.sqf";
	
You can place as many fireworks objects as you want but use it wisely and mind the frames.
*/


nul = [this,120] execvm "HavaiFisek\alias_fireworks.sqf";