/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "KeyScanner.h"

#include "Key.h"
#include <array>

#ifndef KEYMAP_H
#define KEYMAP_H

#define _L1  1
#define _L2  2
#define _L3  3
#define _L4  4

// Layers Definitions


#define _QWERTY 0
#define _TAP 1
#define _HOLD 2
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 5


// Layers keycodes Definitions

#define L_QWERTY   (LAYER_0 + _QWERTY)
#define L_TAP      (LAYER_0 + _TAP)
#define L_HOLD     (LAYER_0 + _HOLD)
#define L_LOWER    (LAYER_0 + _LOWER)
#define L_RAISE    (LAYER_0 + _RAISE)
#define L_ADJUST   (LAYER_0 + _ADJUST)

#define HOME_ADD MC(KC_A)
#define WORK_ADD MC(KC_B)
#define EMAIL_1  MC(KC_C)
#define EMAIL_2  MC(KC_D)


#define USER_MACRO_FUNCTION   0 
void process_user_macros(uint16_t macroid);

#define USER_LAYER_FUNCTION   0 
void process_user_layers(uint16_t layermask);

void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;

extern void addStringToQueue(const char* str);
extern void addKeycodeToQueue(const uint16_t keycode);

#endif /* KEYMAP_H */