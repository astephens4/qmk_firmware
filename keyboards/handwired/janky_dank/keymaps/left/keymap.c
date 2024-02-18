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
    [0] = LAYOUT_ortho_4x8(
        KC_TAB,         KC_Q,       KC_W,           KC_F,           KC_P,       KC_B,       _______,        _______,   
        KC_CAPS,        KC_A,       KC_R,           KC_S,           KC_T,       KC_G,       _______,        _______,   
        KC_LCTL,        KC_Z,       KC_X,           KC_C,           KC_D,       KC_V,       KC_SPACE,       KC_HOME,   
        _______,        _______,    KC_LEFT_ALT,    KC_LEFT_GUI,    KC_ESC,     _______,    KC_BSPC,        KC_DEL
    )
};
