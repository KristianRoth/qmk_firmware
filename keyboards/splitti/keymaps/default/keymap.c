#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

enum layers {
  QWERTY,
  NUM,
  SYM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌────┬────┬────┬────┬────┬────┐             ┌────┬────┬────┬────┬────┬────┐
      * │ ESC│  Q │  W │  E │  R │  T │             │  Y │  U │  I │  O │  P │ <- │
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │ TAB│  A │  S │  D │  F │  G │             │  H │  J │  K │  L │  Ö │  Ä │
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │ SFT│  Z │  X │  C │  V │  B │             │  N │  M │  , │  . │  - │ SFT│
      * ├────┼────┼────┼────┼────┼────┼────┐   ┌────┼────┼────┼────┼────┼────┼────┤
      * │ CRL│    │    │ OPT│ CMD│ ENT│ MO3│   │ MO3│ SPC│ CMD│ OPT│    │    │ CRL│
      * └────┴────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴────┴────┘
      */
    [QWERTY] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,     KC_J,    KC_K,    KC_L,    FI_ODIA, FI_ADIA,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,     KC_M,    FI_COMM, FI_DOT,  FI_MINS, KC_RSFT,
        KC_LCTL, XXXXXXX, XXXXXXX, KC_LALT, KC_LCMD, LT(NUM, KC_ENT),   LT(NUM, KC_SPC), KC_RCMD, KC_RALT, XXXXXXX, XXXXXXX, KC_RCTL,
                                                     MO(SYM),                  MO(SYM)
    ),
     /*
      * ┌────┬────┬────┬────┬────┬────┐             ┌────┬────┬────┬────┬────┬────┐
      * │    │  § │  7 │  8 │  9 │    │             │  ´ │PGUP│ UP │PGDN│ DEL│ <- │ 
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │CAPS│    │  4 │  5 │  6 │    │             │  ` │ LFT│ DW │ RGT│  ¨ │  * │ 
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │    │    │  1 │  2 │  3 │  0 │             │  ' │    │    │    │  ^ │  ™ │ 
      * ├────┼────┼────┼────┼────┼────┼────┐   ┌────┼────┼────┼────┼────┼────┼────┤
      * │    │    │    │    │    │    │    │   │    │    │    │    │    │  ^ │  ’ │ 
      * └────┴────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴────┴────┘
      *
      */
    [NUM] = LAYOUT(
        _______, FI_SECT, KC_7,    KC_8,    KC_9,    _______,                   FI_ACUT, KC_PGUP, KC_UP,   KC_PGDN, KC_DEL,        KC_BSPC,
        KC_CAPS, S(FI_SECT),KC_4,  KC_5,    KC_6,    _______,                S(FI_ACUT), KC_LEFT, KC_DOWN, KC_RGHT, KC_RBRC,       S(KC_NUHS),
        _______, _______, KC_1,    KC_2,    KC_3,    KC_0,                      KC_NUHS, _______, _______, _______, S(KC_RBRC),    ALGR(KC_NUHS),
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, ALGR(KC_RBRC), LSA(KC_NUHS),
                                                     MO(SYM),                   MO(SYM)
    ),
     /*
      * ┌────┬────┬────┬────┬────┬────┐             ┌────┬────┬────┬────┬────┬────┐
      * │  < │  ! │  " │  # │  € │  % │             │  & │  / │  ( │  ) │  = │  + │ 
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │  > │  © │  @ │  £ │  $ │  ∞ │             │  § │  | │  [ │  ] │  ≈ │  ? │ 
      * ├────┼────┼────┼────┼────┼────┤             ├────┼────┼────┼────┼────┼────┤
      * │  ≤ │  ¡ │  ” │  ¥ │  ¢ │  ‰ │             │  n │  \ │  { │  } │  ≠ │  ± │ 
      * ├────┼────┼────┼────┼────┼────┼────┐   ┌────┼────┼────┼────┼────┼────┼────┤
      * │  ≥ │    │    │    │    │    │    │   │    │    │    │    │    │    │  ¿ │ 
      * └────┴────┴────┴────┴────┴────┴────┘   └────┴────┴────┴────┴────┴────┴────┘
      *FI_PLUS
      */
    [SYM] = LAYOUT(
        KC_NUBS,    S(FI_1),    S(FI_2),    S(FI_3),    S(FI_4),    S(FI_5),                     S(FI_6),    S(FI_7),    S(FI_8),    S(FI_9),    S(FI_0),    FI_PLUS,
        S(KC_NUBS), ALGR(FI_1), ALGR(FI_2), ALGR(FI_3), ALGR(FI_4), ALGR(FI_5),                  ALGR(FI_6), ALGR(FI_7), ALGR(FI_8), ALGR(FI_9), ALGR(FI_0), S(FI_PLUS),
      ALGR(KC_NUBS), LSA(FI_1), LSA(FI_2),  LSA(FI_3),  LSA(FI_4),  LSA(FI_5),                   LSA(FI_6),  LSA(FI_7),  LSA(FI_8),  LSA(FI_9),  LSA(FI_0),  ALGR(FI_PLUS),
      LSA(KC_NUBS), _______,   _______,    _______,    _______,    _______,                     _______,    _______,    _______,    _______,    _______,    LSA(FI_PLUS), 
                                                                    _______,                     _______
    ),
};