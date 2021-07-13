#pragma once

#include "../definitions.h"

int m_layer_indicator_active_layer = 0;
uint32_t m_layer_indicator_last_layer_change = 0;

bool m_layer_indicator_should_draw(void) {
    int new_layer = biton32(default_layer_state);

    if (new_layer != m_layer_indicator_active_layer) {
        m_layer_indicator_active_layer = new_layer;
        m_layer_indicator_last_layer_change = timer_read32();
    }

    return !(timer_elapsed32(m_layer_indicator_last_layer_change) > 750);
}

bool m_layer_indicator_rgb_matrix_indicators(void) {
    if (!m_layer_indicator_should_draw()) {
        return true;
    }

    int i = 8;
    while (i --> 0) {
        if (i == m_layer_indicator_active_layer) {
            rgb_matrix_set_color(i + 1, 255, 255, 255);
        } else {
            rgb_matrix_set_color(i + 1, 0, 0, 0);
        }
    }

    return true;
}
