#ifndef PLAYER_H
#define PLAYER_H
#include "tile.h"
typedef struct Player
{
    size_t tiles_amount;
    size_t tile_positions[9];
    char symbol;
};
struct Player create_player(void);
void place_tile(struct Player *player, struct Tile tiles[], size_t tile_position);
#endif
