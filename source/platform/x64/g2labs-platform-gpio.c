/*
 * MIT License
 *
 * Copyright (c) 2023 Grzegorz Grzęda
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
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "g2labs-platform-gpio.h"
#include <stdio.h>

bool platform_gpio_initialize(platform_gpio_input_handler_t input_handler) {
    printf("Initialize platform gpio\n");
    return true;
}

bool platform_gpio_configure_input(uint8_t number, bool is_pull_up, platform_gpio_input_edge_detect_t edge_detect) {
    printf("Configure platform input:\n\tnumber=%u\n\tis_pull_up=%d\n\tedge_detect=%d\n", number, is_pull_up,
           edge_detect);
    return true;
}

bool platform_gpio_configure_output(uint8_t number, bool init_state, bool is_pull_up) {
    printf("Configure platform output:\n\tnumber=%u\n\tis_pull_up=%d\n\tinit_state=%d\n", number, is_pull_up,
           init_state);
    return true;
}

bool platform_gpio_update_output(uint8_t number, bool new_state) {
    printf("Update platform output:\n\tnumber=%u\n\tnew_state=%d\n", number, new_state);
    return true;
}
