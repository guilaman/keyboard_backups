#include "ga_planck2mini.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Thanks to Jack Humbert and the QMK community for creating these powerful tools and making them freely available. Keymap by guilaman:
   47-key Planck 4-layer Qwerty keymap with Shift,Control,Alt,Super on both sides and more functions than a 108-key board:Numpad,F1-12;
   left+right one-hand movement+jumps, Enter,Bkspc,Del,Tab,Esc on either hand;NumLk,ScrLk,PrScn,Menu,Ins,SysRq,mouse,media,macros,LED.
 
   * This keymap has HJKL arrow keys to match Vim gestures; if not using Vim then IJKL arrows will be more friendly and intuitive.
   * Layers 3 and 2 activated from thumb resting positions on either side of Spacebar; two keys for Layer 1 with thumbs outside of alts;
   I switch the orientation of bottom row R1 keycaps for Spacebar and Layers so that the Alt keys' higher profile serves as tactile mark. 
   ***
   0-BASE layer with Shift, Control, Alt/AltGr, Super/Win on both sides, Esc, Tab, Bkspc, Enter like a traditional layout.
   4-NAVIGATION layer:[HJKL]arrows,[YUIO]pgUp/Hm/End/pgDn, [NM,.] 4-way scroll;[P;/]Insert,ScrLk,NumLk;topright Del;[ESDF+WR] mouse+clicks.
   3-SYMBOLS layer: quotes,brackets+ on right;top number row(shifted by OS);mirrored [XCVB]4way scroll+[SDFG]arrows;Bksp,Del,Enter top left.
   2-NUMPAD+Fs: numberpad with 0123 under [ZXCV], [WER]789; F-keys on right [M-/]F1-F4, [J-;]F5-F8, [U-P]F9-F12; Esc,Tab on upper right.
   L3, L2, L1 keys also access CapsLk, CapsWord, PrintScreen; Menu, SysRq; SysPause; combined with Super or Tab keys (see diagrams below).
   5-HW CONTROLS under [L2+L3]: Media,internal screen brightness,LED controls; Macro record and playback on bottom left and right corners.
   1-toggled MOVEMENT-only layer under [L2+L3+bkspc].
   6-BOOTLOADER key hidden under [L2+L3+esc] then [bkspc].
   ***
   * Changes I make in OS custom kb layout: SHIFTED number row,tilde,grave,dash,underscore;  AltGr + aeiouyn!? > áéíóúüñ¡¿ for Spanish.

   Commented-out section above each layer's keymap visualizes the keycodes more clearly.
   Tactile reference keys -F, J, Alts- marked with { }; other arrow key positions -HJKL, ESDF- marked with ( ) for visualization. 
   The Keys activating the corresponding layer marked with [ ] where applicable in each section.
   Spaces around the keycodes don't have any effect; I added them for readability and to match the shape of the keyboard visually.

   File usage:
   * I am currently using an old version of QMK that works with these files from a couple of years ago;
     the newest version of QMK requires changes that I haven't had time to research and correct yet.
   You can change your keycodes to your liking; see documentation at [ qmk.fm ].
   When flashing you will see error info for debugging if something breaks.
   Command for flashing in QMK after adding this whole keyboard directory to "qmk_firmware/keyboards/":
   [in Linux terminal after "cd qmk_firmware"]: sudo make dz_planck47/ga_planck2mini:ga_planck2mini_vim:dfu
   [with QMK MSYS in Windows]:  qmk flash -kb dz_planck47/ga_planck2mini -km ga_planck2mini_vim

*/
/* *** *** *** *** *** *** *** *** *** */
/* Layer 0 - base:
fingers:   (pinky     pinky    ring       middle   index    index          index   index   middle       ring    pinky    pinky)

            Esc     ,   Q    ,   W    ,   ( E )  ,   R    ,   T    ,       Y    ,   U    ,   I    ,     O    ,   P    ,   Bkspc,
            Tab     ,   A    , ( S )  ,   ( D )  , { F }  ,   G    ,     ( H )  , { J }  , ( K )  ,   ( L )  ,   ;    ,   Enter,
	    LShift  ,   Z    ,   X    ,     C    ,   V    ,   B    ,       N    ,   M    ,   ,    ,     .    ,   /    ,  RShift,
	    LControl,  Super , Layer1 ,  {L Alt} , Layer2 ,        Space ,       Layer3  ,{R Alt} ,  Layer1  , Super  ,RControl.

fingers:   (pinky     pinky    thumb      thumb    thumb           thumb           thumb    thumb        thumb   pinky   pinky) */
	KEYMAP(
		KC_ESC,    KC_Q,  KC_W,       KC_E,  KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,        KC_O,   KC_P, KC_BSPC,
		KC_TAB,    KC_A,  KC_S,       KC_D,  KC_F,   KC_G,           KC_H,   KC_J,   KC_K,        KC_L,   KC_SCLN, KC_ENT,
		KC_LSFT,   KC_Z,  KC_X,       KC_C,  KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,     KC_DOT, KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, MO(1),      KC_LALT, MO(2),        KC_SPC,        MO(3),   KC_RALT,     MO(1),  KC_LGUI, KC_RCTL),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 1 (Fn keys outside of Alts) - numberpad on left (+inside function keys to toggle), F keys on right:

            ____    ,scrollUp,  pad 7 ,   (pad 8),  pad 9 ,   /    ,      pad * ,   F9   ,   F10  ,    F11   ,   F12  ,     Esc,
            ____    ,scrollDn, (pad 4),   (pad 5), {pad 6}, _undscr,     ( + )  ,  {F5}  ,  (F6)  ,   (F7)   ,   F8   ,     Tab,
            ____    ,  pad 0 ,  pad 1 ,    pad 2 ,  pad 3 ,   ,    ,       .    ,   F1   ,   F2   ,    F3    ,   F4   ,    ____,
            ____    ,PadEnter, [____] ,   {____} ,  ____  ,         ____ ,         ____  , {____} ,   [____] ,SysPause,    ____.*/
	KEYMAP(
		_______, KC_WH_U, KC_P7,      KC_P8, KC_P9, KC_SLSH,         KC_PAST,  KC_F9,  KC_F10,    KC_F11, KC_F12, KC_ESC,
		_______, KC_WH_D, KC_P4,      KC_P5, KC_P6, KC_UNDS,         KC_PLUS,  KC_F5,  KC_F6,     KC_F7, KC_F8, KC_TAB,
		_______, KC_P0,   KC_P1,      KC_P2, KC_P3, KC_COMM,         KC_DOT,   KC_F1,  KC_F2,     KC_F3, KC_F4, _______,
		_______, KC_PENT, _______,    _______, _______,       _______,       _______, _______,    _______, KC_PAUS, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 2 (inside left of space) - symbols/numbers (*SHIFTED BY OS IN MY SETUP: top row,TILDE,GRV,DASH,UNDS);left hand controls:

            Bkspc   , Delete  ,  pageUp ,   home  ,   end   , pageDn ,        6*  ,    7*  ,   8*   ,     9*   ,    0*   ,   ____,
            Enter   ,ScrollLock, (left), (  up  ),  {down} , (right),      (`grave*),{_und* },( = ) ,   ( [brc),     ]brc,   ____,
	    ____    ,  ____   , Lscroll,scroll Up, scrollDn,Rscroll ,       |pipe,   -dash*, ~tilde*,     'quot,  \backsl,   ____,
	    ____    , SysReq  ,ToggleL1,  {____}  , [____] ,        ____  ,        Layer 4, {____} ,  ToggleL1, app/menu,   ____.*/
	KEYMAP(
		KC_BSPC, KC_DEL,  KC_PGUP,   KC_HOME,  KC_END,  KC_PGDN,        KC_6,    KC_7,     KC_8,      KC_9,   KC_0,   _______,
		KC_ENT,  KC_SLCK,  KC_LEFT,     KC_UP, KC_DOWN,  KC_RGHT,        KC_GRV,  KC_UNDS, KC_EQL,    KC_LBRC, KC_RBRC, _______,
		_______, _______, KC_WH_L,    KC_WH_U, KC_WH_D, KC_WH_R,        KC_PIPE, KC_MINS, KC_TILD,    KC_QUOT, KC_BSLS, _______,
		_______, KC_SYSREQ, TG(1),    _______, _______,        _______,          MO(4), _______,     TG(1), KC_APP, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 3 (inside right of space) - navigation keys:

<<<<<<< HEAD
            ____    ,    1*   ,    2*  ,   3*   ,    4*   ,   5*   ,      pageUp  ,   end  ,  home  ,    pageDn,  Insert ,  delete,
            Capslock,  ____  ,(Lclick),(mouse U),{Rclick }, (____) ,       (left) , {down} , ( up  ) ,   (right),ScrollLock,  ____,
	    ____    ,  ____  , mouseL , mouse D , mouse R ,  ____  ,      Lscroll ,scrollDn,scrollUp,   Rscroll,  NumLock ,   ____,
	    ____    ,printScrn,ToggleL1,  {____}  , Layer 4,        ____  ,          [____] , {____} ,  ToggleL1, CAPSWRD,   ____.*/
	KEYMAP(
		_______,    KC_1,   KC_2,     KC_3,     KC_4,    KC_5,          KC_PGUP, KC_END, KC_HOME,   KC_PGDN, KC_INS , KC_DEL,
		KC_CAPS, _______, KC_BTN1,    KC_MS_U, KC_BTN2, _______,        KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, KC_SLCK, _______,
		_______, _______, KC_MS_L,    KC_MS_D, KC_MS_R, _______,        KC_WH_L, KC_WH_D, KC_WH_U,  KC_WH_R, KC_NLCK, _______,
		_______, KC_PSCR, TG(1),      _______, MO(4),          _______,          _______, _______,    TG(1), CAPSWRD, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 4 (holding both inside func keys) - macros, LED, laptop display brightness, media (rwd/ff only some players), toggle mvmt:

            Layer 6 ,  ____   ,RGB hue-,(RGBbri+), RGB hue+,RGBplain,     ____   ,play/paus,   ____ ,  ____   ,    ____ , Toggle 5,
            ____    ,  ____   ,(RGBsat-),(RGBbri-),{RBGsat+},RGBon/off,  (mdiaRwd),{scnBri-},(scnBri+),(mdiaFF),   ____ ,    ____,
            recMacro1, ____   , playMcr1,Calculator, RGB:mode,RGBswirl,       mute  , volume-,   volume+, plyMacro2, ____ , recMcr2,
            ____    ,  ____   , ____   ,  {____} , [____]  ,        ____  ,        [____] ,    {____} ,  ____  ,   ___  ,  ____.*/
	KEYMAP(
		MO(6),   _______, RGB_HUD,    RGB_VAI, RGB_HUI, RGB_M_P,      _______, KC_MPLY, _______,    _______, _______, _______,
		_______, _______, RGB_SAD,    RGB_VAD, RGB_SAI, RGB_TOG,      KC_MRWD, KC_BRID, KC_BRIU,    KC_MFFD, _______, _______,
		DM_REC1, _______, DM_PLY1,    KC_CALC, RGB_MOD, RGB_M_SW,     KC_MUTE, KC_VOLD, KC_VOLU,    DM_PLY2, _______, DM_REC2,
		_______, _______, _______,    _______, _______,         TG(5),        _______, _______,    _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Toggled movement-only Layer 5 for navigating a document using only one finger, on either side of the keyboard:
              ____    ,  ____   , pageUp , ( home ),   end   , pageDn ,     pageUp ,    end  ,  home  ,pageDown,  ____   ,[[____]],
              ____    ,ScrollLock,(left) ,  ( up ) , {down}  ,  right,     (left)  , {down} , ( up ) ,   (right) ,ScrollLock, ____,
	      ____    ,  ____   ,LftScroll, UpScroll,DnScroll, RtScroll,    LftScroll, DwnScroll,UpScroll, RtScroll, ____  ,  ____,
	      ____    ,  ____   , ____   ,  {____} ,[[____]] ,        ____  ,       [[____]], {____} ,    ____  ,  ____  ,    ____.
*/
	KEYMAP(
		_______, _______, KC_PGUP,    KC_HOME, KC_END,  KC_PGDN,        KC_PGUP, KC_END, KC_HOME,    KC_PGDN, _______, _______,
		_______, KC_SLCK, KC_LEFT,     KC_UP,  KC_DOWN,  KC_RGHT,       KC_LEFT, KC_DOWN,  KC_UP,     KC_RGHT,  KC_SLCK, _______,
		_______, _______, KC_WH_L,    KC_WH_U, KC_WH_D, KC_WH_R,        KC_WH_L, KC_WH_D, KC_WH_U,    KC_WH_R, _______, _______,
		_______, _______, _______,    _______, _______,        _______,         _______, _______,    _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Bootloader key hidden in Layer 6 - two inside fn keys + two upper corner keys (esc,bkspc) to avoid pressing accidentally:
             [____]  ,  ____   ,  ____  ,  (____) ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____   , ____   ,  RESET,
             ____    ,  ____   , (____) ,  (____) , {____}  ,  ____  ,    (____)  , {____} , (____) ,   (____) ,  ____   ,   ____,
	     ____    ,  ____   , ____   ,   ____  ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____  ,  ____   ,   ____,
	     ____    ,  ____   , ____   ,  {____} , [____]  ,        ____  ,        [____] , {____} ,    ____  ,  ____  ,    ____.
*/
	KEYMAP(
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______,   RESET,
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______, _______,
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______, _______,
		_______, _______, _______,    _______, _______,        _______,         _______, _______,    _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Template empty layer:
              ____    ,  ____   ,  ____  ,  (____) ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____   , ____   ,   ____,
              ____    ,  ____   , (____) ,  (____) , {____}  ,  ____  ,    (____)  , {____} , (____) ,   (____) ,  ____   ,   ____,
	      ____    ,  ____   , ____   ,   ____  ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____  ,  ____   ,   ____,
	      ____    ,  ____   , ____   ,  {____} ,  ____   ,        ____  ,         ____  , {____} ,    ____  ,  ____  ,    ____.
*/
	KEYMAP(
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______, _______,
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______, _______,
		_______, _______, _______,    _______, _______, _______,        _______, _______, _______,    _______, _______, _______,
		_______, _______, _______,    _______, _______,        _______,         _______, _______,    _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */


};
