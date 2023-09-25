#define NUM_LYR LT(_NUMERIC, KC_TAB)
#define NAV_LYR MO(_NAVIGATION)
#define SYM_LYR MO(_SYMBOLS)
#define FN_LYR MO(_FN_KEYS)
#define CONF_LYR MO(_CONFIG)
#define PLUS_SIGN LSFT(KC_EQL)
#define ASTERISK LSFT(KC_8)
#define BANG LSFT(KC_1)
#define PERCENT LSFT(KC_5)
#define HASHTAG LSFT(KC_3)
#define TILDE LSFT(KC_GRV)
#define CARET LSFT(KC_6)
#define AMPERSAND LSFT(KC_7)
#define ARROBA LSFT(KC_2)
#define DOLLAR LSFT(KC_4)
#define PIPE LSFT(KC_BSLS)
#define COMILLA_SIMP KC_QUOT
#define DBL_QT LSFT(KC_QUOT)
#define PAR_OPN LSFT(KC_9)
#define PAR_CLS LSFT(KC_0)
#define SQR_BRC_O KC_LBRC
#define SQR_BRC_C KC_RBRC
#define CRL_BRC_O LSFT(KC_LBRC)
#define CRL_BRC_C LSFT(KC_RBRC)
#define UND_SCR LSFT(KC_MINUS)
#define GREATER LSFT(KC_DOT)
#define LESS_THAN LSFT(KC_COMM)

bool     is_alt_tab_active = false; // ADD this near the begining of keymap.c
uint16_t alt_tab_timer     = 0;

#include "enums.c"
#include "secrets.c"
#include "functions.c"
