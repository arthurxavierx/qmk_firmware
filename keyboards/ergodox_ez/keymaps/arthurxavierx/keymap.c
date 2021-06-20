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
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │  Q  │  W  │  E  │  R  │  T  │           │  Y  │  U  │  I  │  O  │  P  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  A  │  S  │  D  │  F  │  G  │           │  H  │  J  │  K  │  L  │  ´  │   (tap)
 * │     │    Bspc  Esc    │     │           │     │    Esc   Bspc   │     │   (combo)
 * │ Cmd │ Alt │ Ctl │ Sft │     │           │     │ Sft │ Ctl │ Alt │ Cmd │   (hold)
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  Z  │  X  │  C  │  V  │  B  │           │  N  │  M  │  ,  │  .  │  ;  │
 * │     │     │     │     │     │           │     │     │    Del    │     │
 * └─────┴─────┴─────┼─────┼─────┼─────┬─────┼─────┼─────┼─────┴─────┴─────┘
 *                   │ Adj │ Num │   Space   │ Sym │ Adj │
 *                   └─────┴─────┴─────┴─────┴─────┴─────┘
 */
[0] = LAYOUT_ergodox(
  xxxx, xxxx,  xxxx,  xxxx,  xxxx,  xxxx, xxxx,
  xxxx, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, xxxx,
  xxxx, CMD_A, ALT_S, CTL_D, SFT_F, KC_G,
  xxxx, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, xxxx,
  xxxx, xxxx,  xxxx,  TT(3), MO(1),
          xxxx, xxxx,
                xxxx,
  KC_SPC, xxxx, xxxx,
  ///
  xxxx, xxxx,  xxxx,  xxxx,    xxxx,   xxxx,     xxxx,
  xxxx, KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     xxxx,
        KC_H,  SFT_J, CTL_K,   ALT_L,  CMD_ACUT, xxxx,
  xxxx, KC_N,  KC_M,  KC_COMM, KC_DOT, BR_SCLN,  xxxx,
        MO(2), TT(3), xxxx,    xxxx,   xxxx,
  xxxx, xxxx,
  xxxx,
  xxxx, xxxx,  KC_SPC
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
[1] = LAYOUT_ergodox(
  ____, ____,    ____,    ____,    ____,    ____,    ____,
  ____, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    ____,
  ____, BR_SLSH, BR_QUES, BR_MINS, BR_EQL,  BR_QUOT,
  ____, BR_BSLS, ____,    BR_CCED, BR_LBRC, BR_RBRC, ____,
  ____, ____,    ____,    ____,    ____,
        ____, ____,
              ____,
  ____, ____, ____,
  ///
  ____, ____,    ____,    ____,  ____,     ____,    ____,
  ____, KC_6,    KC_7,    KC_8,  KC_9,     KC_0,    ____,
        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, BR_TILD, ____,
  ____, BR_LCBR, BR_RCBR, ____,  ____,     BR_SCLN, ____,
        ____,    ____,    ____,  ____,  ____,
  ____, ____,
  ____,
  ____, ____, ____
),

/* Symbols
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │  !  │  @  │  #  │  $  │  %  │           │  ¨  │  &  │  *  │  (  │  )  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  /  │  ?  │  _  │  +  │  "  │           │ A-← │ A-↓ │ A-↑ │ A-→ │  ^  │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │  |  │     │  ç  │  [  │  ]  │           │  {  │  }  │  <  │  >  │  :  │
 * └─────┴─────┴─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *                   │ Adj │     │   Space   │     │ Adj │
 *                   └─────┴─────┴───────────┴─────┴─────┘
 */
[2] = LAYOUT_ergodox(
  ____, ____,    ____,    ____,    ____,    ____,    ____,
  ____, BR_EXLM, BR_AT,   BR_HASH, BR_DLR,  BR_PERC, ____,
  ____, BR_SLSH, BR_QUES, BR_UNDS, BR_PLUS, BR_DQUO,
  ____, BR_PIPE, ____,    BR_CCED, BR_LBRC, BR_RBRC, ____,
  ____, ____,      ____,    ____,    ____,
        ____, ____,
              ____,
  ____, ____, ____,
  ///
  ____, ____,       ____,       ____,     ____,        ____,    ____,
  ____, BR_DIAE,    BR_AMPR,    BR_ASTR,  BR_LPRN,     BR_RPRN, ____,
        A(KC_LEFT), A(KC_DOWN), A(KC_UP), A(KC_RIGHT), BR_CIRC, ____,
  ____, BR_LCBR,    BR_RCBR,    BR_LABK,  BR_RABK,     BR_COLN, ____,
        ____,       ____,       ____,     ____,        ____,
  ____, ____,
  ____,
  ____, ____, ____
),

/* Adjust
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │ F11 │ MS↑ │     │ BR- │ BR+ │           │ Prv │ Ply │ Nxt │ VO- │ VO+ │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │ MS← │ MS↓ │ MS→ │     │     │           │  ←  │  ↓  │  ↑  │  →  │ Rbt │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │     │ G-T │ G-' │     │     │           │ MS← │ MS↓ │ MS↑ │ MS→ │     │
 * └─────┼─────┼─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *       │ RST │     │     │ Scr │   L btn   │ Scr │     │
 *       └─────┘     └─────┴─────┴───────────┴─────┴─────┘
 */
[3] = LAYOUT_ergodox(
  ____, ____,    ____,    ____,    ____,    ____,    ____,
  ____, KC_F11,  KC_MS_U, ____,    KC_BRID, KC_BRIU, ____,
  ____, KC_MS_L, KC_MS_D, KC_MS_R, ____,    ____,
  ____, ____,    G(KC_TAB), G(BR_QUOT), ____, ____, ____,
  ____, RESET,   ____,    ____,    MO(4),
           ____, ____,
                 ____,
  KC_BTN1, ____, ____,
  ///
  ____, ____,    ____,    ____,    ____,     ____,    ____,
  ____, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD,  KC_VOLU, ____,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_BTN2, ____,
  ____, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  ____,    ____,
        MO(4),   ____, ____, ____, ____,
  ____, ____,
  ____,
  ____, ____, KC_BTN1
),

/* Scroll
 * ┌─────┬─────┬─────┬─────┬─────┐           ┌─────┬─────┬─────┬─────┬─────┐
 * │ F11 │ WH↑ │     │ BR- │ BR+ │           │ Prv │ Ply │ Nxt │ VO- │ VO+ │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │ WH← │ WH↓ │ WH→ │     │     │           │  ←  │  ↓  │  ↑  │  →  │ Rbt │
 * ├─────┼─────┼─────┼─────┼─────┤           ├─────┼─────┼─────┼─────┼─────┤
 * │     │ G-T │ G-' │     │     │           │ MS← │ MS↓ │ MS↑ │ MS→ │     │
 * └─────┼─────┼─────┼─────┼─────┼───────────┼─────┼─────┼─────┴─────┴─────┘
 *       │ RST │     │     │     │   L btn   │     │     │
 *       └─────┘     └─────┴─────┴───────────┴─────┴─────┘
 */
[4] = LAYOUT_ergodox(
  ____, ____,    ____,      ____,       ____, ____, ____,
  ____, ____,    KC_WH_D,   ____,       ____, ____, ____,
  ____, KC_WH_R, KC_WH_U,   KC_WH_L,    ____, ____,
  ____, ____,    ____,    ____,    ____,    ____,    ____,
  ____, ____,    ____,      ____,       ____,
        ____, ____,
              ____,
  ____, ____, ____,
  ///
  ____, ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____,
  ____, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, ____, ____,
        ____, ____, ____, ____, ____,
  ____, ____,
  ____,
  ____, ____, ____
)

};

void keyboard_post_init_user(void) {
  ergodox_led_all_set(LED_BRIGHTNESS_LO);
};

bool led_update_user(led_t led_state) {
  if (led_state.caps_lock) {
    ergodox_right_led_3_on();
  } else {
    ergodox_right_led_3_off();
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
  }

  return state;
};
