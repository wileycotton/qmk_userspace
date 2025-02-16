#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT(
    /* 
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  `    │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │ Enter │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  Tab  │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │ Shift │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  Esc  │  Ctrl │  Alt  │  Cmd  │  RSE  │ Space │ Bkspc │  LWR  │  Cmd  │  Alt  │ Ctrl  │  FN   │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│   `    │   q    │   w    │   e    │    r   │   t    │   y    │   u    │   i    │   o    │   p    │  rtn   │
       KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  tab   │   a    │   s    │   d    │   f    │   g    │   h    │   j    │  k     │   l    │   ;    │    "   │
       LCTL_T(KC_TAB), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  shft  │   z    │   x    │   c    │   v    │   b    │   n    │   m    │   ,    │    .   │   /    │  shft  │
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  esc   │  ctl   │   alt  │  cmd   │  rse   │        │  bspc  │  lwr   │  cmd   │  alt   │  ctl   │   fn   │
       KC_ESC,  KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_BSPC, MO(2),   KC_RGUI, KC_LALT, KC_RCTL, MO(3)
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [1] = LAYOUT(
    /* [1] Number and Navigation Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │ Enter │
     * │  ---  │   1   │   2   │   3   │   4   │   5   │   6   │   7   │   8   │   9   │   0   │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Tab  │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │
     * │  ---  │  ---  │ Home  │ PgDn  │ PgUp  │  End  │ Left  │  Up   │ Down  │ Right │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │ Shift │
     * │  ---  │  ---  │  ---  │ WH_U  │ WH_D  │  ---  │  ---  │   -   │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Esc  │ Ctrl  │  Alt  │  Cmd  │  RSE  │ Space │ Bkspc │  LWR  │  Cmd  │  Alt  │ Ctrl  │  FN   │
     * │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │Alt+Bsp│  Alt  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│   `    │   q    │   w    │   e    │    r   │   t    │   y    │   u    │   i    │   o    │   p    │  rtn   │
       _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  tab   │   a    │   s    │   d    │   f    │   g    │   h    │   j    │  k     │   l    │   ;    │    "   │
       _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  shft  │   z    │   x    │   c    │   v    │   b    │   n    │   m    │   ,    │    .   │   /    │  shft  │
       _______, _______, _______, MS_WHLU, MS_WHLD, _______, KC_EQL,  KC_MINS, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  esc   │  ctl   │   alt  │  cmd   │  rse   │        │  bspc  │  lwr   │  cmd   │  alt   │  ctl   │   fn   │
       _______, _______, _______, _______, _______, _______, LALT(KC_BSPC),KC_LALT, _______, _______, _______, _______
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [2] = LAYOUT(
    /* [2] Symbol Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │ Enter │
     * │  ---  │   !   │   @   │   #   │   $   │   %   │   ^   │   &   │   *   │   (   │   )   │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Tab  │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │
     * │  ---  │  ---  │   <   │   >   │   [   │   ]   │   {   │   }   │   \   │   |   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │ Shift │
     * │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │   =   │   -   │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Esc  │ Ctrl  │  Alt  │  Cmd  │  RSE  │ Space │ Bkspc │  LWR  │  Cmd  │  Alt  │ Ctrl  │  FN   │
     * │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  DEL  │  ---  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│   `    │   q    │   w    │   e    │    r   │   t    │   y    │   u    │   i    │   o    │   p    │  rtn   │
       _______, KC_EXLM,  KC_AT,  KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  tab   │   a    │   s    │   d    │   f    │   g    │   h    │   j    │  k     │   l    │   ;    │    "   │
       _______, _______, KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_BSLS, KC_PIPE, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  shft  │   z    │   x    │   c    │   v    │   b    │   n    │   m    │   ,    │    .   │   /    │  shft  │
       _______, _______, _______, _______, _______, _______, KC_EQL,  KC_MINS, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  esc   │  ctl   │   alt  │  cmd   │  rse   │        │  bspc  │  lwr   │  cmd   │  alt   │  ctl   │   fn   │
       _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [3] = LAYOUT(
    /* [3] Function and Media Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │ Enter │
     * │  ---  │  F1   │  F2   │  F3   │  F4   │  F5   │  F6   │  F7   │  F8   │  F9   │  F10  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Tab  │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │
     * │  ---  │  F11  │  F12  │  F13  │  F14  │  F15  │  F16  │  F17  │  F18  │  F19  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │ Shift │
     * │  ---  │  P1   │  P2   │  P3   │  P4   │  P5   │  P6   │  P7   │  P8   │  P9   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │  Esc  │ Ctrl  │  Alt  │  Cmd  │  RSE  │ Space │ Bkspc │  LWR  │  Cmd  │  Alt  │ Ctrl  │  FN   │
     * │ Reset │  ---  │  ---  │  ---  │ Prev  │ Play  │ Next  │  ---  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│   `    │   q    │   w    │   e    │    r   │   t    │   y    │   u    │   i    │   o    │   p    │  rtn   │
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  tab   │   a    │   s    │   d    │   f    │   g    │   h    │   j    │  k     │   l    │   ;    │    "   │
       _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  shft  │   z    │   x    │   c    │   v    │   b    │   n    │   m    │   ,    │    .   │   /    │  shft  │
       _______, KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│  esc   │  ctl   │   alt  │  cmd   │  rse   │        │  bspc  │  lwr   │  cmd   │  alt   │  ctl   │   fn   │
       QK_BOOT, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
