#pragma once

#include "modules/disable_capslock.h"
#include "modules/reset_indicator.h"
#include "modules/layer_indicator.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // when any function returns false, control returns to the caller and subsequent functions are not executed.
    return !(
        !m_disable_capslock_process_record_user(keycode, record) ||
        !m_reset_indicator_process_record_user(keycode, record)
    );
}

void rgb_matrix_indicators_user(void) {
    int __attribute__((__unused__)) _ = (
        !m_reset_indicator_rgb_matrix_indicators() ||
        !m_layer_indicator_rgb_matrix_indicators()
    );
}

// layer_state_t layer_state_set_user(layer_state_t state) {
//     int __attribute__((__unused__)) _ = (
//         !m_layer_indicator_layer_state_set(state)
//     );

//     return state;
// }
