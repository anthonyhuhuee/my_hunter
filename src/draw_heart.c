/*
** EPITECH PROJECT, 2022
** display scenery
** File description:
** scenery
*/

#include "myhunter.h"

void draw_heart(value_t *def)
{
    if (def->counter.life == 5) {
        sfRenderWindow_drawSprite(def->window, def->heart.heart, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart2, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart3, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart4, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart5, NULL);
    }
    if (def->counter.life == 4) {
        sfRenderWindow_drawSprite(def->window, def->heart.heart, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart2, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart3, NULL);
        sfRenderWindow_drawSprite(def->window, def->heart.heart4, NULL);
    }
    draw_heart2(def);
}
