/*
Script name:    ZeusIntroNew.sqf
Created on:     ‎25 January 2018
Author:         Curious

Description:    Run an intro script if the player is new to the server.

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

        ["Enhanced Zeus Gamemaster","<t align = 'center' shadow = '1' size = '1.3'>%1 </t><br/>"],

        ["","<t align = 'center' shadow = '1' size = '1.3'>%1</t>%1<br/>"],

        ["Developed by Curious","<t align = 'center' shadow = '1' size = '1.3' color = '#f1c40f'>%1</t><br/>"],

        ["Hosted by Requested Everywhere","<t align = 'center' shadow = '1' size = '1.3'>%1</t><br/>"]



    ] spawn Bis_printText;

};


sleep 3;
        disableUserInput true;

        _rnd = random [20, 23, 30];
        _subtitles = [
            [ "System",         "Loading, please wait. This may take some time...", 0],
            [ "System",         "Almost done, final touches...", random [8, 12, 16]],
            [ "System",         "Loading complete, transmitting data...", _rnd]
        ];
        _subtitles spawn BIS_fnc_EXP_camp_playSubtitles;

        sleep _rnd;
        sleep 2;
        0 fadeMusic 0.3;
        playMusic ["EventTrack02_F_EPC", 7.90];
        7 fadeMusic 1;
        titlecut ["","BLACK IN",5];
        [0,0,false,true] call BIS_fnc_cinemaBorder;
        _camera = "camera" camCreate [9758.39,3411.72,65.64];
        _camera cameraEffect ["internal", "back"];
        //pos 1
        _camera camPrepareTarget [6200.30,7052.26,-99935.64];
        _camera camPreparePos [386.79,12487.05,5];
        _camera camPrepareFOV 0.700;
        _camera camCommitPrepared 0;

        //pos 2
        _camera camPrepareTarget [73464.47,-55829.99,6829.18];
        _camera camPreparePos [590.39,12296.62,64.34];
        _camera camPrepareFOV 0.700;
        _camera camCommitPrepared 20;
        sleep 2;
        [] call BIS_printSampleText;



        sleep 11;

        titlecut ["","BLACK OUT",5];
        sleep 5;
        _camera cameraEffect ["terminate", "back"];
        camDestroy _camera;
        player setDamage 1;
        sleep 3;
        titlecut ["","BLACK IN",6];
        [1,6,false,false] call BIS_fnc_cinemaBorder;
        disableUserInput false;
        7 fadeMusic 0;
        sleep 7;
        playMusic "";
        0 fadeMusic 1;