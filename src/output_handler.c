#include "include/output_handler.h"
#include <stdio.h>
void greeting(void)
{
    printf("Hello! This is a TicTacToe game by AmanU!\n");
}
void goodbye(void)
{
    printf("Goodbye!\n");
}
void ask_for_symbol_form(const char symbols[2])
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
void print_tiles(const struct Tile tiles[9])
{
    for (int i = 0; i < 9; i += 3)
    {
        printf("%c | %c | %c \n", tiles[i], tiles[i + 1], tiles[i + 2]);
        if (i <= 3)
        {
            printf("---------\n");
        }
    }
}
void print_result(bool result)
{
    printf(result ? "You won!" : "Oh no, you lost!");
}