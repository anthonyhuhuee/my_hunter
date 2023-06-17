/*
** EPITECH PROJECT, 2022
** define
** File description:
** define all i need
*/

#include "myhunter.h"

void settings_heart(value_t *def)
{
    def->heart.heart_scale.x = 0.15;
    def->heart.heart_scale.y = 0.15;
    def_display_heart(def);
    def_set_scale_heart(def);
    def_position_x_y(def);
    def_set_position_heart(def);
}
