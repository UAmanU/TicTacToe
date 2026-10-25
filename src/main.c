#include "include/game.h"

int main(void)
{
    struct Game game = create_game();
    start_game(&game);
    return 0;
}