// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,                         &kp B,             &kp J,             &kp L,                          &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),                &kp G,             &kp M,             U_MT(LSHFT, N),                 U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             U_MT(LC(LS(LA(LGUI))), D),     &kp V,             &kp K,             U_MT(LC(LS(LA(LGUI))), H),      &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC),             U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPC),               U_LT(U_FUN, DEL),  U_NP,              U_NP

#define CONFIG_ZMK_MOUSE
#define CONFIG_ZMK_SLEEP
#define CONFIG_BT_CTLR_TX_PWR_PLUS_8
