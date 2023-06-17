/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_bg(value_t *def)
{
    sfSprite *sprite;
    def->pic.texture_bg_ground = sfTexture_createFromFile(BACKGROUND, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, def->pic.texture_bg_ground, sfTrue);
    return sprite;
}
