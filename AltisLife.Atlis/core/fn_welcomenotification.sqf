disableSerialization;
["", 0, 0.2, 10, 0, 0, 8] spawn BIS_fnc_dynamicText;
createDialog "RscDisplayWelcome";
_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;
playSound "hosgeldin";
_message = "";
_message = _message + "<t align='center' size='8' shadow='0'>ARMATURK</t><br /><br />";
_message = _message + "SALIHF7 2018 SCRIPT ARMATURK SUNUCUMUZA HOSGELDINIZ<br /><br />";
_message = _message + "<a color='#00DFFF'>•</a> FORUM: <a href='http://forum.armaturk.org' color='#56BDD6'> forum.armaturk.org</a><br />";
_message = _message + "<a color='#00DFFF'>•</a><a color='#56BDD6'> YETENEK AĞACINA CTRL+SHIFT+T İLE ULAŞABİLİRSİNİZ..</a><br />";
_text1 ctrlSetStructuredText(parseText _message);
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition[_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;