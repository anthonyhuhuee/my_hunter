/*
** EPITECH PROJECT, 2022
** move
** File description:
** move
*/

#include "myhunter.h"

void move_anim(value_t *def, sfSprite* character)
{
    def->tps.time = sfClock_getElapsedTime(def->tps.clock);
    def->tps.seconds = def->tps.time . microseconds / 1000000.0;
    if (def->tps.seconds > 0.06) {
        sfClock_restart(def->tps.clock) ;
        move_rect(&def->avatar->rect, 134, 1340);
    }
}
