/*
** EPITECH PROJECT, 2022
** display scenery
** File description:
** scenery
*/

#include "myhunter.h"

void draw_heart2(value_t *def)
{
    if (def->counter.life == 3) {
        sfRenderWindow_drawSprite(def->window, def->heart.heart, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart2, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart3, NULL);
    }
    if (def->counter.life == 2) {
        sfRenderWindow_drawSprite(def->window, def->heart.heart, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart2, NULL);
    }
    if (def->counter.life == 1) {
        sfRenderWindow_drawSprite(def->window, def->heart.heart, NULL);
    }
}
