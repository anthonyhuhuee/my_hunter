/*
** EPITECH PROJECT, 2022
** define
** File description:
** define all i need
*/

#include "myhunter.h"

void settings(value_t *def)
{
    settings_mode(def);
    settings_window(def);
    settings_time(def);
    settings_picture(def);
    settings_avatar(def);
    settings_counter(def);
    settings_heart(def);
    sfRenderWindow_setFramerateLimit(def->window, 30);
}
