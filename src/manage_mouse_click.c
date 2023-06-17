/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** it look what the mouse is doing rn
*/

#include <stdio.h>
#include "myhunter.h"

void manage_mouse_click(sfMouseButtonEvent event, value_t *def,
sfSprite *character)
{
    sfVector2f curr_pos = sfSprite_getPosition(character);
    if (event.button == sfMouseLeft) {
        if (event.x > curr_pos.x &&
        event.x < curr_pos.x + def->avatar->rect.width &&
        event.y > curr_pos.y &&
        event.y < curr_pos.y + def->avatar->rect.height) {
            settings_avatar(def);
            def->counter.count_hit = def->counter.count_hit + 1;
            my_printf("count hit : %d\n", def->counter.count_hit);
            def->avatar->speed_x += def->counter.count_hit;
            def->avatar->speed_y += def->counter.count_hit;
        } else {
            def->counter.life -= 1;
        }
    }
}
