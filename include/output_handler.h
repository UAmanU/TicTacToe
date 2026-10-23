#pragma once
#include "include/tile.h"
#include <stdbool.h>
void greeting(void);
void goodbye(void);
void ask_for_symbol_form(const char symbols[2]);
void ask_for_turn(void);
void ask_for_continuing(void);
void print_tiles(const Tile tile[9]);
void print_result(bool result);