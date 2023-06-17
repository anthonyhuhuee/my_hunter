/*
** EPITECH PROJECT, 2022
** settings window
** File description:
** create window
*/

#include "myhunter.h"

void settings_window(value_t *def)
{
    def->window = create_screen(1920, 1080);
}
