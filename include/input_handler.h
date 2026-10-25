#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H
#include <stdio.h>
#include <stdbool.h>
char choose_figure(const char symbols[2]);
size_t choose_tile_position(void);
bool continue_form(void);
#endif