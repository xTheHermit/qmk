// Copyright 2026 Tejaswi Hegde (@xTheHermit)

#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/*
    0 - Gallium
    1 - Qwerty
    2 - NAV + SYM
    3 - SYS
    4 - Gaming
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_B, KC_L, KC_D, KC_C, KC_V, KC_J, KC_F, KC_O, KC_U, KC_SCLN, KC_MINS, KC_ESC, LGUI_T(KC_N), LALT_T(KC_R), LCTL_T(KC_T), LSFT_T(KC_S), KC_G, KC_Y, LSFT_T(KC_H), LCTL_T(KC_A), LALT_T(KC_E), LGUI_T(KC_I), KC_QUOT, LSFT_T(KC_LPRN), KC_X, KC_Q, KC_M, KC_W, KC_Z, KC_LGUI, KC_LALT, KC_K, KC_P, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_RPRN), MO(2), KC_BSPC, KC_ENT, KC_LCTL, KC_SPC, TT(3)),
    [1] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LGUI, KC_LALT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(2), KC_BSPC, KC_ENT, KC_LCTL, KC_SPC, TT(3)),
    [2] = LAYOUT(KC_NO, DF(0), DF(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_CAPS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EE_CLR, KC_NUBS, KC_LBRC, KC_RBRC, KC_NO, KC_SCLN, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [3] = LAYOUT(KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_NO, MS_BTN2, MS_UP, MS_BTN1, LCTL(KC_C), LCTL(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, RM_TOGG, KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, LCTL(KC_X), RM_NEXT, RM_HUEU, RM_SPDU, RM_SATU, RM_VALU, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RM_PREV, RM_HUED, RM_SPDD, RM_SATD, RM_VALD, KC_NO, TG(3), KC_NO, KC_NO, KC_NO, TO(4), KC_TRNS),
    [4] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_SPC, KC_Y, TG(4), KC_TRNS, KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN); // Send KC_LPRN on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RSFT_T(KC_RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN); // Send KC_RPRN on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

