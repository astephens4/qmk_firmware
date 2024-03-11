/*
Copyright 2024 Alex Stephens

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum Layers
{
    BASE=0,
    SYMNAV=1,
    NUMPAD=2
};

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
    [BASE] = LAYOUT_split_4x8(
        KC_TAB,                 KC_Q,    KC_W,        KC_F,        KC_P,   KC_B,    XXXXXXX,  XXXXXXX,                      /**/ XXXXXXX,               XXXXXXX,  KC_J,    KC_L,   KC_U,         KC_Y,         KC_SEMICOLON, KC_BACKSLASH,
        LT(SYMNAV, KC_CAPS),    KC_A,    KC_R,        KC_S,        KC_T,   KC_G,    XXXXXXX,  XXXXXXX,                      /**/ XXXXXXX,               XXXXXXX,  KC_M,    KC_N,   KC_E,         KC_I,         KC_O,         KC_QUOTE,
        KC_LCTL,                KC_Z,    KC_X,        KC_C,        KC_D,   KC_V,    KC_HOME, KC_SPACE,                      /**/ KC_SPACE,              KC_END,   KC_K,    KC_H,   KC_COMMA,     KC_DOT,       KC_SLASH,     KC_RCTL,
        XXXXXXX,                XXXXXXX, KC_LEFT_ALT, KC_ESC,      KC_BSPC, XXXXXXX, SFT_T(KC_DEL), LT(NUMPAD, KC_EQUAL),   /**/ LT(NUMPAD, KC_ESC),    SFT_T(KC_ENT), XXXXXXX, KC_SPACE, KC_LEFT_GUI, KC_RIGHT_ALT, XXXXXXX,      XXXXXXX
    ),
    [SYMNAV] = LAYOUT_split_4x8(
        KC_TAB,     _______,    _______,    KC_LBRC,    KC_RBRC,    _______,    XXXXXXX,    XXXXXXX,/**/XXXXXXX,    XXXXXXX,    _______,    _______,    _______,        _______,    _______,    _______,
        KC_CAPS,    _______,    _______,    S(KC_9),    S(KC_0),    KC_GRAVE,   XXXXXXX,    XXXXXXX,/**/XXXXXXX,    XXXXXXX,    _______,    KC_LEFT,    KC_DOWN,        KC_UP,      KC_RIGHT,   _______,
        KC_LCTL,    _______,    _______,    S(KC_LBRC), S(KC_RBRC), _______,    _______,    _______,/**/_______,    _______,    _______,    KC_HOME,    KC_PAGE_DOWN,   KC_PAGE_UP, KC_END,     _______,
        XXXXXXX,    XXXXXXX,    _______,    _______,    _______,    XXXXXXX,    _______,    _______,/**/_______,    _______,    XXXXXXX,    _______,    _______,        _______,    XXXXXXX,    XXXXXXX
    ),
    [NUMPAD] = LAYOUT_split_4x8(
        _______,    KC_F9,      KC_F10,   KC_F11,   KC_F12,   _______,    XXXXXXX,    XXXXXXX,/**/XXXXXXX,    XXXXXXX,    KC_EQUAL,   KC_7,       KC_8,       KC_9,       _______,    _______,
        _______,    KC_F5,      KC_F6,    KC_F7,    KC_F8,    _______,    XXXXXXX,    XXXXXXX,/**/XXXXXXX,    XXXXXXX,    KC_MINUS,   KC_4,       KC_5,       KC_6,       S(KC_8),    _______,
        _______,    KC_F1,      KC_F2,    KC_F3,    KC_F4,    _______,    _______,    _______,/**/_______,    _______,    KC_0,       KC_1,       KC_2,       KC_3,       KC_SLASH,   _______,
        XXXXXXX,    XXXXXXX,    _______,    _______,    _______,    XXXXXXX,    _______,    _______,/**/_______,    _______,    XXXXXXX,    _______,    _______,    _______,    XXXXXXX,    XXXXXXX
    ),
};
