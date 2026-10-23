#include "include/game.h"
#include "include/input_handler.h"
#include "include/output_handler.h"
void set_figures(Game &game)
{
    while (true)
    {
        ask_for_symbol_form(game.symbols);
        char chosen_figure = choose_figure(game.symbols);
        bool is_symbol_correct = false;
        for (int i = 0; i < sizeof game.symbols / sizeof game.symbols[0]; i++)
        {
            if (chosen_figure == game.symbols[i])
            {
                is_symbol_correct = true;
                break;
            }
        }
        if (is_symbol_correct)
        {
            game.player.symbol = chosen_figure;
            game.bot.symbol = (chosen_figure == 'O' ? 'X' : 'O');
            return;
        }
    }
}
bool is_number_in_list(const size_t list[], const size_t number)
{
    for (size_t i = 0; i < sizeof list / sizeof list[0]; i++)
    {
        if (list[i] == number)
        {
            return true;
        }
    }
    return false;
}
bool check_is_player_won(Game &game, Player &player)
{
    for (size_t i = 0; i < sizeof game.win_conditons / sizeof game.win_conditons[0]; i++)
    {
        for (size_t j = 0; j < sizeof game.win_conditons[i] / sizeof game.win_conditons[0]; j++)
        {
            if (!(is_number_in_list(player.tile_positions, game.win_conditons[i][j])))
            {
                break;
            }
            else if (j == sizeof game.win_conditons[i] - 1)
            {
                return true;
            }
        }
    }
    return false;
}
void start_game(Game &game)
{
    greeting();
    set_figures(game);
    print_tiles(game.tiles);
    bool current_game_state = false;
    while (true)
    {
        Player *current_player = &(game.player.symbol == 'O' ? game.player : game.bot);
        size_t free_tiles_amount = sizeof game.free_tile_positions / sizeof game.free_tile_positions[0];
        if (free_tiles_amount == 0)
        {
            break;
        }
        current_game_state = check_if_player_won(game, *current_player);
        if (current_game_state)
        {
            break;
        }
        ask_for_turn();
        size_t tile_position;
        if (current_player == &game.player)
        {
            tile_position = choose_tile_position();
            if (is_number_in_list(game.free_tile_positions, tile_position))
            {
                continue;
            }
        }
        else
        {
            tile_position = game.free_tile_positions[tile_position % free_tiles_amount];
        }
        place_tile(*current_player, game.tiles, tile_position);
        size_t updated_free_tile_positions[9];
        for (size_t i = 0; i < free_tiles_amount; i++)
        {
            size_t current_free_tile_pos = game.free_tile_positions[i];
            if (current_free_tile_pos != tile_position)
            {
                current_free_tile_pos = game.free_tile_positions[i];
                updated_free_tile_positions[i] = current_free_tile_pos;
            }
        }
        game.free_tile_positions = updated_free_tile_positions;
        print_tiles(game.tiles);
    }
    print_result(current_game_state);
    goodbye();
}