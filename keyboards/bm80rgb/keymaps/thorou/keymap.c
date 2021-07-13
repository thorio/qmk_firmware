/* Copyright 2021 thorio
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
#include "definitions.h"
#include "custom.h"

#define _ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BS] = LAYOUT_tkl_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_MS), MO(_FN), KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_L2] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L3] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L4] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L5] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L6] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L7] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_L8] = LAYOUT_tkl_ansi(
        _,                _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, MO(_MS), MO(_FN), _______,    _,       _,       _
    ),
    [_MS] = LAYOUT_tkl_ansi(
        _,                KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,     _,       _,       _,
        _,       KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_PENT, _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_PDOT, _,       _,       _,       _,       _,       _,                _,
        _______,          KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_P0,   _,       _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, _,       _,       _______,    _,       _,       _
    ),
    [_FN] = LAYOUT_tkl_ansi(
        M_RESET,          DF(_BS), DF(_L2), DF(_L3), DF(_L4), DF(_L5), DF(_L6), DF(_L7), DF(_L8), _,       _,       _,       _,          KC_MPRV, KC_MPLY, KC_MNXT,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       KC_VOLU,
        _,       RGB_TOG, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _,       _,       _,       _,       _,       _,       _,       _,          _,       KC_MUTE, KC_VOLD,
        M_TGLCL, RGB_MOD, RGB_VAD, RGB_SPD, RGB_HUD, RGB_SAD, _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       MG_TKRO, _,       _,       _,       _,                _______,             _,
        _______, _______, _______,                            _,                                  _______, _,       _,       KC_LOCK,    _,       _,       _
    )
};
