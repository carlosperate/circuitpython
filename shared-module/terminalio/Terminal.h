/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef SHARED_MODULE_TERMINALIO_TERMINAL_H
#define SHARED_MODULE_TERMINALIO_TERMINAL_H

#include <stdint.h>
#include <stdbool.h>

#include "py/obj.h"
#include "shared-module/fontio/BuiltinFont.h"
#include "shared-module/displayio/TileGrid.h"

typedef struct  {
    mp_obj_base_t base;
    const fontio_builtinfont_t *font;
    uint16_t cursor_x;
    uint16_t cursor_y;
    displayio_tilegrid_t *scroll_area;
    displayio_tilegrid_t *title_bar;
    uint16_t title_x;
    uint16_t title_y;
    uint16_t first_row;
    uint16_t osc_command;
    bool in_osc_command;
} terminalio_terminal_obj_t;

#endif /* SHARED_MODULE_TERMINALIO_TERMINAL_H */
