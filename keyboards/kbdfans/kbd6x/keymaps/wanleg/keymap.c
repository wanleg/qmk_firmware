#include QMK_KEYBOARD_H
#include "wanleg.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
[_GK] = LAYOUT_wrapper(
QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC, KC_DEL,
KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    RSFT_T(KC_SCLN),  KC_QUOT, KC_ENT,
KC_LSFT, SFT_T(KC_Z),      KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, ALT_T(KC_DOT),    RCTL_T(KC_BSPC), KC_RSFT, MO(_FN),
KC_LCTL, KC_LGUI, KC_LALT,      LT(ONE,KC_SPC),   KC_RALT, KC_RGUI, KC_RCTL  
),

[_QW] = LAYOUT_wrapper(
QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSPC, KC_DEL,
KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSLS,
KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    RSFT_T(KC_SCLN),  KC_QUOT, KC_ENT,
KC_LSFT, SFT_T(KC_Z),      KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, ALT_T(KC_DOT),    RCTL_T(KC_BSPC), KC_RSFT, MO(_FN),
KC_LCTL, KC_LALT,  KC_LGUI,      LT(ONE,KC_SPC),   KC_RGUI, KC_RALT, KC_RCTL  
),

[ONE] = LAYOUT_wrapper(
KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
KC_SCRL, _______________Gherkin_DIR_0_______________, _______, _______, _______,
KC_NUM,  _______________Gherkin_DIR_1_______________, _______, _______,
_______, _______________Gherkin_DIR_2_______________, _______, RESET,
_______, _______, _______,                  _______,            _______,  _______,  _______
),

[_FN] = LAYOUT_wrapper(
_______, _______, _______, _______, _______, _______,  _______, _______, _______, KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD, KC_VOLD, KC_VOLU, KC_MUTE, KC_MEDIA_PLAY_PAUSE, 
_______, BL_BRTG, BL_DEC,  BL_INC,  BL_TOGG, BL_STEP,  BL_ON,   _______, _______, _______, _______, _______, _______, _______,
_______, RGB_M_B, RGB_VAD, RGB_VAI, RGB_TOG, RGB_MOD,  _______, _______, _______, _______, _______, _______, _______,
_______, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, _______,  _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______,                   _______,                    QWERTY,  GHERKIN, KC_SLEP
),
<<<<<<< HEAD
=======

//mac layout
[_QW] = LAYOUT_wrapper(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(ONE),
	  KC_LCTL, MO(ONE), KC_LGUI,                   KC_SPACE,                   KC_RGUI, KC_RALT, KC_RCTL
      ),

[ONE] = LAYOUT_wrapper(
      KC_GRV,  _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
      _______, BL_BRTG, BL_DEC,  BL_INC,  BL_TOGG, BL_STEP,  BL_ON,   KC_PGUP, KC_HOME, _______, _______, _______, _______, _______,
      _______, RGB_M_B, RGB_VAD, RGB_VAI, RGB_TOG, RGB_MOD,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
      _______, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, _______,  _______, KC_PGDN, KC_END,  _______, gGHERKIN,_______, _______,
	    _______, _______, _______,                   _______,                    _______, _______, _______
      ),
>>>>>>> master
};
