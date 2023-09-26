void mission_control(void)
{
    switch (currentOS)
    {
    case _WINDOWS:
        register_code(KC_LALT);
        tap_code(KC_SPC);
        unregister_code(KC_LALT);
        break;
    case _MAC:
        register_code(KC_LGUI);
        tap_code(KC_SPC);
        unregister_code(KC_LGUI);
        break;
    case _LINUX:
        tap_code(KC_LGUI);
        tap_code(KC_LGUI);
        break;
    }
}

void previous_desktop(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LCTL);
        tap_code(KC_LEFT);
        unregister_code(KC_LCTL);
        break;
    case _LINUX:
        register_code(KC_LCTL);
        register_code(KC_LALT);
        tap_code(KC_LEFT);
        unregister_code(KC_LCTL);
        unregister_code(KC_LALT);
    case _WINDOWS:
        register_code(KC_LCTL);
        register_code(KC_LGUI);
        tap_code(KC_LEFT);
        unregister_code(KC_LCTL);
        unregister_code(KC_LGUI);
        break;
    }
}

void next_desktop(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LCTL);
        tap_code(KC_RIGHT);
        unregister_code(KC_LCTL);
        break;
    case _LINUX:
        register_code(KC_LCTL);
        register_code(KC_LALT);
        tap_code(KC_RIGHT);
        unregister_code(KC_LCTL);
        unregister_code(KC_LALT);
    case _WINDOWS:
        register_code(KC_LCTL);
        register_code(KC_LGUI);
        tap_code(KC_RIGHT);
        unregister_code(KC_LCTL);
        unregister_code(KC_LGUI);
        break;
    }
}

void show_desktops(void)
{
    if (currentOS == _LINUX)
    {
        tap_code(KC_LGUI);
    }
    else if (currentOS == _WINDOWS)
    {
        register_code(KC_LGUI);
        tap_code(KC_TAB);
        unregister_code(KC_LGUI);
    }
    else if (currentOS == _MAC)
    {
        tap_code(KC_LGUI);
    }
}

void register_alt_tab_modifier(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LALT);
        break;
    }
}

void unregister_alt_tab_modifier(void)
{
    switch (currentOS)
    {
    case _MAC:
        unregister_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        unregister_code(KC_LALT);
        break;
    }
}

void hold_word_modifier(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LALT);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LCTL);
        break;
    }
}

void release_word_modifier(void)
{
    switch (currentOS)
    {
    case _MAC:
        unregister_code(KC_LALT);
        break;
    case _WINDOWS:
    case _LINUX:
        unregister_code(KC_LCTL);
        break;
    }
}

void undo(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        tap_code(KC_Z);
        unregister_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LCTL);
        tap_code(KC_Z);
        unregister_code(KC_LCTL);
        break;
    }
}

void cut(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        tap_code(KC_X);
        unregister_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LCTL);
        tap_code(KC_X);
        unregister_code(KC_LCTL);
        break;
    }
}

void copy(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        tap_code(KC_C);
        unregister_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LCTL);
        tap_code(KC_C);
        unregister_code(KC_LCTL);
        break;
    }
}

void paste(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        tap_code(KC_V);
        unregister_code(KC_LGUI);
        break;
    case _WINDOWS:
    case _LINUX:
        register_code(KC_LCTL);
        tap_code(KC_V);
        unregister_code(KC_LCTL);
        break;
    }
}

void screenshot(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LGUI);
        register_code(KC_LSFT);
        tap_code(KC_X);
        unregister_code(KC_LGUI);
        unregister_code(KC_LSFT);
        break;
    case _WINDOWS:
    case _LINUX:
        tap_code(KC_PSCR);
        break;
    }
}

void enie(void)
{
    switch (currentOS)
    {
    case _MAC:
        register_code(KC_LALT);
        tap_code(KC_N);
        unregister_code(KC_LALT);
        tap_code(KC_N);
        break;
    case _WINDOWS:
        register_code(KC_LALT);
        tap_code(KC_KP_0);
        tap_code(KC_KP_2);
        tap_code(KC_KP_4);
        tap_code(KC_KP_1);
        unregister_code(KC_LALT);
        break;
    case _LINUX:
        register_code(KC_LCTL);
        register_code(KC_LSFT);
        tap_code(KC_U);
        unregister_code(KC_LCTL);
        unregister_code(KC_LSFT);
        tap_code(KC_0);
        tap_code(KC_0);
        tap_code(KC_F);
        tap_code(KC_1);
        tap_code(KC_ENT);
        break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {

    case EMAIL1:
        if (record->event.pressed)
        {
            send_string(personal_email1);
        }
        return false;
        break;
    case EMAIL2:
        if (record->event.pressed)
        {
            send_string(personal_email2);
        }
        return false;
        break;
    case WRK_EMAIL:
        if (record->event.pressed)
        {
            send_string(work_email1);
        }
        return false;
        break;
    case WRK_EMAIL2:
        if (record->event.pressed)
        {
            send_string(work_email2);
        }
        return false;
        break;
    case DNI:
        if (record->event.pressed)
        {
            send_string(dni);
        }
        return false;
        break;
    case PHONE_NUMBER:
        if (record->event.pressed)
        {
            send_string(phone_number);
        }
        return false;
        break;
    case ENIE:
        if (record->event.pressed)
        {
            enie();
        }
        return false;
        break;
    case MSN_CTRL:
        if (record->event.pressed)
        {
            mission_control();
        }
        return false;
        break;
    case ALT_TAB:
        if (record->event.pressed)
        {
            if (!is_alt_tab_active)
            {
                is_alt_tab_active = true;
                register_alt_tab_modifier();
            }
            alt_tab_timer = timer_read();
            register_code(KC_TAB);
        }
        else
        {
            unregister_code(KC_TAB);
        }
        break;
    case LSALT_TAB:
        if (record->event.pressed)
        {
            if (!is_alt_tab_active)
            {
                is_alt_tab_active = true;
                register_code(KC_LALT);
            }
            alt_tab_timer = timer_read();
            register_code(KC_LSFT);
            register_code(KC_TAB);
            unregister_code(KC_LSFT);
        }
        else
        {
            unregister_code(KC_TAB);
        }
        break;
    case SCREENSHOT:
        if (record->event.pressed)
        {
            screenshot();
            return false;
        }
        break;

    case PREV_DSK:
        if (record->event.pressed)
        {
            previous_desktop();
        }
        return false;
        break;
    case NEXT_DSK:
        if (record->event.pressed)
        {
            next_desktop();
        }
        return false;
        break;
    case SHOW_DSK:
        if (record->event.pressed)
        {
            show_desktops();
        }
        return false;
        break;
    case MAC_LYR:
        if (record->event.pressed)
        {
            currentOS = _MAC;
        }
        return false;
        break;
    case WIN_LYR:
        if (record->event.pressed)
        {
            currentOS = _WINDOWS;
        }
        return false;
        break;
    case LNX_LYR:
        if (record->event.pressed)
        {
            currentOS = _LINUX;
        }
        return false;
        break;
    case WORD_MOD:
        if (record->event.pressed)
        {
            hold_word_modifier();
        }
        else
        {
            release_word_modifier();
        }
        return false;
        break;
    case UNDO:
        if (record->event.pressed)
        {
            undo();
        }
        return false;
        break;
    case CUT:
        if (record->event.pressed)
        {
            cut();
        }
        return false;
        break;
    case COPY:
        if (record->event.pressed)
        {
            copy();
        }
        return false;
        break;
    case PASTE:
        if (record->event.pressed)
        {
            paste();
        }
        return false;
        break;
    }
    return true;
}

void matrix_scan_user(void)
{ // The very important timer.
    if (is_alt_tab_active)
    {
        if (timer_elapsed(alt_tab_timer) > 500)
        {
            unregister_alt_tab_modifier();
            is_alt_tab_active = false;
        }
    }
}
