#include "ga_planck2mini.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* A normie-friendly 40% Planck layout for productivity, based on standard Qwerty and Ducky one2mini, by G.:
   Shift,Control,Alt,Win/Super on both sides; arrows,home/end,pgUp/Dn on home row; numberpad, F-keys, mouse and media controls;
   One-hand scroll,Enter,Backspace,Delete,Tab,Esc accessible with either hand.
   Thanks to Jack Humbert and the QMK people. OLKB keyboards recommended.

   Spaces around the keycodes don't have any effect; I added them for readability and to match the shape of the keyboard.
   Commented-out section above each layer's keymap explains the keycodes more clearly.
   Point-of-reference keys marked with [], F and J marked with (), layer-activating keys marked with {} where applicable.

   You can change your keycodes to your liking; see documentation at [ qmk.fm ].
   When flashing you will see error info for debugging if something breaks.
   Command for flashing in QMK after adding this whole keyboard folder to "qmk_firmware/keyboards/":
   [with QMK MSYS in Windows]:  qmk flash -kb dz_planck47/ga_planck2mini -km ga_planck2mini
   [in Linux terminal after "cd qmk_firmware"]: sudo make dz_planck47/ga_planck2mini:ga_planck2mini:dfu
*/
/* *** *** *** *** *** *** *** *** *** */
/* Layer 0 - base:
  (pinky     pinky    ring       middle   index    index          index   index   middle       ring    pinky    pinky)

   Esc     ,   Q    ,   W    ,   [ E ]  ,   R    ,   T    ,       Y    ,   U    , [ I ]  ,     O    ,   P    ,   Bkspc,
   Tab     ,   A    , [ S ]  ,   [ D ]  , ( F )  ,   G    ,       H    , ( J )  , [ K ]  ,   [ L ]  ,   ;    ,   Enter,
	 LShift  ,   Z    ,   X    ,     C    ,   V    ,   B    ,       N    ,   M    ,   ,    ,     .    ,   /    ,  RShift,
	 LControl,  Super , Layer1 ,  [L Alt] , Layer2 ,        Space ,       Layer3  ,[R Alt] ,  Layer1  , Super  ,RControl.

  (pinky     pinky    thumb      thumb    thumb           thumb           thumb    thumb        thumb   pinky   pinky) */
	KEYMAP(
		KC_ESC,    KC_Q,  KC_W,       KC_E,  KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,        KC_O,   KC_P, KC_BSPC,
		KC_TAB,    KC_A,  KC_S,       KC_D,  KC_F,   KC_G,           KC_H,   KC_J,   KC_K,        KC_L,   KC_SCLN, KC_ENT,
		KC_LSFT,   KC_Z,  KC_X,       KC_C,  KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,     KC_DOT, KC_SLSH, KC_RSFT,
		KC_LCTL, KC_LGUI, MO(1),      KC_LALT, MO(2),        KC_SPC,        MO(3),   KC_RALT,     MO(1),  KC_LGUI, KC_RCTL),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer1  (Fn keys outside of Alts) - numberpad on left (+inside function keys to toggle), F keys on right:

   ____    ,scrollUp,  pad 7 ,   [pad 8],  pad 9 ,   /    ,      pad * ,   F9   ,  [F10] ,    F11   ,   F12  ,     Esc,
   ____    ,scrollDn, [pad 4],   [pad 5], (pad 6), _undscr,       +    ,  (F5)  ,  [F6]  ,   [F7]   ,   F8   ,     Tab,
   ____    ,  pad 0 ,  pad 1 ,    pad 2 ,  pad 3 ,   ,    ,       .    ,   F1   ,   F2   ,    F3    ,   F4   ,    ____,
   ____    ,PadEnter, {____} ,   [____] ,  ____  ,         ____ ,         ____  , [____] ,   {____} ,SysPause,    ____.*/
	KEYMAP(
		KC_TRNS, KC_WH_U, KC_P7,      KC_P8, KC_P9, KC_SLSH,         KC_PAST,  KC_F9,  KC_F10,    KC_F11, KC_F12, KC_ESC,
		KC_TRNS, KC_WH_D, KC_P4,      KC_P5, KC_P6, KC_UNDS,         KC_PLUS,  KC_F5,  KC_F6,     KC_F7, KC_F8, KC_TAB,
		KC_TRNS, KC_P0,   KC_P1,      KC_P2, KC_P3, KC_COMM,         KC_DOT,   KC_F1,  KC_F2,     KC_F3, KC_F4, KC_TRNS,
		KC_TRNS, KC_PENT, KC_TRNS,    KC_TRNS, KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS, KC_PAUS, KC_TRNS),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 2 (inside left of space) - symbols/numbers (most are shifted by OS in my setup) and left hand controls:

   Bkspc   ,    1    ,    2   ,  [  3 ] ,    4    ,    5   ,       6    ,    7   ,  [ 8 ] ,      9   ,    0    ,   ____,
   Enter   , Delete  , [____] ,[Lscroll],(Rscroll),  ____  ,       ~grv    ,(_und ),[ = ] ,   [ [brc],     ]brc,   ____,
	 ____    , Lscroll , Rscroll,scroll Up, scrollDn,  ____  ,       |pipe,    -dash, `tild ,     'quot,  \backsl,   ____,
	 ____    , SysReq  ,ToggleL1,  [____]  , {____} ,        ____  ,        Layer 4, [____] ,  ToggleL1, Capslock,CAPSWRD.*/
	KEYMAP(
		KC_BSPC,    KC_1,   KC_2,     KC_3,     KC_4,    KC_5,          KC_6,    KC_7,     KC_8,      KC_9,   KC_0,   KC_TRNS,
		KC_ENT,  KC_DEL,  KC_TRNS,    KC_WH_L, KC_WH_R, KC_TRNS,        KC_GRV,  KC_UNDS, KC_EQL,    KC_LBRC, KC_RBRC, KC_TRNS,
		KC_TRNS, KC_WH_L, KC_WH_R,    KC_WH_U, KC_WH_D, KC_TRNS,        KC_PIPE, KC_MINS, KC_TILD,    KC_QUOT, KC_BSLS, KC_TRNS,
		KC_TRNS, KC_SYSREQ, TG(1),    KC_TRNS, KC_TRNS,        KC_TRNS,          MO(4), KC_TRNS,     TG(1), KC_CAPS, CAPSWRD),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 3 (inside right of space) - navigation keys:

   ____    ,scrollUp , Lclick ,[mouse U], Rclick  ,  ____  ,    insert  , pageUp , [ up ] ,  pageDown,  Home   , delete,
   ____    ,scrollDn ,[mouseL],[mouse D],(mouse R),  ____  ,   scrllLock, (left) , [down] ,   [right],   End   ,   ____,
	 ____    , Lscroll , Rscroll,Calculator, ____   ,  ____  ,    numLock ,scrollDn,scrollUp,   Lscroll,  Rscroll,   ____,
	 ____    ,printScrn,ToggleL1,  [____]  , Layer 4,        ____  ,        {____} , [____] ,  ToggleL1, app/menu,   ____.*/
	KEYMAP(
		KC_TRNS, KC_WH_U, KC_BTN1,    KC_MS_U, KC_BTN2, KC_TRNS,        KC_INS,  KC_PGUP, KC_UP,      KC_PGDN, KC_HOME, KC_DEL,
		KC_TRNS, KC_WH_D, KC_MS_L,    KC_MS_D, KC_MS_R, KC_TRNS,        KC_SLCK, KC_LEFT, KC_DOWN,    KC_RGHT, KC_END, KC_TRNS,
		KC_TRNS, KC_WH_L, KC_WH_R,    KC_CALC, KC_TRNS, KC_TRNS,        KC_NLCK, KC_WH_D, KC_WH_U,    KC_WH_L, KC_WH_R, KC_TRNS,
		KC_TRNS, KC_PSCR, TG(1),      KC_TRNS, MO(4),          KC_TRNS,          KC_TRNS, KC_TRNS,    TG(1), KC_APP, KC_TRNS),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Layer 4 (holding both inside func keys) - macros, LED, laptop display brightness, media (rwd/ff may not work):

    Layer 5 ,  ____   ,RGB hue-,[RGBbri+], RGB hue+,RGBplain,     ____   ,play/paus,[scnBri+],  ____   , ____   ,   ____,
    ____    ,  ____   ,[RGBsat-],[RGBbri-],(RBGsat+),RGBon/off,   ____   ,(mdiaRwd),[scnBri-],[mdiaFF],  ____   ,   ____,
    recMacro1,playMcr1, ____   ,   ____  , RGB:mode,RGBswirl,     ____   ,  mute  , volume-,   volume+,recMacro2,plyMcr2,
    ____    ,  ____   , ____   ,  [____] , {____}  ,        ____  ,        {____} , [____] ,    ____  ,  ____  ,    ____.*/
	KEYMAP(
		MO(5),   KC_TRNS, RGB_HUD,    RGB_VAI, RGB_HUI, RGB_M_P,      KC_TRNS, KC_MPLY, KC_BRIU,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, RGB_SAD,    RGB_VAD, RGB_SAI, RGB_TOG,      KC_TRNS, KC_MRWD, KC_BRID,    KC_MFFD, KC_TRNS, KC_TRNS,
		DM_REC1, DM_PLY1, KC_TRNS,    KC_TRNS, RGB_MOD, RGB_M_SW,     KC_TRNS, KC_MUTE, KC_VOLD,    KC_VOLU, DM_PLY2, DM_REC2,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,        KC_TRNS,        KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Bootloader key hidden in Layer 5 - two inside fn keys + two upper corner keys (esc,bkspc) to avoid pressing accidentally:
   {____}  ,  ____   ,  ____  ,  [____] ,  ____   ,  ____  ,     ____   ,  ____  , [____] ,    ____   , ____   ,  RESET,
   ____    ,  ____   , [____] ,  [____] , (____)  ,  ____  ,     ____   , (____) , [____] ,   [____] ,  ____   ,   ____,
	 ____    ,  ____   , ____   ,   ____  ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____  ,  ____   ,   ____,
	 ____    ,  ____   , ____   ,  [____] , {____}  ,        ____  ,        {____} , [____] ,    ____  ,  ____  ,    ____.
*/
	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,   RESET,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,        KC_TRNS,         KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Template empty layer:
   ____    ,  ____   ,  ____  ,  [____] ,  ____   ,  ____  ,     ____   ,  ____  , [____] ,    ____   , ____   ,   ____,
   ____    ,  ____   , [____] ,  [____] , (____)  ,  ____  ,     ____   , (____) , [____] ,   [____] ,  ____   ,   ____,
	 ____    ,  ____   , ____   ,   ____  ,  ____   ,  ____  ,     ____   ,  ____  ,  ____  ,    ____  ,  ____   ,   ____,
	 ____    ,  ____   , ____   ,  [____] ,  ____   ,        ____  ,         ____  , [____] ,    ____  ,  ____  ,    ____.
*/
	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,        KC_TRNS,         KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS),
/* *** *** *** *** *** *** *** *** *** */



};
