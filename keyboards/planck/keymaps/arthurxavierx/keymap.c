#include QMK_KEYBOARD_H
#include "keymap_br_abnt2.h"

#define ____ KC_TRNS
#define xxxx KC_NO

#define CMD_A LCMD_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)

#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L RALT_T(KC_L)
#define CMD_ACUT RCMD_T(BR_ACUT)

#undef BR_BSLS
#define BR_BSLS KC_GRV
#undef BR_PIPE
#define BR_PIPE S(BR_BSLS)
#undef BR_QUOT
#define BR_QUOT KC_NUBS
#undef BR_DQUO
#define BR_DQUO S(BR_QUOT)

#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *       6                 5                       4                 3
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │  Q  │  W  │  E  │  R  │  T  │           │  Y  │  U  │  I  │  O  │  P  │
 * │     │    Del    │    Caps   │           │    Caps   │    Del    │     │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  A  │  S  │  D  │  F  │  G  │           │  H  │  J  │  K  │  L  │  ´  │   (tap)
 * │     │    Bspc  Esc    │     │     0     │     │    Esc   Bspc   │     │   (combo)
 * │ Cmd │ Alt │ Ctl │ Sft │     │           │     │ Sft │ Ctl │ Alt │ Cmd │   (hold)
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  Z  │  X  │  C  │  V  │  B  │           │  N  │  M  │  ,  │  .  │  ;  │
 * │     │     │     │     │     │           │     │     │    Del    │     │
 * └─────┴─────┴─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *       7           │ Adj │ Num │   Space   │ Sym │ Adj │           2
 *                   └─────┴─────┴───────────┴─────┴─────┘
 *                         8                       1
 */
[0] = LAYOUT_planck_grid(
  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  xxxx,   xxxx,   KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,
  CMD_A, ALT_S, CTL_D, SFT_F, KC_G,  xxxx,   xxxx,   KC_H,  SFT_J, CTL_K,   ALT_L,  CMD_ACUT,
  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  xxxx,   xxxx,   KC_N,  KC_M,  KC_COMM, KC_DOT, BR_SCLN,
  xxxx,  xxxx,  xxxx,  TT(3), MO(1), KC_SPC, KC_SPC, MO(2), TT(3), xxxx,    xxxx,   xxxx
),

/* Numbers
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │  1  │  2  │  3  │  4  │  5  │           │  6  │  7  │  8  │  9  │  0  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  /  │  ?  │  -  │  =  │  '  │           │  ←  │  ↓  │  ↑  │  →  │  ~  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  \  │     │  ç  │  [  │  ]  │           │  {  │  }  │  ,  │  .  │  ;  │
 * └─────┴─────┴─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *                   │ Adj │     │   Space   │ Sym │ Adj │
 *                   └─────┴─────┴───────────┴─────┴─────┘
 */
[1] = LAYOUT_planck_grid(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    ____, ____, KC_6,    KC_7,    KC_8,    KC_9,     KC_0,
  BR_SLSH, BR_QUES, BR_MINS, BR_EQL,  BR_QUOT, ____, ____, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, BR_TILD,
  BR_BSLS, ____,    BR_CCED, BR_LBRC, BR_RBRC, ____, ____, BR_LCBR, BR_RCBR, ____,    ____,     BR_SCLN,
  ____, ____, ____, ____, ____, ____, ____,  ____, ____, ____, ____, ____
),

/* Symbols
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │  1  │  2  │  3  │  4  │  5  │           │  6  │  7  │  8  │  9  │  0  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  /  │  ?  │  _  │  +  │  "  │           │ A-← │ A-↓ │ A-↑ │ A-→ │  ^  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  |  │     │  ç  │  [  │  ]  │           │  {  │  }  │  <  │  >  │  :  │
 * └─────┴─────┴─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *                   │ Adj │     │   Space   │     │ Adj │
 *                   └─────┴─────┴───────────┴─────┴─────┘
 */
[2] = LAYOUT_planck_grid(
  BR_EXLM, BR_AT,   BR_HASH, BR_DLR,  BR_PERC, ____, ____, BR_DIAE,    BR_AMPR,    BR_ASTR,  BR_LPRN,     BR_RPRN,
  BR_SLSH, BR_QUES, BR_UNDS, BR_PLUS, BR_DQUO, ____, ____, A(KC_LEFT), A(KC_DOWN), A(KC_UP), A(KC_RIGHT), BR_CIRC,
  BR_PIPE, ____,    BR_CCED, BR_LBRC, BR_RBRC, ____, ____, BR_LCBR,    BR_RCBR,    BR_LABK,  BR_RABK,     BR_COLN,
  ____, ____, ____, ____, ____, ____, ____,  ____, ____, ____, ____, ____
),

/* Adjust
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │ F11 │ MS↑ │     │ BR- │ BR+ │           │ Prv │ Ply │ Nxt │ VO- │ VO+ │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │ MS← │ MS↓ │ MS→ │     │     │           │  ←  │  ↓  │  ↑  │  →  │ Rbt │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │     │ G-T │ G-' │     │     │           │ MS← │ MS↑ │ MS↓ │ MS→ │     │
 * └─────┼─────┼─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *       │ RST │     │     │ Scr │   L btn   │ Scr │     │
 *       └─────┘     └─────┴─────┴───────────┴─────┴─────┘
 */
[3] = LAYOUT_planck_grid(
  KC_F11, KC_MS_U,  ____, KC_BRID, KC_BRIU, ____, ____, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU,
  KC_MS_L, KC_MS_D, KC_MS_R, ____, ____, ____, ____, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_BTN2,
  ____, ____, G(KC_TAB), G(BR_QUOT), ____, ____, ____, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, ____,
  ____, RESET, ____, ____, MO(4), KC_BTN1, KC_BTN1, MO(4), ____, ____, ____, ____
),

/* Scroll
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │ F11 │ WH↑ │     │ BR- │ BR+ │           │ Prv │ Ply │ Nxt │ VO- │ VO+ │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │ WH← │ WH↓ │ WH→ │     │     │           │  ←  │  ↓  │  ↑  │  →  │ Rbt │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │     │ G-T │ G-' │     │     │           │ MS← │ MS↑ │ MS↓ │ MS→ │     │
 * └─────┼─────┼─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *       │ RST │     │     │ Scr │   L btn   │ Scr │     │
 *       └─────┘     └─────┴─────┴───────────┴─────┴─────┘
 */
[4] = LAYOUT_planck_grid(
  ____, KC_WH_D,  ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
  KC_WH_R, KC_WH_U, KC_WH_L, ____, ____, ____, ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____
)

};

// Light all LEDs in white when caps lock is active.
const rgblight_segment_t PROGMEM rgb_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 8, HSV_WHITE});

// Light all LEDs in red when the numbers layer is active.
const rgblight_segment_t PROGMEM rgb_numbers_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 8, HSV_RED});

// Light all LEDs in green when the symbols layer is active.
const rgblight_segment_t PROGMEM rgb_symbols_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 8, HSV_GREEN});

// Light all LEDs in blue when the adjust layer is active.
const rgblight_segment_t PROGMEM rgb_adjust_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 8, HSV_BLUE});

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  rgb_capslock_layer,
  rgb_numbers_layer,
  rgb_symbols_layer,
  rgb_adjust_layer
);

void keyboard_post_init_user(void) {
  rgblight_disable_noeeprom();
  rgblight_layers = rgb_layers;
}

bool led_update_user(led_t led_state) {
  rgblight_set_layer_state(0, led_state.caps_lock);
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(1, layer_state_cmp(state, 1));
  rgblight_set_layer_state(2, layer_state_cmp(state, 2));
  rgblight_set_layer_state(3, layer_state_cmp(state, 3));
  return state;
}
