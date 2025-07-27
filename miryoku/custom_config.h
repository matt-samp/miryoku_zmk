// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku layout for 6-column Corne
// Uses standard Miryoku 36-key layout with custom layer definitions

// CUSTOM LAYER DEFINITIONS

// BASE LAYER - QWERTY with homerow mods and layer access
#define MIRYOKU_LAYER_BASE \
&kp Q,         &kp W,         &kp E,         &kp R,         &kp T,         &kp Y,         &kp U,         &kp I,         &kp O,         &kp P, \
&mt LGUI A,    &mt LALT S,    &mt LCTRL D,   &mt LSHFT F,   &kp G,         &kp H,         &mt RSHFT J,   &mt RCTRL K,   &mt RALT L,    &mt RGUI SEMI, \
&kp Z,         &kp X,         &kp C,         &kp V,         &kp B,         &kp N,         &kp M,         &kp COMMA,     &kp DOT,       &kp SLASH, \
                              &kp ESC,       &lt U_NUMBER DEL, &lt U_CURSOR BSPC, &lt U_SYMBOL SPACE, &kp RET,    &kp LG(SPACE)

// CURSOR LAYER - Navigation and editing shortcuts
#define MIRYOKU_LAYER_CURSOR \
&none,         &none,         &kp LC(Z),     &kp LC(LS(Z)), &none,         &none,         &kp HOME,      &kp UP,        &kp END,       &none, \
&none,         &kp LC(X),     &kp LC(C),     &kp LC(V),     &kp LC(T),     &none,         &kp LEFT,      &kp DOWN,      &kp RIGHT,     &none, \
&none,         &none,         &kp LG(R),     &kp LC(V),     &kp LC(LS(T)), &none,         &kp LC(LEFT),  &kp LSHFT,     &kp LC(RIGHT), &kp LC(LS(TAB)), \
                              &none,         &none,         &trans,        &none,         &none,         &none

// SYMBOL LAYER - Symbols and Bluetooth controls
#define MIRYOKU_LAYER_SYMBOL \
&none,         &none,         &none,         &none,         &none,         &kp MINUS,     &kp LPAR,      &kp RPAR,      &kp EXCL,      &none, \
&bt BT_SEL 0,  &bt BT_SEL 1,  &bt BT_SEL 2,  &bt BT_SEL 3,  &none,         &kp QMARK,     &kp DOT,       &kp COMMA,     &none,         &none, \
&bt BT_CLR,    &none,         &none,         &none,         &none,         &kp SLASH,     &kp SQT,       &kp LS(SQT),   &none,         &none, \
                              &none,         &none,         &none,         &trans,        &none,         &none

// NUMBER LAYER - Numbers and arithmetic
#define MIRYOKU_LAYER_NUMBER \
&none,         &none,         &none,         &none,         &none,         &none,         &kp N7,        &kp N8,        &kp N9,        &kp PLUS, \
&none,         &none,         &none,         &kp LSHFT,     &none,         &none,         &kp N4,        &kp N5,        &kp N6,        &kp ASTRK, \
&none,         &none,         &none,         &none,         &none,         &none,         &kp N1,        &kp N2,        &kp N3,        &kp N0, \
                              &none,         &trans,        &none,         &none,         &kp RET,       &none

// LAYER LIST - Tell Miryoku about all layers
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,    "Base") \
MIRYOKU_X(CURSOR,  "Cursor") \
MIRYOKU_X(SYMBOL,  "Symbol") \
MIRYOKU_X(NUMBER,  "Number")

// Layer number definitions for ZMK
#define MIRYOKU_LAYER_BASE 0
#define MIRYOKU_LAYER_CURSOR 1
#define MIRYOKU_LAYER_SYMBOL 2
#define MIRYOKU_LAYER_NUMBER 3

// Layer aliases for shorter references (used in layer-tap keys)
#define U_BASE   0
#define U_CURSOR 1
#define U_SYMBOL 2
#define U_NUMBER 3

// LAYOUT EXPLANATION:
//
// This configuration uses the standard 36-key Miryoku layout.
// The 6-column Corne will use the center 3x5 + 3 thumb keys per hand.
// The outer columns (first and last columns) will be mapped to &none by default.
//
// If you want to use the outer columns, you would need to:
// 1. Define a custom per-layer mapping (MIRYOKU_LAYERMAPPING_BASE, etc.)
// 2. Or use the existing extended mapping options if available
//
// Current layout (only center area used):
// [none] [Q] [W] [E] [R] [T]       [Y] [U] [I] [O] [P] [none]
// [none] [GUI/A] [ALT/S] [CTRL/D] [SHFT/F] [G]   [H] [SHFT/J] [CTRL/K] [ALT/L] [GUI/;] [none]
// [none] [Z] [X] [C] [V] [B]      [N] [M] [,] [.] [/] [none]
//           [ESC] [NUM/DEL] [CURSOR/BSPC]   [SYMBOL/SPC] [RET] [GUI+SPC]
//
// The outer columns will be mapped to &none and won't do anything.
// This is the standard way Miryoku handles extra keys on wider keyboards.
