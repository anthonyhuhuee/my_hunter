/*
** EPITECH PROJECT, 2022
** def display all heart
** File description:
** def display all heart
*/

#include "myhunter.h"

void def_set_scale_heart(value_t *def)
{
    sfSprite_setScale(def->heart.heart, def->heart.heart_scale);
    sfSprite_setScale(def->heart.heart2, def->heart.heart_scale);
    sfSprite_setScale(def->heart.heart3, def->heart.heart_scale);
    sfSprite_setScale(def->heart.heart4, def->heart.heart_scale);
    sfSprite_setScale(def->heart.heart5, def->heart.heart_scale);
}
