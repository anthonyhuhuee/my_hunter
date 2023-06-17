/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_sky(value_t *def)
{
    sfSprite *sprite;
    def->pic.texture_bg_sky = sfTexture_createFromFile(SKY, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, def->pic.texture_bg_sky, sfTrue);
    return sprite;
}
