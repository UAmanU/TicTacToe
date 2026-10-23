#pragma once
#include "player.h"
typedef struct Game
{
    Player player;
    Player bot;
    Tile tiles[9];
};
void start_game(Game &game);