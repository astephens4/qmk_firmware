#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │ J │ L │ U │ Y │ ; │ \ │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │ M │ N │ E │ I │ O │ ' │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │ K │ H │ , │ . │ / │ - │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ENT│SPC│   |ESC│WIN│ALT│   │   │
     * ┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x8(
        _______,        _______,    KC_J,       KC_L,       KC_U,           KC_Y,           KC_SEMICOLON,   KC_BACKSLASH,   
        _______,        _______,    KC_M,       KC_N,       KC_E,           KC_I,           KC_O,           KC_QUOTE,   
        KC_END,         KC_DEL,     KC_K,       KC_H,       KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,   
        KC_ENT,         KC_SPACE,   _______,    KC_ESC,     KC_RIGHT_GUI,   KC_RIGHT_ALT,   _______,        _______
    )
};
