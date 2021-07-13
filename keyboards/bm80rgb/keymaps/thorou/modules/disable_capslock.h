#pragma once

#include "../definitions.h"

bool m_disable_capslock_state = false;

bool m_disable_capslock_toggle(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        m_disable_capslock_state = !m_disable_capslock_state;
    }

    return false;
}

bool m_disable_capslock_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case M_TGLCL:
        return m_disable_capslock_toggle(keycode, record);
    case KC_CAPS:
        return m_disable_capslock_state;
    }
    return true;
};
