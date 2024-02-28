#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┐    ┌───┬───┬───┬───┬───┬───┬───┬───┐
     * │tab│ Q │ W │ F │ P │ B │   │   │    │   │   │ J │ L │ U │ Y │ ; │ \ │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤    ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │cap│ A │ R │ S │ T │ G │   │   │    │   │   │ M │ N │ E │ I │ O │ ' │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤    ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ctl│ Z │ X │ C │ D │ V │spc│hme│    │end│del│ K │ H │ , │ , │ / │ - │
     * ┼───┼───┼───┼───┼───┼───┼───┼───┤    ┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │alt│win│esc│   │bsp│del│    │ent│spc│   │esc│win│alt│   │   │
     * ┴───┴───┴───┴───┴───┴───┴───┴───┘    ┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_split_4x8(
        KC_TAB,  KC_Q,    KC_W,        KC_F,        KC_P,   KC_B,    _______,  _______, _______, _______,  KC_J,    KC_L,   KC_U,         KC_Y,         KC_SEMICOLON, KC_BACKSLASH,   
        KC_CAPS, KC_A,    KC_R,        KC_S,        KC_T,   KC_G,    _______,  _______, _______, _______,  KC_M,    KC_N,   KC_E,         KC_I,         KC_O,         KC_QUOTE,   
        KC_LCTL, KC_Z,    KC_X,        KC_C,        KC_D,   KC_V,    KC_SPACE, KC_HOME, KC_END,  KC_DEL,   KC_K,    KC_H,   KC_COMMA,     KC_DOT,       KC_SLASH,     KC_MINUS,   
        _______, _______, KC_LEFT_ALT, KC_LEFT_GUI, KC_ESC, _______, KC_BSPC,  KC_DEL,  KC_ENT,  KC_SPACE, _______, KC_ESC, KC_RIGHT_GUI, KC_RIGHT_ALT, _______,      _______
    )
};
