// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,         &kp W,         &kp E,         &kp R,         &kp T,         &kp Y,         &kp U,         &kp I,         &kp O,         &kp P, \
&mt LGUI A,    &mt LALT S,    &mt LCTRL D,   &mt LSHFT F,   &kp G,         &kp H,         &mt RSHFT J,   &mt RCTRL K,   &mt LALT L,    &mt RGUI SCLN, \
&kp Z,         &kp X,         &kp C,         &kp V,         &kp B,         &kp N,         &kp M,         &kp COMMA,     &kp DOT,       &kp SLASH, \
               &lt U_MEDIA ESC, &lt U_NAV SPACE, &lt U_HAPPY TAB, &lt U_SYM SPACE, &lt U_NUM RET, &lt U_FUN LG(SPACE)

#if defined (MIRYOKU_KEYBOARD_CORNE) || !defined (MIRYOKU_KEYBOARD_CORNE)
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
K00, K01, K02, K03, K04,                 K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,                 K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,                 K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34, N35,       N36, K37, K38, K39, N40, N41 \
) \
&kp TAB,     K00, K01, K02, K03, K04,     K05, K06, K07, K08, K09, &kp MINUS, \
&caps_word,     K10, K11, K12, K13, K14,     K15, K16, K17, K18, K19, &kp HOME, \
&kp LSHFT,     K20, K21, K22, K23, K24,     K25, K26, K27, K28, K29, &kp END, \
                            K32, K33, K34,     K37, K38, K39
#endif

#define MIRYOKU_LAYER_HAPPY \
&kp EXCL,      &kp AT,        &kp HASH,      &kp DLLR,      &kp PRCNT,     &kp CARET,     &kp AMPS,      &kp ASTRK,     &kp LPAR,      &kp RPAR, \
&kp LGUI,      &kp LALT,      &kp LCTRL,     &kp LSHFT,     &trans,        &trans,        &kp RSHFT,     &kp RCTRL,     &kp LALT,      &kp RGUI, \
&trans,        &trans,        &trans,        &trans,        &trans,        &trans,        &trans,        &trans,        &trans,        &trans, \
               &trans,        &trans,        &trans,        &trans,        &trans,        &trans

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(HAPPY,  "Happy")

// STEP 3: Define layer numbers (required for ZMK)
#define MIRYOKU_LAYER_BASE 0
#define MIRYOKU_LAYER_EXTRA 1
#define MIRYOKU_LAYER_TAP 2
#define MIRYOKU_LAYER_BUTTON 3
#define MIRYOKU_LAYER_NAV 4
#define MIRYOKU_LAYER_MOUSE 5
#define MIRYOKU_LAYER_MEDIA 6
#define MIRYOKU_LAYER_NUM 7
#define MIRYOKU_LAYER_SYM 8
#define MIRYOKU_LAYER_FUN 9
#define MIRYOKU_LAYER_HAPPY 10
