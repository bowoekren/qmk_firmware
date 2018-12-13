#include QMK_KEYBOARD_H

enum keyboard_layers {
  _BASE = 0,
  _FUNC,
  _WINDOWS,
  _ADJUST
};

// Custom #defined keycodes (shorter macros for readability)
#define KC_CTES CTL_T(KC_ESC)
#define KC_RSUP RSFT_T(KC_UP)
#define KC_FNDN LT(_ADJUST, KC_DOWN)
#define KC_RGLT RCMD_T(KC_LEFT)
#define KC_RCRT RCTL_T(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_aek_103(
    KC_GESC,        KC_1,    KC_2,    KC_3,   KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,         KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_BSPC,        KC_A,    KC_S,    KC_D,   KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_ENT,
    LSFT_T(KC_EQL), KC_Z,    KC_X,    KC_C,   KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSUP,
    KC_LCTL,        KC_LALT, KC_LGUI,                            KC_SPC,                              KC_RGLT, KC_FNDN, KC_RCRT
  ),

  [_WINDOWS] = LAYOUT_aek_103(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LGUI, KC_LALT,                            _______,                            _______, _______, _______
  ),

  [_FUNC] = LAYOUT_aek_103(
    _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______
  ),

  [_ADJUST] = LAYOUT_aek_103(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, _______, KC_UP,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
    _______, TG(_WINDOWS), _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, TG(_FUNC)
  ),
};
