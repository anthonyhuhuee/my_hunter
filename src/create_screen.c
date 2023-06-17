/*
** EPITECH PROJECT, 2022
** create screen
** File description:
** test create screen
*/

#include "myhunter.h"

sfRenderWindow *create_screen(unsigned int width, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {width, height, 32};
    window = sfRenderWindow_create(video_mode, TITLE,
    sfResize | sfClose, NULL);
    return window;
}
