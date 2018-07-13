/*
Script name:    ZeusIntroReturn.sqf
Created on:     ‎31 ‎May ‎2018
Author:         Curious

Description:    Run an intro and finish loading if player has been on the server
                before.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A

*/

Bis_printText =
{
    private["_blocks","_block","_blockCount","_blockNr","_blockArray","_blockText","_blockTextF","_blockTextF_","_blockFormat","_formats","_inputData","_processedTextF","_char","_cursorBlinks","_cursorInvis"];
    _blockCount = count _this;
    _invisCursor = "<t color ='#00000000' shadow = '0'>_</t>";
    _blocks = [];
    _formats = [];
    {
        _inputData = _x;
        _block     = [_inputData, 0, "", [""]] call BIS_fnc_param;
        _format = [_inputData, 1, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>", [""]] call BIS_fnc_param;
        _blockArray = toArray _block;
        {_blockArray set [_forEachIndex, toString [_x]]} forEach _blockArray;
        _blocks  = _blocks + [_blockArray];
        _formats = _formats + [_format];
    }
    forEach _this;
    _processedTextF  = "";
    {
        _blockArray  = _x;
        _blockNr      = _forEachIndex;
        _blockFormat = _formats select _blockNr;
        _blockText   = "";
        _blockTextF  = "";
        _blockTextF_ = "";
        {
            _char = _x;
            _blockText = _blockText + _char;
            _blockTextF  = format[_blockFormat, _blockText + _invisCursor];
            _blockTextF_ = format[_blockFormat, _blockText + "_"];
            [(_processedTextF + _blockTextF_), 0, 0.15, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
            playSound "click";
            sleep 0.08;
            [(_processedTextF + _blockTextF), 0, 0.15, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
            sleep 0.02;
        }
        forEach _blockArray;
        if (_blockNr + 1 < _blockCount) then
        {
            _cursorBlinks = 5;
        }
        else
        {
            _cursorBlinks = 15;
        };
        for "_i" from 1 to _cursorBlinks do
        {
            [_processedTextF + _blockTextF_, 0, 0.15, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
            sleep 0.08;
            [_processedTextF + _blockTextF, 0, 0.15, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
            sleep 0.02;
        };
        _processedTextF  = _processedTextF + _blockTextF;
    }
    forEach _blocks;
    ["", 0, 0.15, 5, 0, 0, 90] spawn BIS_fnc_dynamicText;
};


Bis_printSampleText =

{

    [

        [format["%1,",name player],"<t align = 'center' shadow = '1' size = '1.3'>%1</t><br/>"],

        ["","<t align = 'center' shadow = '1' size = '1.3'>%1</t>%1<br/>"],

        ["Welcome Back to EZGM!","<t align = 'center' shadow = '1' size = '1.3'>%1</t><br/>"],

        ["Final Settings are loading...","<t align = 'center' shadow = '1' size = '1.3'>%1</t><br/>"]



    ] spawn Bis_printText;

};

sleep 3;
        disableUserInput true;
        0 fadeMusic 0;
        playMusic "LeadTrack03_F_Bootcamp";
        7 fadeMusic 1;
        _rnd = random [20, 23, 30];
        _subtitles = [
            [ "System",         "Loading, please wait. This may take some time...", 0],
            [ "System",         "Almost done, final touches...", random [8, 12, 16]],
            [ "System",         "Loading complete, transmitting data...", _rnd]
        ];
        _subtitles spawn BIS_fnc_EXP_camp_playSubtitles;

        sleep 5;
        [] call BIS_printSampleText;
        _RemainingTime = _rnd - 8;
        sleep _RemainingTime;
        titlecut ["","BLACK IN",5];
        player setDamage 1;
        disableUserInput false;
        7 fadeMusic 0;
        sleep 7;
        playMusic "";
        0 fadeMusic 1;