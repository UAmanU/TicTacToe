#pragma once
#include "tile.h"
typedef struct Player
{
    size_t tile_positions[9];
    char symbol = ' ';
};
void place_tile(Player &player, Tile tiles[]);
