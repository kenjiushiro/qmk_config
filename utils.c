#define NUM_LAYER LT(_NUMERIC, KC_TAB)
#define NAV_LAYER MO(_NAVIGATION)
#define SYM_LAYER MO(_SYMBOLS)
#define FN_LAYER MO(_FN_KEYS)
#define CONF_LAYER MO(_CONFIG)
#define PLUS_SIGN LSFT(KC_EQL)
#define ASTERISK LSFT(KC_8)
#define BANG LSFT(KC_1)
#define PERCENT LSFT(KC_5)
#define HASHTAG LSFT(KC_3)
#define FIRULITO LSFT(KC_GRV)
#define CARET LSFT(KC_6)
#define AMPERSAND LSFT(KC_7)
#define ARROBA LSFT(KC_2)
#define DOLLAR LSFT(KC_4)
#define PIPE LSFT(KC_BSLS)
#define COMILLA_SIMP KC_QUOT
#define COMILLA_DOBL LSFT(KC_QUOT)
#define AB_PARENT LSFT(KC_9)
#define CE_PARENT LSFT(KC_0)
#define AB_CORCHE KC_LBRC
#define CE_CORCHE KC_RBRC
#define AB_LLAVE LSFT(KC_LBRC)
#define CE_LLAVE LSFT(KC_RBRC)
#define UNDERSCORE LSFT(KC_MINUS)
#define GREATER LSFT(KC_DOT)
#define LESS_THAN LSFT(KC_COMM)

bool     is_alt_tab_active = false; // ADD this near the begining of keymap.c
uint16_t alt_tab_timer     = 0;

#include "enums.c"
#include "functions.c"
