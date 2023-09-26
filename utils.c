#define NUM_LYR LT(_NUMERIC, KC_TAB)
#define NAV_LYR MO(_NAVIGATION)
#define SYM_LYR MO(_SYMBOLS)
#define FN_LYR MO(_FN_KEYS)
#define CONF_LYR MO(_CONFIG)

bool     is_alt_tab_active = false; // ADD this near the begining of keymap.c
uint16_t alt_tab_timer     = 0;

#include "enums.c"
#include "secrets.c"
#include "functions.c"
