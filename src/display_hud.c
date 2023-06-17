/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_hud(value_t *def)
{
    sfSprite *sprite;
    def->pic.texture_hud = sfTexture_createFromFile(HUD, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, def->pic.texture_hud, sfTrue);
    return sprite;
}
