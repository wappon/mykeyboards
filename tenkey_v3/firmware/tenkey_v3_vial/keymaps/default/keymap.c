// Copyright 2025 wappon
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

// 行: 0..4, 列: 0..4
// LAYOUT の引数順：
//  row0: 5個  [0,0] [0,1] [0,2] [0,3] [0,4]
//  row1: 4個  [1,0] [1,1] [1,2] [1,3]
//  row2: 4個  [2,0] [2,1] [2,2] [2,3]
//  row3: 4個  [3,0] [3,1] [3,2] [3,3]
//  row4: 4個  [4,0] [4,1] [4,2] [4,3]

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 例：テンキー配列 + 余剰キー(最上段右端)は NumLock
     *
     * ┌───┬───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │Num│  ← row0 は5キー
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * ├───┼───┼───┼───┤
     * │ = │ , │( )│BS │  
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_DEL,   // row0: 5個
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,           // row1
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS,           // row2
        KC_P0,   KC_PDOT, KC_PENT, KC_PPLS,           // row3
        KC_PEQL, KC_PCMM, KC_LPRN, KC_BSPC            // row4
                 
    )
};
