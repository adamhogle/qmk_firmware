/* Copyright 2020 Fidel Coria
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define SFT_Z LSFT_T(KC_Z)
#define SFT_FSL RSFT_T(KC_SLSH)

#define UNLOCK LCA(KC_DEL)
#define LOCK   RGUI(KC_L)
#define CTL_S  RCTL(KC_RSFT) // used with arrow keys for word highlight
#define G_SHFT RGUI(KC_RSFT) // plus arrow to switch window to other screen

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,
                       MO(1),KC_BSPC,  MO(2),           KC_SPC, KC_ENT, KC_RALT
    ),

    [1] = LAYOUT_split_3x5_3(
        KC_TAB, KC_HOME,KC_UP,  KC_END, UNLOCK,          KC_GRV, KC_LPRN,KC_RPRN,KC_MINS,KC_EQL,
        KC_ESC, KC_LEFT,KC_DOWN,KC_RGHT,LOCK,            KC_QUOT,KC_LCBR,KC_RCBR,KC_RGUI,KC_QUOT,
        KC_LGUI,KC_DEL, KC_ENT, KC_SPC, KC_CAPS,         CTL_S,  KC_LBRC,KC_RBRC,G_SHFT, KC_BSLS,
                        _______,_______,_______,         _______,KC_RCTL,KC_RALT
    ),

    [2] = LAYOUT_split_3x5_3(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,
        _______,_______,_______,KC_F11, KC_F12,         KC_INS, _______,QK_BOOT,  _______,_______,
                        _______,_______,_______,        _______,KC_RCTL,KC_RALT
    )
};
