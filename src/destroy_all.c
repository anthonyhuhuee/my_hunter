/*
** EPITECH PROJECT, 2022
** destroy_all
** File description:
** destroy all
*/

#include "myhunter.h"

void destroy_all(value_t *def, sfSprite* character)
{
    sfSprite_destroy(character);
    sfSprite_destroy(def->pic.bg_ground);
    sfSprite_destroy(def->pic.bg_sky);
    sfSprite_destroy(def->heart.heart);
    sfSprite_destroy(def->heart.heart2);
    sfSprite_destroy(def->heart.heart3);
    sfSprite_destroy(def->heart.heart4);
    sfSprite_destroy(def->heart.heart5);
    sfSprite_destroy(def->pic.cursor);
    sfTexture_destroy(def->pic.texture_cursor);
    sfTexture_destroy(def->pic.texture_bg_ground);
    sfTexture_destroy(def->pic.texture_bg_sky);
    sfTexture_destroy(def->heart.texture_heart);
    sfClock_destroy(def->tps.clock);
    sfRenderWindow_destroy(def->window);
}
