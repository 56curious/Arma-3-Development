/*
Script name:    ServerInformation.sqf
Created on:     ‎25 January 2018
Author:         Curious

Description:    Add information about the server to the map.

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:        N/A
*/

if (!hasInterface) exitWith {};

waitUntil {!isNull player};

player createDiarySubject ["", ""];
player createDiarySubject ["", ""];
player createDiarySubject ["information", "Information"];
player createDiarySubject ["", ""];
player createDiarySubject ["", ""];

player createDiaryRecord ["information",
[
"Rules & Guidelines",
"
<br /><font size='20'>Requested Everywhere Zeus Gamemaster Rule Set</font>
<br />
<br />
<br />Welcome to the Requested Everywhere Enhanced ZGM public server! We hope that you enjoy our server and everything it has to offer! if you wish to learn more, you can do so by reading the other notes.
<br />
<br />
<br />
<br />	1. When admin, do not abuse this. We do have undercover admins as well as a support framework code named 'WATCHDOG' that moniters the users. If it detects large numbers of player being kicked, the admin will be revoked and added on a cooldown, with a kick of course.
<br />
<br />	2. While we support the 'Double Power' issue of an admin also being in Zeus, an admin in the moderator slot monitering player is acceptable and encouraged if they do not wish to play on the ground.
<br />
<br />	3. We back the general rules of playing in a multiplayer environment, such as no spamming, general disruption of gameplay, disrespect of other players, teamkilling etc. If we feel you're out to remove the fun from others, we will deal with you.
<br />
<br />	4. Do not join the Zeus slot if you're in the blacklist. More information can be found in 'Gameplay Info'. (Feature coming soon)
<br />
<br />	5. Unit recruitment is allowed on this server, however we do ask that you don't abuse this, such as leaving members on solely for this. We do moniter the activity of players using 'WATCHDOG'.
<br />
<br />

<br /> Enjoy your stay, Requested Everywhere Administration.
"
]];

player createDiaryRecord ["information",
[
"Server Information",
"
<br />
<br />Our server uses a support framework by the name of 'WATCHDOG'. While we're not going to tell you everything it does, we will say it moniters player and server activity. This will include what was stated within the rules. The server itself is restarted every day at 1200 EST as this is the low-point for the majority of our player base.
<br />
<br />
<br />We do allow mods on this server, however they must be client-side. The current mod list we have approved and configured is:
<br /><font color='#d48421'>
<br />	1. JSRS Sound Mod (APEX)
<br />	2. Blastcore Edited (Standalone)
<br />	3. Shacktac HUD
<br />	4. Parts of ARES Achilles Expansion
<br /></font>
<br />These mods can also be loaded within the launcher when joining the server. It will also download them if they're missing.
<br />
"
]];


player createDiaryRecord ["information",
[
"Gameplay Information",
"
<br />
<br />Within our mission file, we have lots of goodies under the hood to ensure that the Zeus and the players get the best experience possible from our server. While this is mostly focused on the Zeus, this in turn will effect the players too. For example, you're able to create an introduction to your mission by filling out our function creator with relevent information. Antoher feature we have is general maintenance, i.e view distance. This is currently in Beta and will require a server moderator or admin to open the menu for you.
<br />
<br />
<br />Because we have a customized Ares/Achilles mod on this server, there is the chance that you can execute scripts via the Zeus menu. However, there are a few steps to do this. First of all, you need to have gained the trust of moderators. Trolling to a point in which it ruins the server will obviously blacklist you from this, forever. However, If players and moderators can see you're trustworthy, then we will add you to a whitelist for the execute code module. All the scripts, including their return values, will be logged to the server so that we know if you have been attempting to collect data or mis-use this feature. If too many people abuse this however, then it will removed as a feature for as long as we see fit.
"
]];

player createDiaryRecord ["information",
[
"Server Changelog",
"
<br />V 1.1.2 - 10th Jul 2018
<br />
<br />- [UPDATED] Various scripts to run smoother.
<br />- [UPDATED] Better detection of clients running with mods and then apply parms to them.
<br />- [UPDATED] Names of GUIs to sync together with it's framework.
<br />- [UPDATED] Updated recenty added features because of errors with servers crashing.
<br />- [UPDATED] Scripts to better perform in a multiplayer environment.
<br />- [ADDED] Custom countdown timer with effects.
<br />- [ADDED] Added more custom EZGM modules into the ARES Zeus menu.
<br />- [CHANGED] Zeus Modules to better incorp the ares menu and offical menu.
<br />- [CHANGED] Back-end files and the folder structure for development across maps.
<br />- [CHANGED] Zeus and Admin Menu to enable new features.
<br />- [FIXED] Various bugs (too many to list AGAIN hehe).
<br />
<br />
<br />
<br />V 1.1.1 - 27th Jun 2018
<br />
<br />- [UPDATED] Various scripts to run smoother.
<br />- [UPDATED] Mission file via the editor with new modules and spawn area.
<br />-	[UPDATED] Mod list for extra clientside mods.
<br />- [ADDED] Complete support for ARES Achilles Expansion and CBA.
<br />- [ADDED] Added custom EZGM modules into the ARES Zeus menu.
<br />- [ADDED] Custom loadouts into the respawn menu.
<br />- [ADDED] Support for certain people to have access to scripting commands by gaining trust.
<br />- [ADDED] Adjusted 'initRespawn.sqf' to better cater for various player types.
<br />- [ADDED] Support for various languages for params.
<br />- [ADDED] Support for keybinding functions.
<br />- [ADDED] Earplug support.
<br />- [ADDED] New features into the Zeus and Admin menus.
<br />- [ADDED] Ability to apply dynamicly changing weather.
<br />- [ADDED] Support for later development. (Such as: 'Custom Zeus structure compositions', 'Auto server switching', 'Zeus Jukbox and automatic audio playing', and more!)
<br />- [CHANGED] Zeus Modules to better incorp the ares menu and offical menu.
<br />- [CHANGED] Back-end files and the folder structure.
<br />- [CHANGED] Introduction feature to better cater to new and existing players.
<br />- [CHANGED] Zeus and Admin Menu to enable new features.
<br />- [FIXED] Various bugs (too many to list hehe).
<br />
<br />
<br />
<br />NOTE: Development was paused while the offical servers had enabled the debug console.
<br />
<br />
<br />
<br />V 1.1.0 - 6th Apr 2018
<br />
<br />- [UPDATED] Overhauled most of the framework.
<br />- [ADDED] Nothing at this time.
<br />- [CHANGED] Mods.
<br />- [FIXED] Nothing at this time.
<br />
<br />
<br />
<br />V 1.0.0 25th Jan 2018
<br />
<br />- [UPDATED] Nothing at this time.
<br />- [ADDED] Nothing at this time.
<br />- [CHANGED] Nothing at this time.
<br />- [FIXED] Nothing at this time.
"
]];
