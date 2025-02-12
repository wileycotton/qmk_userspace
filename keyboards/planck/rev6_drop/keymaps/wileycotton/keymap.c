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
     * │  Esc  │  Ctrl │  Alt  │  Cmd  │  Fn3  │ Space │ Bkspc │  Fn4  │  Cmd  │  Alt  │ Ctrl  │  Fn5  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_ESC,  KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_BSPC, MO(2),   KC_RGUI, KC_LALT, KC_RCTL, MO(3)
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [1] = LAYOUT(
    /* [3] Number and Navigation Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   =   │   7   │   8   │   9   │  ---  │ HOME  │ WH_D  │ WH_U  │  END  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   -   │   4   │   5   │   6   │  ---  │ LEFT  │  UP   │ DOWN  │ RIGHT │ Enter │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   0   │   1   │   2   │   3   │  ---  │Alt←Lft│   -   │  ---  │Alt→Rgt│  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  Del  │  ---  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_TRNS, KC_HOME, MS_WHLD, MS_WHLU, KC_END,  KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_MINS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_ENT,  KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_0,    KC_1,    KC_2,    KC_3,    KC_TRNS, LALT(KC_LEFT), KC_MINS, KC_TRNS, LALT(KC_RGHT), KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [2] = LAYOUT(
    /* [4] Symbol Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   =   │   &   │   *   │   (   │   )   │  ---  │   <   │   >   │   \   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   -   │   $   │   %   │   ^   │  ---  │  ---  │   [   │   ]   │   |   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │   0   │   !   │   @   │   #   │  ---  │  ---  │   {   │   }   │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_EQL,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_LT,   KC_GT,   KC_BSLS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_MINS, KC_DLR,  KC_PERC, KC_CIRC, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_PIPE, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_0,    KC_EXLM, KC_AT,   KC_HASH, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   ),
   [3] = LAYOUT(
    /* [5] Function and Media Layer
     * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │ Next  │  F7   │  F8   │  F9   │  F14  │  F15  │  P7   │  P8   │  P9   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │ Play  │  F4   │  F5   │  F6   │  F12  │  F13  │  P4   │  P5   │  P6   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │  ---  │ Prev  │  F1   │  F2   │  F3   │  F10  │  F11  │  P1   │  P2   │  P3   │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * │ Reset │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │  ---  │
     * │       │       │       │       │       │       │       │       │       │       │       │       │
     * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘ */
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_MNXT, KC_F7,   KC_F8,   KC_F9,   KC_F14,  KC_F15,  KC_P7,   KC_P8,   KC_P9,   KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_MPLY, KC_F4,   KC_F5,   KC_F6,   KC_F12,  KC_F13,  KC_P4,   KC_P5,   KC_P6,   KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       KC_TRNS, KC_MPRV, KC_F1,   KC_F2,   KC_F3,   KC_F10,  KC_F11,  KC_P1,   KC_P2,   KC_P3,   KC_TRNS, KC_TRNS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    //│        │        │        │        │        │        │        │        │        │        │        │        │
       QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    //└────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
   )
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


// --- TAP HOLD --- //

// Tap Dance declarations
enum {
    BSP_OPT,
};

tap_dance_tap_hold_t tap_dance_actions[] = {
   // [CT_CLN] = ACTION_TAP_DANCE_TAP_HOLD(KC_COLN, KC_SCLN),
   [BSP_OPT] = ACTION_TAP_DANCE_TAP_HOLD(KC_BSPC, LALT(KC_BSPC)),
};

// Add tap dance item to your keymap in place of a keycode
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // ...
    TD(TD_ESC_CAPS)
    // ...
};

typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    tap_dance_action_t *action;

    switch (keycode) {
        case TD(CT_CLN):  // list all tap dance keycodes with tap-hold configurations
            action = &tap_dance_actions[QK_TAP_DANCE_GET_INDEX(keycode)];
            if (!record->event.pressed && action->state.count && !action->state.finished) {
                tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
                tap_code16(tap_hold->tap);
            }
    }
    return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }