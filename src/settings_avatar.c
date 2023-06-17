/*
** EPITECH PROJECT, 2022
** define
** File description:
** define all i need
*/

#include "myhunter.h"

void settings_avatar(value_t *def)
{
    srand(time(NULL));
    def->avatar = malloc(sizeof(avatar_t) * 1);
    def->avatar->rect.top = 0;
    def->avatar->rect.left = 0;
    def->avatar->rect.width = 130;
    def->avatar->rect.height = 200;
    def->avatar->char_pos.x = rand() % 1800;
    def->avatar->char_pos.y = 650.0;
    def->avatar->speed_x = 1;
    def->avatar->speed_y = 1;
    def->avatar->char_scale.x = 1.25;
    def->avatar->char_scale.y = 1.25;
}
