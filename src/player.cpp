#include "include/player.h"
void place_tile(Player &player, Tile tiles[], size_t tile_position)
{
    tiles[tile_position - 1] = Tile(tile_position, player.symbol);
    player.tile_positions[player.tiles_amount] = tile_position;
    player.tiles_amount++;
}