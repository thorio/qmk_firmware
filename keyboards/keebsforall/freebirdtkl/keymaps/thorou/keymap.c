#include QMK_KEYBOARD_H

#define _ KC_NO
#define M_CAPS LT(2, KC_CAPS)

enum custom_keycodes {
    M_TGLCL = SAFE_RANGE, // toggle caps lock
};

bool capslock_enabled = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case M_TGLCL:
            if (record->event.pressed) {
                capslock_enabled = !capslock_enabled;
            }

            return false;
        case M_CAPS:
            // don't modify tap-hold behaviour
            if (!record->tap.count) return true;

            // let caps through
            if (capslock_enabled) return true;

            // block caps and send F14 instead
            if (record->event.pressed) {
                tap_code16(KC_F14);
                return false;
            }
    }

    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_f13_ansi_split_rshift(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,     KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        M_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),               KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, MO(1),   KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_tkl_f13_ansi_split_rshift(
        QK_BOOT, NK_TOGG, _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          KC_MPRV, KC_MPLY, KC_MNXT,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       KC_VOLU,
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       KC_MUTE, KC_VOLD,
        M_TGLCL, _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,                _,
        _______,          _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _______,             _,
        _______, _______, _______,                            _,                                  _______, _______, _______, _______,    _,       _,       _
    ),
    [2] = LAYOUT_tkl_f13_ansi_split_rshift(
        _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       _,
        _,       KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, _,       _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       KC_BRIU,
        _,       KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_PENT, _,       _,       _,       _,       _,       _,       _,       _,          _,       _,       KC_BRID,
        _,       KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_PDOT, _,       _,       _,       _,       _,       _,                _,
        _______,          KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_P0,   _,       _,       _,       _,       _,       QK_LOCK, _______,             _,
        _______, _______, _______,                            _,                                  _______, _______, _______, _______,    _,       _,       _
    ),
};
