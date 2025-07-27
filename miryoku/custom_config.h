// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku layout for Corne (40 keys)
// Uses the standard Corne mapping with custom layer definitions

// BASE LAYER - QWERTY with homerow mods and layer access
// 40 keys total: 10 + 10 + 10 + 10 (includes all thumb positions)
#define MIRYOKU_LAYER_BASE \
&kp Q,         &kp W,         &kp E,         &kp R,         &kp T,         &kp Y,         &kp U,         &kp I,         &kp O,         &kp P, \
&mt LGUI A,    &mt LALT S,    &mt LCTRL D,   &mt LSHFT F,   &kp G,         &kp H,         &mt RSHFT J,   &mt RCTRL K,   &mt RALT L,    &mt RGUI SEMI, \
&kp Z,         &kp X,         &kp C,         &kp V,         &kp B,         &kp N,         &kp M,         &kp COMMA,     &kp DOT,       &kp SLASH, \
&kp LCTRL,     &kp LALT,      &kp ESC,       &lt U_NUMBER DEL, &lt U_CURSOR BSPC, &lt U_SYMBOL SPACE, &kp RET,       &caps_word,    &kp RALT,      &kp RCTRL

// CURSOR LAYER - Navigation and editing shortcuts
#define MIRYOKU_LAYER_CURSOR \
&none,         &none,         &kp LC(Z),     &kp LC(LS(Z)), &none,         &none,         &kp HOME,      &kp UP,        &kp END,       &none, \
&none,         &kp LC(X),     &kp LC(C),     &kp LC(V),     &kp LC(T),     &none,         &kp LEFT,      &kp DOWN,      &kp RIGHT,     &none, \
&none,         &none,         &kp LG(R),     &kp LC(V),     &kp LC(LS(T)), &none,         &kp LC(LEFT),  &kp LSHFT,     &kp LC(RIGHT), &kp LC(LS(TAB)), \
&none,         &none,         &none,         &none,         &trans,        &none,         &none,         &none,         &none,         &none

// SYMBOL LAYER - Symbols and Bluetooth controls
#define MIRYOKU_LAYER_SYMBOL \
&bt BT_CLR,    &none,         &none,         &none,         &none,         &kp MINUS,     &kp LPAR,      &kp RPAR,      &kp EXCL,      &none, \
&bt BT_SEL 0,  &bt BT_SEL 1,  &bt BT_SEL 2,  &bt BT_SEL 3,  &none,         &kp QMARK,     &kp DOT,       &kp COMMA,     &none,         &none, \
&none,         &none,         &none,         &none,         &none,         &kp SLASH,     &kp SQT,       &kp LS(SQT),   &none,         &none, \
&none,         &none,         &none,         &none,         &none,         &trans,        &none,         &none,         &none,         &none

// NUMBER LAYER - Numbers and arithmetic
#define MIRYOKU_LAYER_NUMBER \
&none,         &none,         &none,         &none,         &none,         &none,         &kp N7,        &kp N8,        &kp N9,        &kp PLUS, \
&none,         &none,         &none,         &kp LSHFT,     &none,         &none,         &kp N4,        &kp N5,        &kp N6,        &kp ASTRK, \
&none,         &none,         &none,         &none,         &none,         &none,         &kp N1,        &kp N2,        &kp N3,        &kp N0, \
&none,         &none,         &none,         &trans,        &none,         &none,         &kp RET,       &none,         &none,         &none

// Layer aliases for shorter references (used in layer-tap keys)
#define U_BASE   0
#define U_CURSOR 1
#define U_SYMBOL 2
#define U_NUMBER 3
