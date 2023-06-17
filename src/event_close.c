/*
** EPITECH PROJECT, 2022
** event close
** File description:
** event close window
*/

#include "myhunter.h"

void event_close(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
}
