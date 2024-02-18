#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │ Q │ W │ F │ P │ B │ J │ L │ U │ Y │ ; │   │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ A │ R │ S │ T │ G │ M │ N │ E │ I │ O │   │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │ Z │ X │ C │ D │ V │ K │ H │ , │ . │ / │   │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │
     * ┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x12(
        KC_TAB,         KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_L,
        KC_CAPS,        KC_A,       KC_R,       KC_S,       KC_T,       KC_G,       KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_L,
        KC_LCTL,        KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_L,
        _______,        KC_LALT,    KC_ESC,     KC_BSPC,    KC_DEL,     KC_HOME,    KC_END,     KC_ENT,     KC_SPC,     KC_LGUI,    KC_LCTL,    _______
    )
};
