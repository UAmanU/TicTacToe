#pragma once
#include "tile.h"
typedef struct Player
{
    size_t tiles_amount = 0;
    size_t tile_positions[9];
    char symbol = ' ';
};
void place_tile(Player player, Tile tiles[], size_t tile_position);
