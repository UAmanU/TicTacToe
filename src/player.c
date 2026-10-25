#include "include/player.h"
struct Player create_player(void)
{
    struct Player player = {
        .symbol = ' ',
        .tile_positions = {},
        .tiles_amount = 0,
    };
    return player;
}
void place_tile(struct Player *player, struct Tile tiles[], size_t tile_position)
{
    struct Tile tile = {
        .position = tile_position,
        .symbol = player->symbol};
    tiles[tile_position - 1] = tile;
    player->tile_positions[player->tiles_amount] = tile_position;
    player->tiles_amount++;
}