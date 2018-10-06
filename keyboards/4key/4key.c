#include "4key.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
  {0, A_1, C_1, B_1}, {0, D_1, F_1, E_1},
  {0, A_2, C_2, B_2}, {0, D_2, F_2, E_2}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
  {{0 | (0 << 4)}, {224 * 0, 64 * 0}, 0},
  {{0 | (1 << 4)}, {224 * 1, 64 * 0}, 0},
  {{1 | (0 << 4)}, {224 * 0, 64 * 1}, 1},
  {{1 | (1 << 4)}, {224 * 1, 64 * 1}, 1}
};

void matrix_init_kb(void) {
  matrix_init_user();
}

void rgb_matrix_indicators_kb(void) {
  rgb_matrix_indicators_user();
}