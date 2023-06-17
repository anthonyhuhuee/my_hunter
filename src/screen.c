/*
** EPITECH PROJECT, 2022
** open a screen
** File description:
** open a screen window
*/

#include "myhunter.h"

int main(int argc, char **argv)
{
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            flag_h_hunter();
            return 0;
        }
    }
    if (argc == 1) {
        display();
        return 0;
    }
}
