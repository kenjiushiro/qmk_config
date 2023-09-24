enum custom_keycodes
{
    PERSONAL_EMAIL_1 = SAFE_RANGE,
    PERSONAL_EMAIL_2,
    WORK_EMAIL,
    WORK_EMAIL2,
    DNI,
    PHONE_NUMBER,
    ALT_TAB,
    LSALT_TAB,
    DESKTOP_LEFT,
    DESKTOP_RIGHT,
    DESKTOP_UP,
    SWITCH_TO_MAC,
    SWITCH_TO_WINDOWS,
    SWITCH_TO_LINUX,
    WORD_MODIFIER,
    UNDO,
    CUT,
    COPY,
    PASTE,
    SCREENSHOT,
    ENIE,
    MISSION_CONTROL,
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
