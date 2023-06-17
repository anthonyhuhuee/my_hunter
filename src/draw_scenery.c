/*
** EPITECH PROJECT, 2022
** display scenery
** File description:
** scenery
*/

#include "myhunter.h"

void draw_scenery (value_t *def, sfSprite* character)
{
    sfRenderWindow_drawSprite(def->window, def->pic.bg_sky, NULL);
    sfRenderWindow_drawSprite(def->window, character, NULL);
    sfSprite_setTextureRect(character, def->avatar->rect);
    sfRenderWindow_drawSprite(def->window, def->pic.bg_ground, NULL);
    sfRenderWindow_drawSprite(def->window, def->pic.hud, NULL);
    draw_heart(def);
    draw_cursor(def);
}
