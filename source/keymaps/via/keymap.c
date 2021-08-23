#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  LAYOUT(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_KP_7, KC_KP_8, KC_KP_9, KC_TRNS,
       KC_KP_4, KC_KP_5, KC_KP_6, KC_TRNS,
       KC_KP_1, KC_KP_2, KC_KP_3, KC_TRNS,
       RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    return true;
}
