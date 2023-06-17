/*
** EPITECH PROJECT, 2022
** move rect
** File description:
** move image with rect
*/

#include "myhunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left == max_value) {
        rect->left = 0;
    } else {
        rect->left += offset;
    }
}
