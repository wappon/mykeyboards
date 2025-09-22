// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later


// keymap.c
#include QMK_KEYBOARD_H

/* ┌─── row0 ───────────────────────────────────────────────┐
    * │ ESC Q   W   E   R   T   Y   U   I   O   P   BSPC        │
    * ├─── row1 ───────────────────────────────────────────────┤
    * │ TAB A   S   D   F   G   H   J   K   L   ;   '           │
    * ├─── row2 ───────────────────────────────────────────────┤
    * │ LS  Z   X   C   V   B   N   M   ,   .   /   ENT         │
    * ├─── row3（[3,6] なし、[3,5] は 2u）──────────────────────┤
    * │ CTL GUI ALT FN  DEL [   SPACE(2u)   ] RALT RGUI ←  ↓  →│
    * └─────────────────────────────────────────────────────────┘
    */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // row0 (12)
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
        // row1 (12)
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        // row2 (12)
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        // row3 (11)  
        KC_LCTL, KC_LGUI, KC_LALT, KC_BSPC, KC_LBRC, KC_SPC, /*[3,6]*/ KC_RBRC, KC_RALT, KC_RGUI, KC_LEFT, KC_RGHT
    )
};
