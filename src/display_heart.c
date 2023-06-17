/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_heart(value_t *def)
{
    sfSprite *sprite;
    def->heart.texture_heart = sfTexture_createFromFile(HEART, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, def->heart.texture_heart, sfTrue);
    return sprite;
}
