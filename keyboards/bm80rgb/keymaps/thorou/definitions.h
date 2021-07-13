#pragma once

enum custom_keycodes {
    // aliases
    MG_TKRO = MAGIC_TOGGLE_NKRO,

    // macros
    M_TGLCL = SAFE_RANGE, // toggle caps lock
    M_RESET // custom reset
};

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BS = 0,  // base
    _L2 = 1,  // unused
    _L3 = 2,  // unused
    _L4 = 3,  // unused
    _L5 = 4,  // unused
    _L6 = 5,  // unused
    _L7 = 6,  // unused
    _L8 = 7,  // unused

    _MS = 8,  // misc
    _FN = 9,  // function
};
