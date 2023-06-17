/*
** EPITECH PROJECT, 2022
** def display all heart
** File description:
** def display all heart
*/

#include "myhunter.h"

void def_set_position_heart(value_t *def)
{
    sfSprite_setPosition(def->heart.heart, def->heart.pos_heart);
    sfSprite_setPosition(def->heart.heart2, def->heart.pos_heart2);
    sfSprite_setPosition(def->heart.heart3, def->heart.pos_heart3);
    sfSprite_setPosition(def->heart.heart4, def->heart.pos_heart4);
    sfSprite_setPosition(def->heart.heart5, def->heart.pos_heart5);
}
