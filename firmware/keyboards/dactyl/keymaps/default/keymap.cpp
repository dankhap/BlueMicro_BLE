/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"


#if KEYBOARD_SIDE == SINGLE
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
        KC_EQL   , KC_1   , KC_2         , KC_3,    KC_4,     KC_5, 
        KC_DEL   , KC_Q   , KC_W         , KC_E,    KC_R,     KC_T, 
        KC_BSPC  , KC_A   , KC_S         , KC_D,    KC_F,     KC_G,
        KC_LSHIFT, KC_Z   , KC_X         , KC_C,    KC_V,     KC_B,
        KC_GRV   , KC_QUOT, KC_PLUS, KC_LEFT, KC_RIGHT,
                                                             KC_APP , KC_LGUI,
                                                                      KC_HOME,
                                                   KC_SPACE, KC_BSPC, KC_END
    )};

void setupKeymap() {

   // no layers for master keymap
   // this is a keymap that's used for testing that each key is responding properly to key presses
   // flash this keymap to both left and right to test whether each half works properly.
   // once tested, you can flash the left and right to their respective halves.

}

void process_user_macros(uint16_t macroid)
{
	
}	

void process_user_layers(uint16_t layermask)
{
	
}	
#endif


#if KEYBOARD_SIDE == LEFT

/* Qwerty
* ,-----------------------------------------.           
* |   =  |   1  |   2  |   3  |   4  |   5  |           
* |------+------+------+------+------+------|           
* | Del  |   Q  |   W  |   E  |   R  |   T  |           
* |------+------+------+------+------+------|           
* | BkSp |   A  |   S  |   D  |   F  |   G  |           
* |------+------+------+------+------+------|           
* |LShift|Z/Ctrl|   X  |   C  |   V  |   B  |           
* |------+------+------+------+------+------'           
* |Grv/L1|  '"  |AltShf| Left | Right|                  
* `----------------------------------'                  
*                                      ,-------------.  
*                                      | App  | LGui |  
*                               ,------|------|------|  
*                               |      |      | Home |  
*                               | Space|Backsp|------|  
*                               |      |ace   | End  |  
*                               `--------------------'  
 */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
        KC_EQL   , KC_1  , KC_2         , KC_3,    KC_4,     KC_5, 
        KC_DEL   , KC_Q  , KC_W         , KC_E,    KC_R,     KC_T, 
        KC_BSPC  , KC_A  , KC_S         , KC_D,    KC_F,     KC_G,
        KC_LSHIFT, KC_NO , KC_X         , KC_C,    KC_V,     KC_B,
        KC_NO   , KC_QUOT, LALT(KC_LSFT), KC_LEFT, KC_RIGHT,
                                                             KC_APP , KC_LGUI,
                                                                      KC_HOME,
                                                   KC_SPACE, KC_BSPC, KC_END
    )};

 
void setupKeymap() {

/* Qwerty
* ,-----------------------------------------.           
* |   =  |   1  |   2  |   3  |   4  |   5  |           
* |------+------+------+------+------+------|           
* | Del  |   Q  |   W  |   E  |   R  |   T  |           
* |------+------+------+------+------+------|           
* | BkSp |   A  |   S  |   D  |   F  |   G  |           
* |------+------+------+------+------+------|           
* |LShift|Z/Ctrl|   X  |   C  |   V  |   B  |           
* |------+------+------+------+------+------'           
* |Grv/L1|  '"  |AltShf| Left | Right|                  
* `----------------------------------'                  
*                                      ,-------------.  
*                                      | App  | LGui |  
*                               ,------|------|------|  
*                               |      |      | Home |  
*                               | Space|Backsp|------|  
*                               |      |ace   | End  |  
*                               `--------------------'  
 */

uint32_t tap[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO , KC_Z , KC_NO, KC_NO, KC_NO, KC_NO,
        KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO,
                                            KC_NO, KC_NO,
                                                   KC_NO,
                                     KC_NO, KC_NO, KC_NO
    );
 uint32_t hold[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO  , KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO,
        L_LOWER, KC_NO  , KC_NO, KC_NO, KC_NO,
                                               KC_NO, KC_NO,
                                                      KC_NO,
                                        KC_NO, KC_NO, KC_NO
    );   


/* Lower
* ,-----------------------------------------.         
* |Versn |  F1  |  F2  |  F3  |  F4  |  F5  |         
* |------+------+------+------+------+------|         
* |      |   !  |   @  |   {  |   }  |   |  |         
* |------+------+------+------+------+------|         
* |      |   #  |   $  |   (  |   )  |   `  |         
* |------+------+------+------+------+------|         
* |      |   %  |   ^  |   [  |   ]  |   ~  |         
* |------+------+------+------+------+------'         
* |      |      |      |      |      |                
* `----------------------------------'                
*                                      ,-------------.
*                                      |      |      |
*                               ,------|------|------|
*                               |      |      |      |
*                               |      |      |------|
*                               |      |      |      |
*                               `--------------------'
 */
    uint32_t lower[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
  _______,KC_F1  ,KC_F2  , KC_F3,  KC_F4  , KC_F5   , \		
  _______,KC_EXLM,KC_AT  , KC_LCBR,KC_RCBR, KC_PIPE , \
  _______,KC_HASH,KC_DLR , KC_LPRN,KC_RPRN, KC_GRAVE, \
  _______,KC_PERC,KC_PGDN, KC_LBRC,KC_RBRC, KC_TILD , \
  _______,_______,_______,_______, _______,\
                                            _______, _______, \
                                                     _______, \
                                   _______, _______, _______  \
);

/* Raise
 * ,-----------------------------------------.         
* |      |      |      |      |      |      |         
* |------+------+------+------+------+------|         
* |      |      |      | MsUp |      |      |         
* |------+------+------+------+------+------|         
* |      |      |MsLeft|MsDown|MsRght|      |         
* |------+------+------+------+------+------|         
* |      |      |      |      |      |      |         
* |------+------+------+------+------+------'         
* |      |      |      | Lclk | Rclk |                
* `----------------------------------'                
*                                      ,-------------.
*                                      |      |      |
*                               ,------|------|------|
*                               |      |      |      |
*                               |      |      |------|
*                               |      |      |      |
*                               `--------------------'
 */
    uint32_t raise[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
  _______, _______, _______   , _______   , _______    , _______, \		
  _______, _______, _______   , KC_MS_UP  , _______    , _______, \
  _______, _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, \
  _______, _______, _______   , _______   , _______    , _______, \
  _______, _______, _______   , KC_MS_BTN1, KC_MS_BTN2, \
                                                         _______, _______, \
                                                                  _______, \
                                             _______   , _______, _______  \
);
 
/* Adjust
 * ,-----------------------------------------.         
* |      |      |      |      |      |      |         
* |------+------+------+------+------+------|         
* |Batt  |  M1  |  M2  |  M3  |  M4  |      |         
* |------+------+------+------+------+------|         
* |      |      |      |      |      |      |         
* |------+------+------+------+------+------|         
* |      |      |      |      |      |      |         
* |------+------+------+------+------+------'         
* |Board |      |      |      |      |                
* `----------------------------------'                
*                                      ,-------------.
*                                      |      |      |
*                               ,------|------|------|
*                               |      |      |      |
*                               |      |      |------|
*                               |      |      |      |
*                               `--------------------'
 */
    uint32_t adjust[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
  _______      , _______ , _______   , _______   , _______, _______, \		
  PRINT_BATTERY, HOME_ADD, WORK_ADD  , EMAIL_1   ,EMAIL_2 , _______, \
  _______      , _______ , _______   , _______   , _______, _______, \
  _______      , _______ , _______   , _______   , _______, _______, \
  PRINT_INFO   , _______ , _______   , _______   , _______, \
                                                            _______, _______, \
                                                                     _______, \
                                                   _______, _______, _______  \
);


    /*
     * add the other layers on the regular presses.
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {	
            matrix[row][col].addActivation(_QWERTY, Method::MT_TAP, tap[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::MT_HOLD, hold[row][col]);
            matrix[row][col].addActivation(_LOWER, Method::PRESS, lower[row][col]);
            matrix[row][col].addActivation(_RAISE, Method::PRESS, raise[row][col]);
            matrix[row][col].addActivation(_ADJUST, Method::PRESS, adjust[row][col]);
        }
    }

}

void process_user_macros(uint16_t macroid)
{	  
		  
 switch ((macroid))
 {  
     case HOME_ADD:
     addStringToQueue("123 Quiet Crescent");
     break;
     case WORK_ADD:
     addStringToQueue("123 Work Place");
      break;
     case EMAIL_1:
     addStringToQueue("Primary@Email");
      break;
     case EMAIL_2:
     addStringToQueue("Other@Email");
      break;  
 }
}

void process_user_layers(uint16_t layermask)
{
    KeyScanner::process_for_tri_layers(_LOWER, _RAISE, _ADJUST);
}

#endif  // left



#if KEYBOARD_SIDE == RIGHT

/* Qwerty
*             ,-----------------------------------------.
*             |   6  |   7  |   8  |   9  |   0  |  -   |
*             |------+------+------+------+------+------|
*             |   Y  |   U  |   I  |   O  |   P  |  \   |
*             |------+------+------+------+------+------|
*             |   H  |   J  |   K  |   L  |; / L2|'/Cmd |
*             |------+------+------+------+------+------|
*             |   N  |   M  |   ,  |   .  |//Ctrl|RShift|
*             `------+------+------+------+------+------|
*                    |  Up  | Down |   [  |   ]  | ~L1  |
*                    `----------------------------------'
*    ,-------------.
*    | Alt  | ^/Esc|
*    |------+------+------.
*    | PgUp |      |      |
*    |------|  Tab |Enter |
*    | PgDn |      |      |
*    `--------------------'
 */

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
                 KC_6,    KC_7,    KC_8,    KC_9   , KC_0   , KC_MINS, 
                 KC_Y,    KC_U,    KC_I,    KC_O   , KC_P   , KC_BSLASH, 
                 KC_H,    KC_J,    KC_K,    KC_L   , KC_NO  , KC_NO,
                 KC_N,    KC_M,    KC_COMMA,KC_DOT , KC_NO  , KC_RSFT,
                          KC_UP,   KC_DOWN ,KC_LBRC, KC_RBRC, TG(L_LOWER), 
        KC_RALT, KC_NO,
        KC_PGUP, 
        KC_PGDN, KC_TAB, KC_ENT
    )};

 

void setupKeymap() {

/* Qwerty
*             ,-----------------------------------------.
*             |   6  |   7  |   8  |   9  |   0  |  -   |
*             |------+------+------+------+------+------|
*             |   Y  |   U  |   I  |   O  |   P  |  \   |
*             |------+------+------+------+------+------|
*             |   H  |   J  |   K  |   L  |; / L2|'/Cmd |
*             |------+------+------+------+------+------|
*             |   N  |   M  |   ,  |   .  |//Ctrl|RShift|
*             `------+------+------+------+------+------|
*                    |  Up  | Down |   [  |   ]  | ~L1  |
*                    `----------------------------------'
*    ,---------------.
*    | Alt  | Ctr/Esc|
*    |------+------+------.
*    | PgUp |      |      |
*    |------|  Tab |Enter |
*    | PgDn |      |      |
*    `--------------------'
 */

 uint32_t press[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
                 KC_6,    KC_7,    KC_8,    KC_9   , KC_0   , KC_MINS, 
                 KC_Y,    KC_U,    KC_I,    KC_O   , KC_P   , KC_BSLASH, 
                 KC_H,    KC_J,    KC_K,    KC_L   , KC_NO  , KC_NO,
                 KC_N,    KC_M,    KC_COMMA,KC_DOT , KC_NO  , KC_RSFT,
                          KC_UP,   KC_DOWN ,KC_LBRC, KC_RBRC, TG(L_LOWER), 
        KC_RALT, KC_NO,
        KC_PGUP, 
        KC_PGDN, KC_TAB, KC_ENT
    );

 uint32_t tap[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO    , KC_NO, 
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO    , KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_SCOLON, KC_QUOT,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_SLSH  , KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_NO    , KC_NO,
        KC_NO, KC_ESC,
        KC_NO, 
        KC_NO, KC_NO, KC_NO
    );

 uint32_t hold[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO, 
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO, L_RAISE, KC_RGUI,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO,
        KC_NO, KC_RCTL,
        KC_NO, 
        KC_NO, KC_NO, KC_NO
    );


/* Lower
 *           ,-----------------------------------------.
 *          |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
 *          |------+------+------+------+------+------|
 *          |  Up  |   7  |   8  |   9  |   *  |  F12 |
 *          |------+------+------+------+------+------|
 *          | Down |   4  |   5  |   6  |   +  |      |
 *          |------+------+------+------+------+------|
 *          |   &  |   1  |   2  |   3  |   \  |      |
 *          `------+------+------+------+------+------|
 *                 |      |   .  |   0  |   =  |      |
 *                 `----------------------------------'
 * ,-------------.
 * |      |      |
 * |------+------+------.
 * |      |      |      |
 * |------|      |      |
 * |      |      |      |
 * `--------------------'
 */
    uint32_t lower[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
           KC_F6  , KC_F7  , KC_F8  , KC_F9, KC_F10   , KC_F11,  \
           KC_UP  , KC_P7  , KC_P8  , KC_P9, KC_MPLY  , KC_F12,  \
           KC_DOWN, KC_P4  , KC_P5  , KC_P6, KC_PPLUS , KC_MUTE,  \
           KC_AMPR, KC_P1  , KC_P2  , KC_P3, KC_PDOT  , KC_VOLU,  \
                    _______, KC_PDOT, KC_P0, KC_PEQUAL, TG(L_LOWER),  \
  _______, _______,                    \
  _______, \
  _______, _______, _______ \
);

/* Raise
*           ,-----------------------------------------.
*           |      |      |      |      |      |      |
*           |------+------+------+------+------+------|
*           |      |      |      |      |      |      |
*           |------+------+------+------+------+------|
*           |      |      |      |      |      | Play |
*           |------+------+------+------+------+------|
*           |      |      | Prev | Next |      |      |
*           `------+------+------+------+------+------|
*                  | VolUp| VolDn| Mute |      |      |
*                  `----------------------------------'
*  ,-------------.
*  |      |      |
*  |------+------+------.
*  |      |      |Brwser|
*  |------|      |Back  |
*  |      |      |      |
*  `--------------------'
 */
    uint32_t raise[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
           _______, _______, _______, _______, _______, _______,  \
           _______, _______, _______, _______, _______, _______,  \
           _______, _______, _______, _______, _______, KC_MPLY,  \
           _______, _______, KC_MPRV, KC_MNXT, _______, _______,  \
                  , KC_VOLU, KC_VOLD, KC_MUTE, KC_SLSH, _______,  \
  _______, _______,                    \
  _______, \
  _______, _______, KC_WBAK \
);

/* Adjust
 *                ,---------------------------------------------.
 *                |      |      |      |      |      |          |
 *                |---------------------------------------------|
 *                |      |      |      |      |      |Batt      |
 *                |---------------------------------------------|
 *                |      |      |      |      |      |          |
 *                |------+------+------+------+-----------------|
 *                |      |      |      |      |      |          |
*                 `------+------+------+------+------+----------|
*                        |      |      |      |      |PRINT_INFO|
*                        `--------------------------------------'
*  ,-------------.
*  |      |      |
*  |------+------+------.
*  |      |      |      |
*  |------|      |      |
*  |      |      |      |
*  `--------------------'
 */
    uint32_t adjust[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
           _______, _______, _______, _______, _______, _______      ,  \
           _______, _______, _______, _______, _______, PRINT_BATTERY,   \
           _______, _______, _______, _______, _______, _______      ,  \
           _______, _______, _______, _______, _______, _______      ,  \
                  , _______, _______, _______, _______, PRINT_INFO   ,  \
  _______, _______,                    \
  _______, \
  _______, _______, _______ \




    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            // matrix[row][col].addActivation(_QWERTY, Method::PRESS, lower[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::MT_TAP, tap[row][col]);
            matrix[row][col].addActivation(_QWERTY, Method::MT_HOLD, hold[row][col]);
            matrix[row][col].addActivation(_LOWER, Method::PRESS, lower[row][col]);
            matrix[row][col].addActivation(_RAISE, Method::PRESS, raise[row][col]);
            matrix[row][col].addActivation(_ADJUST, Method::PRESS, adjust[row][col]);
        }
    }

}

void process_user_macros(uint16_t macroid)
{	

}


void process_user_layers(uint16_t layermask)
{
    KeyScanner::process_for_tri_layers(_LOWER, _RAISE, _ADJUST);
}

#endif
