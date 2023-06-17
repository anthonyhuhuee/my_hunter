/*
** EPITECH PROJECT, 2022
** settings times
** File description:
** settings times
*/

#include "myhunter.h"


void settings_time(value_t *def)
{
    def->tps.clock = sfClock_create();
    def->tps.seconds = def->tps.time . microseconds / 1000000.0;
}
