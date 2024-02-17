#include QMK_KEYBOARD_H

enum pmn_layers {
  _MAIN,
  _LOWER,
  _HIGHER,
  _MOUSE,
};

#define MAIN DF(_MAIN)
#define LOWER MO(_LOWER)
#define HIGHER MO(_HIGHER)
#define MOUSE MO(_MOUSE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_LGUI, KC_LALT, MOUSE,   HIGHER,  KC_SPC,  KC_SPC,  LOWER,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_HIGHER] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,   KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_PSCR, _______, KC_HOME, KC_END, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
  ),

  [_LOWER] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, _______, _______, _______, _______,  _______, _______, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______
  ),

  [_MOUSE] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_BTN1, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_BTN3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_BTN2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )

};
