/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_cursor(value_t *def)
{
    sfSprite *sprite;
    def->pic.texture_cursor = sfTexture_createFromFile(CURSOR, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, def->pic.texture_cursor, sfTrue);
    return sprite;
}
