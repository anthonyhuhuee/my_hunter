/*
** EPITECH PROJECT, 2022
** str upcase
** File description:
** str upcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int i;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
        i = i + 1;
    }
    return str;
}
