#include QMK_KEYBOARD_H
#include "wanleg.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_GK] = LAYOUT_split_3x6_3_wrapper(
  _______________GherkinLike_0_______________,
  _______________GherkinLike_1_______________,
  _______________GherkinLike_2_______________,
  ONEHAND, NUMBER, ETCETERA, LT(_FN,KC_SPC),DIRECTION, KC_RGUI
),
[ONE] = LAYOUT_split_3x6_3_wrapper(
  _______________Qwerty_Row__0_______________,
  _______________Qwerty_Row__1_______________,
  _______________Qwerty_Row__2_______________,
  GHERKIN, SUBTER, SH_T(KC_SPC), SH_T(KC_SPC), SUPRA, KC_RGUI
),
[DIR] = LAYOUT_split_3x6_3_wrapper(
  _____________DIRECTIONS_Row__0_____________,
  _____________DIRECTIONS_Row__1_____________,
  _____________DIRECTIONS_Row__2_____________,
  _______, _______, ONEHAND, _______, _______, _______
};
