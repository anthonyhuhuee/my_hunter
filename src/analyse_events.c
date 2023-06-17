/*
** EPITECH PROJECT, 2022
** analyse events
** File description:
** it look what passed with event
*/

#include "myhunter.h"

void analyse_events(value_t *def, sfSprite* character)
{
    while (sfRenderWindow_pollEvent(def->window, &def->event)) {
        switch (def->event.type) {
            case sfEvtMouseButtonPressed:
                sfMouseButtonEvent mouse_click = def->event.mouseButton;
                manage_mouse_click(mouse_click, def, character);
                break;
            case sfEvtClosed:
                sfRenderWindow_close(def->window);
            default:
                break;
        }
    }
}
