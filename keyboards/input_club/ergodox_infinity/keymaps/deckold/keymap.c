#include QMK_KEYBOARD_H


enum custom_layers {
    BASE,
    FKEYS,
    GAME
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_ergodox(
        // left hand
        KC_EQL,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5, KC_ESC,
        KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T, TG(FKEYS),
        LCTL_T(KC_ESC), KC_A,   KC_S,    KC_D,    KC_F,    KC_G,
        KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, LT(FKEYS,KC_NO),
        KC_LALT, KC_GRV, KC_NUBS, KC_NUHS, KC_LGUI,
                                                    KC_PSCR, KC_CAPS,
                                                             KC_HOME,
                                            KC_BSPC, KC_DEL, KC_END,

        // right hand
               KC_NO, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS,
             KC_LBRC, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_RBRC,
                      KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,
               TG(GAME), KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                           KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RGUI,
        KC_RALT, KC_RCTL,
        KC_PGUP,
        KC_PGDN, KC_ENT, KC_SPC
    ),
	[FKEYS] = LAYOUT_ergodox(
        // Left hand
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F12,
        KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
        KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,
        KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS,
        EE_CLR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     RGB_MOD, KC_TRNS,
                                                              KC_TRNS,
                                            RGB_VAD, RGB_VAI, KC_TRNS,

        // Right hand
        KC_TRNS, KC_F6,   KC_F7, KC_F8,  KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_UP,   KC_7,  KC_8,   KC_9,    KC_ASTR, KC_F12,
                 KC_DOWN, KC_4,  KC_5,   KC_6,    KC_PLUS, KC_TRNS,
        KC_TRNS, KC_AMPR, KC_1,  KC_2,   KC_3,    KC_BSLS, KC_TRNS,
        KC_TRNS, KC_DOT,  KC_0,  KC_EQL, KC_TRNS,
                                                  RGB_TOG, KC_NO,
                                                           KC_TRNS,
                                         KC_TRNS, RGB_HUD, RGB_HUI
    ),
	[GAME] = LAYOUT_ergodox(
        // left hand
        KC_ESC,  KC_1,   KC_2,    KC_3,    KC_4,  KC_5, KC_6,
        KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,  KC_T, KC_7,
        KC_LCTL, KC_A,   KC_S,    KC_D,    KC_F,  KC_G,
        KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,  KC_B, KC_8,
        KC_LALT, KC_GRV, KC_NUBS, KC_NUHS, KC_NO,
        KC_I,    KC_M,
        KC_L,
        KC_SPC,  KC_ENT, KC_J,

        //right hand
               TG(2), KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS,
             KC_LBRC, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_RBRC,
                      KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,
               TG(3), KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                           KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RGUI,
        KC_RALT, KC_RCTL,
        KC_PGUP,
        KC_PGDN, KC_ENT, KC_SPC
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




