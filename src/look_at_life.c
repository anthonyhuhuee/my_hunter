/*
** EPITECH PROJECT, 2022
** look at life
** File description:
** look at life
*/

#include "myhunter.h"

void look_at_life(value_t *def)
{
    if (def->counter.life == 0) {
        sfRenderWindow_close(def->window);
    }
}
