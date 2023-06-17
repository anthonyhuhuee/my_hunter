/*
** EPITECH PROJECT, 2022
** move
** File description:
** move
*/

#include "myhunter.h"

void move_char(value_t *def, sfSprite* character)
{
    def->tps.time = sfClock_getElapsedTime(def->tps.clock);
    if (def->tps.seconds > 0.01) {
        def->avatar->char_pos.x -= def->avatar->speed_x;
        def->avatar->char_pos.y -= def->avatar->speed_y;
    }
    if (def->avatar->char_pos.y <= 0 || def->avatar->char_pos.y >= 750) {
        def->avatar->speed_y *= -1;
    }
    if (def->avatar->char_pos.x <= 0 || def->avatar->char_pos.x >= 1895) {
        def->avatar->speed_x *= -1;
    }
    sfSprite_setPosition(character, def->avatar->char_pos);
}
