enum custom_keycodes
{
    EMAIL1 = SAFE_RANGE,
    EMAIL2,
    WRK_EMAIL,
    WRK_EMAIL2,
    DNI,
    PHONE_NUMBER,
    ALT_TAB,
    LSALT_TAB,
    PREV_DSK,
    SHOW_DSK,
    NEXT_DSK,
    MAC_LYR,
    WIN_LYR,
    LNX_LYR,
    WORD_MOD,
    UNDO,
    CUT,
    COPY,
    PASTE,
    SCREENSHOT,
    ENIE,
    MSN_CTRL,
};

enum OS
{
    _MAC,
    _WINDOWS,
    _LINUX,
};

int currentOS = _WINDOWS;
enum layers
{
    _QWERTY,
    _NUMERIC,
    _NAVIGATION,
    _SYMBOLS,
    _FN_KEYS,
    _CONFIG
};
