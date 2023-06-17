/*
** EPITECH PROJECT, 2022
** def display all heart
** File description:
** def display all heart
*/

#include "myhunter.h"

void def_display_heart(value_t *def)
{
    def->heart.heart = display_heart(def);
    def->heart.heart2 = display_heart(def);
    def->heart.heart3 = display_heart(def);
    def->heart.heart4 = display_heart(def);
    def->heart.heart5 = display_heart(def);
}
