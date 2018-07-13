/*
Script name:    Zeus_Introduction.sqf
Created on:     ‎14 ‎April ‎2018
Author:         Curious

Description:    Create a custom introduction created by the zeus.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/
params [
  ["_text1", "", [""]],
  ["_text2", "", [""]],
  ["_text3", "", [""]],
  ["_text4", "", [""]],
  ["_text5", "", [""]]
];

[[_text1, _text2, _text3, _text4, _text5, trackSelection], {
  params ["_text1","_text2","_text3","_text4","_text5", "_trackSelection"];
  if !(side player == sideLogic) then {
      hint str _Text1;

//Grab params - PASSED
switch (_trackSelection) do
{
  case "Stage A: Lead Track 03":
    {


      playMusic "LeadTrack03_F_EPA";
      sleep 10;
      titleCut ["", "BLACK OUT", 4.5];
      sleep 4;
      "dynamicBlur" ppEffectEnable true;
      "dynamicBlur" ppEffectAdjust [6];
      "dynamicBlur" ppEffectCommit 0;
      "dynamicBlur" ppEffectAdjust [0.0];
      "dynamicBlur" ppEffectCommit 14;
      titleCut ["", "PLAIN", 0];

        _popuptext = "<t size='2.5' color='#ffffff'>" + "Welcome to" + "</t>";
        _value1 = [_popuptext,-1,-1,2,0,0]spawn bis_fnc_dynamicText;
        playsound "Hint";
        titleCut ["", "BLACK OUT", 3.25];
        sleep 3.35;
           _value1 = [_text1,nil,nil,-1,-1,3,0,0]spawn bis_fnc_dynamicText;
         titleCut ["", "PLAIN", 0];
         sleep 1;
      titleCut ["", "BLACK OUT", 3.25];
      sleep 3.75;
      _hour = date select 3;
      _min  = date select 4;


      [
          [
              [format["%1",name player],"<t align = 'center' shadow = '1' size = '2' font='RobotoCondensedLight'>%1</t><br/><br/>"],
        ["WELCOME TO","<t align = 'center' shadow = '1' size = '1' font='RobotoCondensedLight'>%1</t><br/>"],
        [_text1,"<t align = 'center' shadow = '1' size = '1' font='RobotoCondensedBold'>%1</t><br/>"],
        [_Text2,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensedLight'>%1</t><br/><br/>",20],
        [_Text3,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensed'>%1</t><br/>",5],
        [_Text4,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensed'>%1</t>",30]
        ], 0, 0, "<t align = 'center' shadow = '1' size = '1.0'>%1</t>" ] spawn BIS_fnc_typeText;
      sleep 17;
      systemChat "Introduction by Curious, Good luck out there!";
      "dynamicBlur" ppEffectEnable true;
      "dynamicBlur" ppEffectAdjust [6];
      "dynamicBlur" ppEffectCommit 0;
      "dynamicBlur" ppEffectAdjust [0.0];
      "dynamicBlur" ppEffectCommit 7.5;
      titleCut ["", "BLACK IN", 5];
      sleep 8;
      5 fadeMusic 0;
      sleep 5;
      playMusic "";
      0 fadeMusic 1;

  };

  case "This is War (VR Remix)":
    {

      params ["_text1","_text2","_text3","_text4","_text5"];

    playMusic "LeadTrack01_F_Bootcamp";
    titleCut ["", "BLACK OUT", 5];
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 14;
    sleep 5.37;
    titleCut ["", "PLAIN", 0];
      _value1 = [format["%1",name player],-1,-1,4,0,0]spawn bis_fnc_dynamicText;
      playsound "Hint";
      titleCut ["", "BLACK OUT", 5.43];
      sleep 5.43;
        titleCut ["", "PLAIN", 0];
        _value1 = ["Welcome to",-1,-1,4,0,0]spawn bis_fnc_dynamicText;
       titleCut ["", "BLACK OUT", 5.39];
      sleep 5.39;
        titleCut ["", "PLAIN", 0];
        _value1 = [_Text1,-1,-1,4,0,0]spawn bis_fnc_dynamicText;
       titleCut ["", "BLACK OUT", 4.78];
      sleep 4.78;
    _hour = date select 3;
    _min  = date select 4;


    [
        [
            [format["%1",name player],"<t align = 'center' shadow = '1' size = '2' font='RobotoCondensedLight'>%1</t><br/><br/>"],
      ["WELCOME TO","<t align = 'center' shadow = '1' size = '1' font='RobotoCondensedLight'>%1</t><br/>"],
      [_Text1,"<t align = 'center' shadow = '1' size = '1' font='RobotoCondensedBold'>%1</t><br/>"],
      [_Text2,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensedLight'>%1</t><br/><br/>",20],
      [_Text3,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensed'>%1</t><br/>",5],
      [_Text4,"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensed'>%1</t><br/>",5],
      [format ["Time: %1:%2", _hour, _min],"<t align = 'center' shadow = '1' size = '0.7' font='RobotoCondensed'>%1</t>",30]
      ], 0, 0, "<t align = 'center' shadow = '1' size = '1.0'>%1</t>" ] spawn BIS_fnc_typeText;
    sleep 17;
    systemChat "Introduction by Curious, Good luck out there!";
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 7.5;
    titleCut ["", "BLACK IN", 5];
    sleep 8;
    5 fadeMusic 0;
    sleep 5;
    playMusic "";
    0 fadeMusic 1;


  };
  case default
  {
    systemChat "No Intro Selected.";
  };
};
};

hint "Intro Created.";
}] remoteExec ["spawn"];