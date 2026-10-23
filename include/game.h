#pragma once
#include "player.h"
typedef struct Game
{

    Player player;
    Player bot;
    Tile tiles[9];
    size_t free_tile_positions[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    const size_t win_conditons[8][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, {1, 5, 9}, {3, 5, 7}};
    const char symbols[2] = {'O', 'X'};
};
bool check_if_player_won(Game &game, Player &player);
void set_figures(Game &game);
bool is_number_in_list(const size_t list[], const size_t number);
void start_game(Game &game);