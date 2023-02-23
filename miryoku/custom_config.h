// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,                         &kp B,             &kp J,             &kp L,                          &kp U,             &kp Y,             &kp SQT,           \
U_GQT(LGUI, A),     U_GQT(LALT, R),     U_GQT(LCTRL, S),    U_PHT_LEFT(LSHFT, T),                &kp G,             &kp M,             U_PHT_RIGHT(LSHFT, N),                 U_GQT(LCTRL, E),    U_GQT(LALT, I),     U_GQT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_GQT(RALT, X),     &kp C,             U_GQT(LC(LS(LA(LGUI))), D),     &kp V,             &kp K,             U_GQT(LC(LS(LA(LGUI))), H),      &kp COMMA,         U_GQT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC),             U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPC),               U_LT(U_FUN, DEL),  U_NP,              U_NP

#define CONFIG_ZMK_MOUSE
#define CONFIG_ZMK_SLEEP
#define CONFIG_BT_CTLR_TX_PWR_PLUS_8
