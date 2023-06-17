/*
** EPITECH PROJECT, 2022
** display screen
** File description:
** display screen
*/

#include "myhunter.h"

int display(void)
{
    value_t *def = malloc(sizeof(value_t) * 1);
    settings(def);
    sfSprite* character = display_character();
    sfRenderWindow_setMouseCursorVisible(def->window, sfFalse);
    while (sfRenderWindow_isOpen(def->window)) {
        sfRenderWindow_clear(def->window, sfWhite);
        action(def, character);
        draw_scenery(def, character);
        sfRenderWindow_display(def->window);
    }
    destroy_all(def, character);
    free(def);
    return 0;
}
