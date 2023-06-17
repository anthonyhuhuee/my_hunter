/*
** EPITECH PROJECT, 2022
** display image
** File description:
** it display image
*/

#include "myhunter.h"

sfSprite* display_character(void)
{
    sfSprite *sprite;
    sfTexture *texture = sfTexture_createFromFile(IMAGE, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
