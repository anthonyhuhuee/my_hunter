/*
** EPITECH PROJECT, 2022
** display scenery
** File description:
** scenery
*/

#include "myhunter.h"

void draw_cursor (value_t *def)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(def->window);
    def->pic.cursor_pos.x = mouse_pos.x - 50;
    def->pic.cursor_pos.y = mouse_pos.y - 50;
    sfSprite_setPosition(def->pic.cursor, def->pic.cursor_pos);
    sfRenderWindow_drawSprite(def->window, def->pic.cursor, NULL);
}
