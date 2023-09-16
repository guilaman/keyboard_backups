#include "minila2mini.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Spaces around the keycodes don't have any effect; I added them for readability and to match the shape of the keyboard.
   Commented-out section above each layer's keymap explains the keycodes more clearly.
   Point-of-reference keys marked with [], F and J marked (), layer-activating keys marked with {} where applicable.

   You can change your keycodes to your liking; see documentation at [ qmk.fm ].
   When flashing you will see error info for debugging if something breaks.
   Command for flashing in QMK after adding this whole keyboard folder to "qmk_firmware/keyboards/":
   [with QMK MSYS in Windows]:  qmk flash -kb dz_minila67/minila2mini -km minila2mini
   [in Linux terminal after "cd qmk_firmware"]: sudo make dz_minila67/minila2mini:minila2mini:dfu

   Thanks to Jack Humbert and the QMK people. OLKB keyboards recommended.
*/
/* *** *** *** *** *** *** *** *** *** */
/* LAYER 0 / BASE LAYER:
  (the ESC requires pressing one of the Function keys, this was chosen by the original recipient of this board, you may want to change that;
  you may also want to switch the position of [fn2] and [Win] (if so,remember to change in all layers). I would make these two changes for myself.)

     esc ,      1,      2,        3,          4,        5,      6,         7,            8,      9,      0,            -,      =,      ~,  bkspc,
     tab     ,     Q,      W,      [E],          R,        T,      Y,         U,          [I],      O,      P,            [,      ],       \    ,
     capslock  ,      A,    [S],      [D],        (F),        G,      H,       (J),          [K],    [L],      ;,            ',        enter    ,
     left shift   ,     Z,      X,        C,          V,        B,      N,         M,            ,,      .,      /,  right shift,     up, delete,
     left control,  super/Win, left alt,        [fn2] ,          space           ,    [fn1],      right alt, r ctrl,         left,   down,  right.*/
	KEYMAP(

      KC_ESC,   KC_1,   KC_2,    KC_3,        KC_4,     KC_5,   KC_6,     KC_7,       KC_8,   KC_9,   KC_0,       KC_MINS, KC_EQL, KC_GRV,KC_BSPC,
      KC_TAB  ,  KC_Q,   KC_W,     KC_E,        KC_R,     KC_T,   KC_Y,     KC_U,       KC_I,   KC_O,   KC_P,       KC_LBRC, KC_RBRC,   KC_BSLS  ,
      KC_CAPS   ,   KC_A,   KC_S,    KC_D,        KC_F,     KC_G,   KC_H,     KC_J,       KC_K,   KC_L, KC_SCLN,         KC_QUOT,      KC_ENT    ,
      KC_LSFT     ,   KC_Z,   KC_X,    KC_C,        KC_V,     KC_B,   KC_N,     KC_M,     KC_COMM, KC_DOT, KC_SLSH,      KC_RSFT,  KC_UP,  KC_DEL,
      KC_LCTL    ,     KC_LGUI,  KC_LALT,       MO(2),            KC_SPC       ,    MO(1),        KC_RALT,KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* LAYER 1 / FUNCTION 1 (right of spacebar) - F-keys top row, left side Numberpad, right side Navigation keys:

     ____,     F1,     F2,       F3,         F4,       F5,     F6,        F7,           F8,     F9,    F10,          F11,    F12,   ____, delete,
     ____    ,    = ,      7,      [8],          9,       + ,     * ,   page up,       [up]  ,pagedwn,   home,    scroll lk,sysPause,printscreen,
     CAPSWORD  ,     . ,    [4],      [5],        (6),      -  ,    /  ,    (left),     [down]  ,[right],  end  ,        ____ ,        ____     ,
     record macro 1,    0,      1,        2,          3,     ____,   ____,scroll Down,  scroll Up ,Lscroll,Rscroll,  left click,mouse U,rightclk,
     play macro 1,app/menu,    ____ ,      [layer 3] ,           ____           ,   {____},          ____ ,  ____ ,     mouse L,mouse D,mouse R.*/
  KEYMAP(

      KC_DEL,  KC_F1,  KC_F2,    KC_F3,      KC_F4,    KC_F5,  KC_F6,    KC_F7,      KC_F8,  KC_F9,  KC_F10,      KC_F11 , KC_F12,_______, KC_ESC,
      KC_ENT  ,KC_PEQL, KC_P7 ,    KC_P8 ,     KC_P9 ,  KC_PPLS,KC_PAST,  KC_PGUP,    KC_UP, KC_PGDN,  KC_HOME,     KC_SLCK, KC_PAUS,     _______,
      CAPSWRD   , KC_PDOT, KC_P4 ,   KC_P5 ,     KC_P6 ,  KC_PMNS,KC_PSLS,  KC_LEFT,    KC_DOWN, KC_RGHT,  KC_END,         KC_NLCK,     KC_TAB   ,
      DM_REC1     ,  KC_P0 , KC_P1 ,   KC_P2 ,     KC_P3 ,  _______,_______,  KC_WH_D,     KC_WH_U,KC_WH_L, KC_WH_R,      _______,_______,_______,
      DM_PLY1    ,    KC_APP ,  _______,        MO(3) ,            _______       ,   _______,        _______,_______,     _______,_______,_______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* LAYER 2 / FUNCTION 2 (left side) - RGB LED controls, volume, laptop screen brightness, F-keys top row:

     ____,     F1,     F2,       F3,         F4,       F5,     F6,        F7,           F8,     F9,    F10,          F11,    F12,   ____, delete,
     ____   ,calculator, ____, [scrn bri+],  play/paus,    ____,  ____,   left click,[mouse U],rightclk,   ____,        ____ ,  ____ ,     ____ ,
     CAPSWORD  ,     . ,[volume-],[scrn bri-],(volume+),   ____,  ____ ,  (mouse L), [mouse D],[mouse R], ____  ,        ____ ,        ____     ,
     record macro 2,Lscroll, Rscroll,scrollUp, scrollDn,     ____,   ____,      ____,       ____,   ____,RGB:swirl,    RGB hue-,RGBbri+,RGB hue+,
     play macro 2,  app/menu ,    ____ ,    {____}  ,      RGBLEDs on/off      , [layer 3],   RGB mode,RGB:plain,   RGBwhiter,RBGbri-,RBGsatur+.*/
	KEYMAP(

    KC_BSPC,  KC_F1,  KC_F2,    KC_F3,      KC_F4,    KC_F5,  KC_F6,    KC_F7,      KC_F8,  KC_F9,  KC_F10,      KC_F11 , KC_F12, _______,KC_ESC,
    KC_ENT  ,KC_CALC,_______,   _______,    _______,  _______,_______,  KC_BTN1,  KC_MS_U, KC_BTN2,  _______,     _______, _______,     _______ ,
    CAPSWRD   , _______,_______,  _______,    _______,  _______,_______,  KC_MS_L,    KC_MS_D, KC_MS_R, _______,         _______,      KC_TAB   ,
    DM_REC2     , KC_WH_L,KC_WH_R, KC_WH_U,    KC_WH_D,  _______,_______,  _______,     _______,_______, _______,        _______,_______,_______,
    DM_PLY2    ,  KC_PSCR,  _______,        _______,            _______,       ,   MO(3)  ,        _______,_______,      _______,_______,_______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* LAYER 3 - only to activate layer 4 (on ESC key) where the Bootloader key is hidden:
     layer 4, ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____,   ____,   ____,
     ____    ,  ____,   ____,   [____],       ____,     ____,   ____,      ____,       [____],   ____,   ____,         ____,   ____,    ____    ,
     ____      ,   ____, [____],   [____],     (____),     ____,   ____,    (____),       [____], [____],   ____,         ____,        ____     ,
     ____         ,  ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____ ,  ____ ,
     ____        ,    ____ ,   ____  ,        {____} ,          ____            ,   {____},         ____  , ____ ,         ____,   ____ ,  ____ .*/
	KEYMAP(
    MO(4)  ,_______,_______, _______,     _______,  _______,_______,  _______,    _______,_______,_______,      _______,_______,_______,_______,
    _______ ,_______,RGB_HUD,  RGB_VAI,     RGB_HUI,  _______,_______,  KC_MPLY,    KC_VOLU,_______,_______,      _______, _______,   _______  ,
    _______   , _______,RGB_SAD, RGB_VAD,     RGB_SAI,  _______,_______,  KC_MRWD,    KC_VOLD,KC_MFFD,_______,         _______,      _______   ,
    _______     , _______,RGB_MOD, RGB_M_P,     RGB_M_SW,  _______,_______,  _______,    _______,_______, _______,      _______,KC_BRIU, _______,
    _______    ,  _______,  _______,        _______,            RGB_TOG      ,  _______,        _______,_______,     _______, KC_BRID, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* LAYER 4 - Bootloader key hidden under two bottom row function keys + two top row corners (or fn1+fn2+esc+bkspc):
     {____} , ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____,   ____,  RESET,
     ____    ,  ____,   ____,   [____],       ____,     ____,   ____,      ____,       [____],   ____,   ____,         ____,   ____,    ____    ,
     ____      ,   ____, [____],   [____],     (____),     ____,   ____,    (____),       [____], [____],   ____,         ____,        ____     ,
     ____         ,  ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____ ,  ____ ,
     ____        ,    ____ ,   ____  ,        {____} ,          ____            ,   {____},         ____  , ____ ,         ____,   ____ ,  ____ .*/
KEYMAP(
    _______,_______,_______, _______,     _______,  _______,_______,  _______,    _______,_______,_______,      _______,_______,_______,  RESET,
    _______ ,_______,_______,  _______,     _______,  _______,_______,  _______,    _______,_______,_______,      _______, _______,   _______  ,
    _______   , _______,_______, _______,     _______,  _______,_______,  _______,    _______,_______,_______,         _______,      _______   ,
    _______     , _______,_______, _______,     _______,  _______,_______,  _______,    _______,_______, _______,      _______,_______, _______,
    _______    ,  _______,  _______,        _______,            _______      ,  _______,        _______,_______,     _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */


/* *** *** *** *** *** *** *** *** *** */
/* Template empty layer:
     ____   , ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____,   ____,  ____,
     ____    ,  ____,   ____,   [____],       ____,     ____,   ____,      ____,       [____],   ____,   ____,         ____,   ____,    ____    ,
     ____      ,   ____, [____],   [____],     (____),     ____,   ____,    (____),       [____], [____],   ____,         ____,        ____     ,
     ____         ,  ____,   ____,     ____,       ____,     ____,   ____,      ____,         ____,   ____,   ____,        ____,   ____ ,  ____ ,
     ____        ,    ____ ,   ____  ,        [____] ,          ____            ,   [____],         ____  , ____ ,         ____,   ____ ,  ____ .*/
KEYMAP(
    _______,_______,_______, _______,     _______,  _______,_______,  _______,    _______,_______,_______,      _______,_______,_______,_______,
    _______ ,_______,_______,  _______,     _______,  _______,_______,  _______,    _______,_______,_______,      _______, _______,   _______  ,
    _______   , _______,_______, _______,     _______,  _______,_______,  _______,    _______,_______,_______,         _______,      _______   ,
    _______     , _______,_______, _______,     _______,  _______,_______,  _______,    _______,_______, _______,      _______,_______, _______,
    _______    ,  _______,  _______,        _______,            _______      ,  _______,        _______,_______,     _______, _______, _______),
/* *** *** *** *** *** *** *** *** *** */



};
