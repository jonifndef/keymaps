#include QMK_KEYBOARD_H
#include "action_layer.h"

#define _BL 0
#define _FL 1
#define _GB 2
#define _GF 3
#define _ML 4 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	// 0: Base Layer
  [_BL] = LAYOUT_all( 
      KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_NO,   \
      KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_NO,   \
      MO(_FL),          KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS,           KC_ENT,  \
      KC_LSFT,          KC_NUBS, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO,   KC_RSFT,  TG(_GB),  \
      KC_LCTL,          KC_LGUI, KC_LALT,                          KC_SPC,                          KC_RALT, KC_RGUI,  KC_NO,   MO(_ML),  KC_RCTL),

  [_FL] = LAYOUT_all(
      KC_GRV,  	KC_F1,   	KC_F2,   	KC_F3,    KC_F4,  	KC_F5,    KC_F6,  	KC_F7,    KC_F8,  	KC_F9,    KC_F10,   KC_F11,   	KC_F12,  	KC_DEL,   KC_NO, 	\
      KC_CAPS, 	KC_TRNS, 	KC_UP, 	 	KC_TRNS,  KC_TRNS,	KC_TRNS,  KC_PGUP,	KC_HOME,  KC_INS,  	KC_TRNS,  KC_PSCR, 	KC_TRNS,   	KC_TRNS,    KC_NO,  			\
      KC_TRNS,  KC_LEFT, 	KC_DOWN, 	KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,  	KC_RIGHT, KC_TRNS,  KC_TRNS,   	KC_TRNS,    KC_ENT, 			\
      KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,  KC_TRNS,	KC_TRNS,  KC_PGDN,	KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS, 	KC_TRNS,	KC_TRNS,   	KC_TRNS,  KC_TRNS, 	\
      KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	                  	          KC_SPC, 	                  	          KC_TRNS, 	KC_TRNS,    KC_TRNS,   	KC_TRNS,  KC_TRNS),

  [_GB] = LAYOUT_all(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_NO,   \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_NO,   \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS,           KC_ENT,  \
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO,   KC_RSFT,  KC_TRNS,  \
      KC_LCTL, KC_LGUI, KC_LALT,                          LT(_GF, KC_SPC),                 KC_RALT, KC_RGUI,  KC_NO,   MO(_ML),    KC_RCTL),


  [_GF] = LAYOUT_all(
      KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,   KC_NO,  \
      KC_CAPS,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_INS,   KC_TRNS,  KC_PSCR,  KC_TRNS,    KC_TRNS,    KC_NO,        \
      KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_ENT,       \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  \
      KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS),

  [_ML] = LAYOUT_all(
      KC_GRV,   KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MPLY,  KC_MPRV,  KC_MNXT,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_DEL,   KC_NO,  \
      KC_CAPS,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_INS,   KC_TRNS,  KC_PSCR,  KC_TRNS,  KC_TRNS,    KC_NO,        \
      KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_ENT,       \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  \
      KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_LCTL,                                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS),

/*
  // 1: Function Layer
  [_FL] = LAYOUT_all(
      RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,  KC_NO,  \
      KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   BL_TOGG, BL_DEC,   BL_INC,           KC_NO,  \
      KC_NO,   KC_MPLY, KC_MSTP, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,              KC_ENT, \
      KC_LSFT, RGB_TOG, RGB_MOD, KC_CUT,  KC_COPY,KC_PASTE,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD, KC_HOME, KC_PGUP,   KC_END, \
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_RGUI, F(0),   KC_NO,   KC_PGDOWN, KC_NO),

*/
};  	

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

// Macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) { register_code(KC_RSFT); }
      else { unregister_code(KC_RSFT); }
      break;
  }

  return MACRO_NONE;
};

// Loop
void matrix_scan_user(void) {
  // Empty
};
