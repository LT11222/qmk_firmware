#include QMK_KEYBOARD_H

uint32_t layer = 0;

enum custom_keycodes {
  DOWN = SAFE_RANGE,
  UP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(      \
    DOWN,    UP,     \
    KC_MPLY, KC_MNXT \
  ),

  [1] = LAYOUT(      \
    DOWN,    UP,     \
    KC_VOLD, KC_VOLU \
  )
};

void matrix_init_user(void) {
  rgblight_mode(RGB_MATRIX_SOLID_COLOR);
}

void rgb_matrix_indicators_user(void) {
  rgb_matrix_set_color(0, 255, 0, 0);
  rgb_matrix_set_color(1, 0, 255, 0);
  rgb_matrix_set_color(2, 255, 0, 255);
  rgb_matrix_set_color(3, 255, 255, 255);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case DOWN:
      if (record->event.pressed) {
        
        if (layer > 0) {
          if (layer == 1) {
            layer -= 1;
            layer_off(1);
            return true;
          }
          else {
            layer -= 1;
            layer_move(layer);
            return true;
          }
        }
        return true;
      }
    
    case UP:
      if (record->event.pressed) {
        if (layer < 1) {
          layer += 1;
          layer_move(layer);
          return true;
        }
      }
      return true;

    default:
      return true;
  }
}