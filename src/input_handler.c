#include "include/input_handler.h"
char choose_figure(const char symbols[2])
{
    char chosen_figure;
    while (true)
    {
        if (scanf(" %c", &chosen_figure) != NULL)
        {
            for (int i = 0; i < sizeof symbols / sizeof symbols[0]; i++)
            {
                if (symbols[i] == chosen_figure)
                {
                    return chosen_figure;
                }
            }
        }
    }
    return ' ';
}
size_t choose_tile_position(void)
{
    size_t position;
    while (true)
    {
        if (scanf(" %zu", &position) != NULL)
        {
            if (position < 10)
            {
                return position;
            }
        }
    }
    return 0;
}
bool continue_form(void)
{
    char user_decision;
    while (true)
    {
        if (scanf(" %c", &user_decision) != NULL)
        {
            if (user_decision == 'Y' || user_decision == 'y')
                return true;
            else if (user_decision == 'N' || user_decision == 'n')
                return false;
        }
    }
    return true;
}