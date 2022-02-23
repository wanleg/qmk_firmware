#include QMK_KEYBOARD_H
#include "wanleg.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[gGK] = LAYOUT_60_ansi_wrapper(
 KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC,
 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
 KC_CAPS, KC_A,	   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
 RESET,   RGB_M_R,          RGB_TOG,                   LT(gDIR,KC_SPC),                             KC_RALT, KC_RGUI,  KC_RGUI, KC_RCTL
), 
/*
[gNUM] = LAYOUT_ansi_base_wrapper(
  _______________Gherkin_NUM_0_______________,
  _______________Gherkin_NUM_1_______________,
  _______________Gherkin_NUM_2_______________
),
*/
[gDIR] = LAYOUT_60_ansi_wrapper(
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
 _______, _______________Gherkin_DIR_0_______________, _______, _______, _______, 
 _______, _______________Gherkin_DIR_1_______________, _______, _______, 
 _______, _______________Gherkin_DIR_2_______________, _______, 
 _______, _______, _______, _______, _______, _______, _______, _______
),
/*
[gETC] = LAYOUT_ansi_base_wrapper(
  _______________Gherkin_ETC_0_______________,
  _______________Gherkin_ETC_1_______________,
  _______________Gherkin_ETC_2_______________
),

[_FN] = LAYOUT_ansi_base_wrapper(
  _______________Gherkin_FN_0________________,
  _______________Gherkin_FN_1________________,
  _______________Gherkin_FN_2________________
),
*/
};
