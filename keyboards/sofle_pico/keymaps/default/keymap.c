// Copyright 2024 Ryan Neff (@JellyTitan)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
        /*
        * QWERTY
        * ,-----------------------------------------.                    ,-----------------------------------------.
        * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
        * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
        * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
        * `-----------------------------------------/       /     \      \-----------------------------------------'
        *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
        *            |      |      |      |      |/       /         \      \ |      |      |      |      |
        *            `----------------------------------'           '------''---------------------------'
        */

        [_QWERTY] = LAYOUT(
        KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
        KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
        KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_MUTE,     XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                        KC_LGUI,KC_LALT,KC_LCTL, MO(_LOWER), KC_ENT,      KC_SPC,  MO(_RAISE), KC_RCTL, KC_RALT, KC_RGUI
        ),
        /* LOWER
        * ,-----------------------------------------.                    ,-----------------------------------------.
        * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
        * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
        * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
        * `-----------------------------------------/       /     \      \-----------------------------------------'
        *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
        *            |      |      |      |      |/       /         \      \ |      |      |      |      |
        *            `----------------------------------'           '------''---------------------------'
        */
        [_LOWER] = LAYOUT(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
        _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______,  KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,       _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
                          _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
        ),
        /* RAISE
        * ,----------------------------------------.                    ,-----------------------------------------.
        * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
        * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
        * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
        * `-----------------------------------------/       /     \      \-----------------------------------------'
        *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
        *            |      |      |      |      |/       /         \      \ |      |      |      |      |
        *            `----------------------------------'           '------''---------------------------'
        */
        [_RAISE] = LAYOUT(
        _______, _______, _______ , _______ , _______ , _______ ,                          _______, _______, _______, _______, _______, _______,
        _______, KC_INS , KC_PSCR , KC_APP  , XXXXXXX , XXXXXXX ,                          KC_PGUP, XXXXXXX, KC_UP  , XXXXXXX, XXXXXXX, KC_BSPC,
        _______, KC_LALT, KC_LCTL , KC_LSFT , XXXXXXX , KC_CAPS ,                          KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL , KC_BSPC,
        _______, KC_UNDO, KC_CUT  , KC_COPY , KC_PASTE, XXXXXXX , _______,        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                          _______ , _______ , _______ , _______ , _______,        _______, _______, _______, _______, _______
        ),
        /* ADJUST
        * ,-----------------------------------------.                    ,-----------------------------------------.
        * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * |QK_BOOT|     |      |      |      |      |                    |      |      |      |      |      |      |
        * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
        * |      |      |MACWIN|      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
        * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
        * |      |      |      |      |      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
        * `-----------------------------------------/       /     \      \-----------------------------------------'
        *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
        *            |      |      |      |      |/       /         \      \ |      |      |      |      |
        *            `----------------------------------'           '------''---------------------------'
        */
        [_ADJUST] = LAYOUT(
        XXXXXXX , XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        QK_BOOT , XXXXXXX, XXXXXXX , XXXXXXX, CG_TOGG, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX , XXXXXXX, CG_TOGG , XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX , XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                            _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
        )
    // clang-format on
};

/* Default timeout for displaying logo on boot. */
#ifndef OLED_LOGO_TIMEOUT
/* 10 second timeout. */
#    define OLED_LOGO_TIMEOUT 10000
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
};
#endif
