#pragma once

#include "../definitions.h"

bool m_reset_indicator_resetting = false;

bool m_reset_indicator_reset(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        m_reset_indicator_resetting = true;
        rgb_matrix_enable_noeeprom();
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_sethsv_noeeprom(11, 11, 11);
    } else {
        reset_keyboard();
    }
    return true;
}

bool m_reset_indicator_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case M_RESET:
        return m_reset_indicator_reset(keycode, record);
    }
    return true;
};

bool m_reset_indicator_rgb_matrix_indicators(void) {
    if (m_reset_indicator_resetting) {
        rgb_matrix_set_color(0, 255, 0, 0);
        return false;
    }
    return true;
}
