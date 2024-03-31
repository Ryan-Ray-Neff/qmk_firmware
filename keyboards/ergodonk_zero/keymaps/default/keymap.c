// Copyright 2024 Ryan Neff (@JellyTitan)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// @todo check HF buttons. LH Encoder button is duplicate of mute. MO(1)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_split_6x9_6(
               //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐          ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
                 KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL ,
                 KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    HF_RST,  KC_VOLU,            KC_PSCR, KC_INS,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL ,KC_BSPC,
                 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    HF_DWLU, KC_VOLD,            KC_SCRL, KC_DEL,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,KC_BSLS,
                 KC_CAPS,LT(1,KC_A),KC_S,   KC_D,    KC_F,    KC_G,    HF_DWLD, KC_MUTE,            KC_PAUS, KC_5,    KC_H,    KC_J,    KC_K,    KC_L,LT(1,KC_SCLN),KC_QUOT,KC_ENT,
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    HF_TOGG, KC_HOME,            KC_PGUP, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT, KC_SPC,  KC_BSPC, KC_END,                               KC_PGDN,  KC_TAB, KC_ENT,  KC_UP,   KC_DOWN, KC_NO,   KC_RGUI, KC_RCTL,
                                            QK_GESC,                   KC_ENT,                               KC_6,                      KC_DEL
    ),
    [1] = LAYOUT_split_6x9_6(
                 QK_BOOT, QK_MAKE, QK_RBT,  _______, _______, _______, _______,                              _______, _______, _______, _______, _______, _______, _______,
                 _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,            _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, _______,
                 _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, _______, _______,            _______, _______, DT_UP,   KC_7,    KC_8,    KC_9,    KC_PAST, _______, _______, _______,
                 _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,  _______, _______,            _______, _______, DT_DOWN, KC_4,    KC_5,    KC_6,    KC_PPLS, _______, _______,
                 _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______, _______,            _______, _______, KC_AMPR, KC_1,    KC_2,    KC_3,    KC_PSLS, _______,
        _______, _______, KC_PEQL, _______, _______, _______, _______, _______,                              _______, _______, _______, KC_DOT,  KC_0,    KC_PEQL, _______, _______,
                                            _______,                   _______,                              _______,                   KC_0
    ),
    // clang-format on
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [1] = {ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)}
};
#endif
