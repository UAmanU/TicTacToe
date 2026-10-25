#ifndef GAME_H
#define GAME_H
#include "player.h"
typedef struct Game
{

    struct Player player;
    struct Player bot;
    struct Tile tiles[9];
    size_t free_tile_positions[9];
    const size_t win_conditons[8][3];
    const char symbols[2];
};
bool check_if_player_won(struct Game *game, struct Player *player);
struct Game create_game(void);
bool is_number_in_list(const size_t list[], const size_t number);
void start_game(struct Game *game);
#endif