// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom Miryoku layout for 6-column Corne (42 keys)
// Uses the 42-key mapping with custom layer definitions

// CUSTOM LAYER DEFINITIONS - 42 keys total (3x12 + 6 thumbs)

// BASE LAYER - QWERTY with homerow mods and layer access
#define MIRYOKU_LAYER_BASE \
&kp TAB,       &kp Q,         &kp W,         &kp E,         &kp R,         &kp T,         &kp Y,         &kp U,         &kp I,         &kp O,         &kp P,         &kp BSLH, \
&caps_word,    &mt LGUI A,    &mt LALT S,    &mt LCTRL D,   &mt LSHFT F,   &kp G,         &kp H,         &mt RSHFT J,   &mt RCTRL K,   &mt RALT L,    &mt RGUI SEMI, &kp PG_UP, \
&kp LSHFT,     &kp Z,         &kp X,         &kp C,         &kp V,         &kp B,         &kp N,         &kp M,         &kp COMMA,     &kp DOT,       &kp SLASH,     &kp PG_DN, \
&none,         &none,         &kp ESC,       &lt U_NUMBER DEL, &lt U_CURSOR BSPC, &kp LG(SPACE), &lt U_SYMBOL SPACE, &kp RET,    &none,         &none,         &none,         &none

// CURSOR LAYER - Navigation and editing shortcuts
#define MIRYOKU_LAYER_CURSOR \
&none,         &none,         &none,         &kp LC(Z),     &kp LC(LS(Z)), &none,         &none,         &kp HOME,      &kp UP,        &kp END,       &none,         &none, \
&none,         &none,         &kp LC(X),     &kp LC(C),     &kp LC(V),     &kp LC(T),     &none,         &kp LEFT,      &kp DOWN,      &kp RIGHT,     &none,         &none, \
&none,         &none,         &none,         &kp LG(R),     &kp LC(V),     &kp LC(LS(T)), &none,         &kp LC(LEFT),  &kp LSHFT,     &kp LC(RIGHT), &kp LC(LS(TAB)), &kp LC(TAB), \
&none,         &none,         &none,         &none,         &trans,        &none,         &none,         &none,         &none,         &none,         &none,         &none

// SYMBOL LAYER - Symbols and Bluetooth controls
#define MIRYOKU_LAYER_SYMBOL \
&bt BT_CLR,    &none,         &none,         &none,         &none,         &none,         &kp MINUS,     &kp LPAR,      &kp RPAR,      &kp EXCL,      &none,         &none, \
&bt BT_SEL 0,  &bt BT_SEL 1,  &bt BT_SEL 2,  &bt BT_SEL 3,  &none,         &none,         &kp QMARK,     &kp DOT,       &kp COMMA,     &none,         &none,         &none, \
&none,         &none,         &none,         &none,         &none,         &none,         &kp SLASH,     &kp SQT,       &kp LS(SQT),   &none,         &none,         &none, \
&none,         &none,         &none,         &none,         &none,         &none,         &trans,        &none,         &none,         &none,         &none,         &none

// NUMBER LAYER - Numbers and arithmetic
#define MIRYOKU_LAYER_NUMBER \
&none,         &none,         &none,         &none,         &none,         &none,         &none,         &kp N7,        &kp N8,        &kp N9,        &kp PLUS,      &kp MINUS, \
&none,         &none,         &none,         &none,         &kp LSHFT,     &none,         &none,         &kp N4,        &kp N5,        &kp N6,        &kp ASTRK,     &kp SLASH, \
&none,         &none,         &none,         &none,         &none,         &none,         &none,         &kp N1,        &kp N2,        &kp N3,        &kp N0,        &none, \
&none,         &none,         &none,         &trans,        &none,         &none,         &none,         &kp RET,       &none,         &none,         &none,         &none

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
// This configuration uses the full 42-key layout for 6-column Corne.
// All keys are utilized as follows:
//
// BASE LAYER:
// [TAB] [Q] [W] [E] [R] [T]       [Y] [U] [I] [O] [P] [\]
// [CAPS] [GUI/A] [ALT/S] [CTRL/D] [SHFT/F] [G]   [H] [SHFT/J] [CTRL/K] [ALT/L] [GUI/;] [PGUP]
// [SHFT] [Z] [X] [C] [V] [B]      [N] [M] [,] [.] [/] [PGDN]
// [none] [none] [ESC] [NUM/DEL] [CURSOR/BSPC] [GUI+SPC]   [SYMBOL/SPC] [RET] [none] [none] [none] [none]
//
// CURSOR LAYER (hold CURSOR/BSPC):
// Navigation, undo/redo, copy/paste shortcuts
//
// SYMBOL LAYER (hold SYMBOL/SPC):
// Bluetooth controls and common symbols
//
// NUMBER LAYER (hold NUM/DEL):
// Number pad and arithmetic operators
//
// NOTES:
// - Uses the full 42-key Corne layout with Miryoku's 42-key mapping
// - Layer controlling keys use &trans when on their own layer
// - Homerow mods: GUI/ALT/CTRL/SHIFT on ASDF and JKLH (mirrored)
// - CAPS WORD on base layer left outer home position
// - Extra thumb keys and some outer positions are set to &none but can be customized
