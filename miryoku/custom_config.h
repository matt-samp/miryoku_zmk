// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom 4-layer layout: BASE, CURSOR, SYMBOL, NUMBER
// For 6-column Corne (42 keys total)

// LAYER DEFINITIONS

// BASE LAYER - QWERTY with homerow mods and layer access
#define MIRYOKU_LAYER_BASE \
&kp TAB,       &kp Q,         &kp W,         &kp E,         &kp R,         &kp T,         &kp Y,         &kp U,         &kp I,         &kp O,         &kp P,         &kp BSLH, \
&caps_word,    &mt LGUI A,    &mt LALT S,    &mt LCTRL D,   &mt LSHFT F,   &kp G,         &kp H,         &mt RSHFT J,   &mt RCTRL K,   &mt RALT L,    &mt RGUI SEMI, &kp PG_UP, \
&kp LSHFT,     &kp Z,         &kp X,         &kp C,         &kp V,         &kp B,         &kp N,         &kp M,         &kp COMMA,     &kp DOT,       &kp SLASH,     &kp PG_DN, \
                                             &kp ESC,       &lt U_NUMBER DEL, &lt U_CURSOR BSPC, &lt U_SYMBOL SPACE, &kp RET,    &kp LG(SPACE)

// CURSOR LAYER - Navigation and editing shortcuts
#define MIRYOKU_LAYER_CURSOR \
&none,         &none,         &none,         &kp LC(Z),     &kp LC(LS(Z)), &none,         &none,         &kp HOME,      &kp UP,        &kp END,       &none,         &none, \
&none,         &none,         &kp LC(X),     &kp LC(C),     &kp LC(V),     &kp LC(T),     &none,         &kp LEFT,      &kp DOWN,      &kp RIGHT,     &none,         &none, \
&none,         &none,         &none,         &kp LG(R),     &kp LC(V),     &kp LC(LS(T)), &none,         &kp LC(LEFT),  &kp LSHFT,     &kp LC(RIGHT), &kp LC(LS(TAB)), &kp LC(TAB), \
                                             &none,         &none,         &trans,        &none,         &none,         &none

// SYMBOL LAYER - Symbols and Bluetooth controls
#define MIRYOKU_LAYER_SYMBOL \
&bt BT_CLR,    &none,         &none,         &none,         &none,         &none,         &kp MINUS,     &kp LPAR,      &kp RPAR,      &kp EXCL,      &none,         &none, \
&bt BT_SEL 0,  &bt BT_SEL 1,  &bt BT_SEL 2,  &bt BT_SEL 3,  &none,         &none,         &kp QMARK,     &kp DOT,       &kp COMMA,     &none,         &none,         &none, \
&none,         &none,         &none,         &none,         &none,         &none,         &kp SLASH,     &kp SQT,       &kp LS(SQT),   &none,         &none,         &none, \
                                             &none,         &none,         &none,         &trans,        &none,         &none

// NUMBER LAYER - Numbers and arithmetic
#define MIRYOKU_LAYER_NUMBER \
&none,         &none,         &none,         &none,         &none,         &none,         &none,         &kp N7,        &kp N8,        &kp N9,        &kp PLUS,      &kp MINUS, \
&none,         &none,         &none,         &none,         &kp LSHFT,     &none,         &none,         &kp N4,        &kp N5,        &kp N6,        &kp ASTRK,     &kp SLASH, \
&none,         &none,         &none,         &none,         &none,         &none,         &none,         &kp N1,        &kp N2,        &kp N3,        &kp N0,        &none, \
                                             &none,         &trans,        &none,         &none,         &kp RET,       &none

// LAYER LIST - Tell Miryoku about all layers
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,    "Base") \
MIRYOKU_X(CURSOR,  "Cursor") \
MIRYOKU_X(SYMBOL,  "Symbol") \
MIRYOKU_X(NUMBER,  "Number")

// LAYER NUMBERS - Required for ZMK
#define MIRYOKU_LAYER_BASE 0
#define MIRYOKU_LAYER_CURSOR 1
#define MIRYOKU_LAYER_SYMBOL 2
#define MIRYOKU_LAYER_NUMBER 3

// Layer aliases for shorter references
#define U_BASE   MIRYOKU_LAYER_BASE
#define U_CURSOR MIRYOKU_LAYER_CURSOR
#define U_SYMBOL MIRYOKU_LAYER_SYMBOL
#define U_NUMBER MIRYOKU_LAYER_NUMBER

// MAPPING - Use all 42 keys of 6-column Corne
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
K00, K01, K02, K03, K04, K05,       K06, K07, K08, K09, K10, K11, \
K12, K13, K14, K15, K16, K17,       K18, K19, K20, K21, K22, K23, \
K24, K25, K26, K27, K28, K29,       K30, K31, K32, K33, K34, K35, \
               K36, K37, K38,       K39, K40, K41 \
) \
K00, K01, K02, K03, K04, K05,       K06, K07, K08, K09, K10, K11, \
K12, K13, K14, K15, K16, K17,       K18, K19, K20, K21, K22, K23, \
K24, K25, K26, K27, K28, K29,       K30, K31, K32, K33, K34, K35, \
                    K36, K37, K38,       K39, K40, K41

// LAYOUT EXPLANATION:
//
// BASE LAYER:
// [TAB] [Q] [W] [E] [R] [T]       [Y] [U] [I] [O] [P] [\]
// [CAPS] [GUI/A] [CTRL/S] [ALT/D] [SHFT/F] [G]   [H] [SHFT/J] [ALT/K] [CTRL/L] [GUI/;] [PGUP]
// [SHFT] [Z] [X] [C] [V] [B]      [N] [M] [,] [.] [/] [PGDN]
//           [ESC] [NUM/DEL] [CURSOR/BSPC]   [SYMBOL/SPC] [RET] [GUI+SPC]
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
// - All layers use &none for unused keys
// - Layer controlling keys use &trans when on their own layer
// - Homerow mods: GUI/ALT/CTRL/SHIFT on ASDF and JKL;
// - CAPS WORD on base layer left outer home position
