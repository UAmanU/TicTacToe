#include "include/output_handler.h"
void greeting(void)
{
    printf("Hello! This is a TicTacToe game by AmanU!\n");
}
void goodbye(void)
{
    printf("Goodbye!\n");
}
void ask_form_symbol_form(const char symbols[2])
{
    printf("What symbol do you choose? %c or %c\n", symbols[0], symbols[1]);
}
void ask_for_turn(void)
{
    printf("Choose your tile:\n");
}
void ask_for_continuing(void)
{
    printf("Do you want to continue? Y - yes, N - no\n");
}
void print_tiles(const Tile tile[9])
{
    // i'm so tired i can't write this algorithm
    printf("Not ended");
}
void print_result(bool result)
{
    printf(result ? "You won!" : "Oh no, you lost!");
}