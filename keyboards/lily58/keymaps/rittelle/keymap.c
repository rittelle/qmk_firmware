#include QMK_KEYBOARD_H

#include "keymap_german.h"

enum layer_number {
  _QWERTZ = 0,
  _LAYER4,
  _LAYER7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ß   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Z  |   U  |   I  |   O  |   P  |  Ü   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LALT |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   Ö  |  Ä   |
 * |------+------+------+------+------+------|  LGUI |    |  RGUI |------+------+------+------+------+------|
 * |LShift|   Y  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Layer4\  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTZ] = LAYOUT( \
  KC_ESC,   DE_1,   DE_2,    DE_3,    DE_4,    DE_5,                      DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,   \
  KC_TAB,   DE_Q,   DE_W,    DE_E,    DE_R,    DE_T,                      DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, \
  KC_LALT,  DE_A,   DE_S,    DE_D,    DE_F,    DE_G,                      DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, \
  KC_LSFT,  DE_Y,   DE_X,    DE_C,    DE_V,    DE_B,    KC_LGUI, KC_RGUI, DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT, \
                         TT(_LAYER7), KC_LCTL, KC_CLCK,  KC_SPC, MO(_LAYER4), KC_CLCK, KC_RCTL, XXXXXXX \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LAYER4] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN,                   XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, KC_PMNS, \
  KC_LALT, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,KC_END,                    XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, DE_COMM, DE_DOT,  \
  KC_LSFT, KC_ESC,  KC_TAB,  KC_INS,  KC_ENT,  KC_UNDO, KC_LGUI, KC_RGUI, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, XXXXXXX, XXXXXXX, \
                             XXXXXXX, KC_LCTL, XXXXXXX, KC_MYCM, _______, XXXXXXX, KC_RCTL, KC_KP_0 \
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |                    |  F19 |  F20 |  F21 |  F22 |  F23 | F24  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  |  F10 |  F11 | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LALT |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------| LGUI  |    |  RGUI |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAY7 | LCTRL| CLCK | /Space  /       \ LAY4 \  | CLCK | LCTRL|      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_LAYER7] = LAYOUT( \
  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,                      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   \
  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,                      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
  KC_LALT, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,                     KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, \
  KC_LSFT,RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,  KC_LGUI, KC_RGUI,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                             _______, _______, XXXXXXX,  RGB_TOG, XXXXXXX,  XXXXXXX, _______, XXXXXXX \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
};

layer_state_t layer_state_set_user(layer_state_t state) {
  /* return update_tri_layer_state(state, _QWERTZ _LAYER4, _LAYER7); */
  return state;
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
        /* return OLED_ROTATION_0; */
    }
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void render_default_layer_state(void) {
    oled_write_P(PSTR("Layer"), false);
    oled_write_P(PSTR(" "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            oled_write_P(PSTR("QRTZ"), false);
            break;
        case _LAYER4:
            oled_write_P(PSTR("LAY4"), false);
            break;
        case _LAYER7:
            oled_write_P(PSTR("LAY7"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
            break;
    }
}

void render_keylock_status(led_t led_state) {
    oled_write_ln_P(PSTR("Lock"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("N"), led_state.num_lock);
    oled_write_P(PSTR("C"), led_state.caps_lock);
    oled_write_ln_P(PSTR("S"), led_state.scroll_lock);
}

void render_mod_status(uint8_t modifiers) {
    oled_write_ln_P(PSTR("Mods"), false);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("S"), (modifiers & MOD_MASK_SHIFT));
    oled_write_P(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write_P(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("G"), (modifiers & MOD_MASK_GUI));
}

void render_rgb_effect(uint8_t effect) {
    char digit0 = effect % 10 + '0';
    char digit1 = (effect / 10) % 10 + '0';
    static char str[3];
    str[0] = digit1;
    str[1] = digit0;
    str[2] = '\0';

    oled_write_ln_P(PSTR("RGB"), false);
    if (effect != 0) {
        oled_write_P(PSTR("  "), false);
        oled_write_ln(str, false);
    } else {
        oled_write_ln_P(PSTR(" off"), false);
    }
}

void render_status_main(void) {
    // Show keyboard layout
    render_default_layer_state();
    // Add a empty line
    oled_write_P(PSTR("-----"), false);
    // Show host keyboard led status
    render_keylock_status(host_keyboard_led_state());
    // Add a empty line
    oled_write_P(PSTR("-----"), false);
    // Show modifier status
    render_mod_status(get_mods());
    // Add a empty line
    oled_write_P(PSTR("-----"), false);
    render_rgb_effect(rgblight_get_mode());
    oled_write_P(PSTR("-----"), false);
    /* render_keylogger_status(); */
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here

    /* oled_write_ln(read_layer_state(), false); */
    /* oled_write_ln(read_keylog(), false); */
    /* oled_write_ln(read_keylogs(), false); */

    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
    
      render_status_main();
  } else {
    oled_write(read_logo(), false);
  }
  return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
