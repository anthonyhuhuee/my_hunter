/*
** EPITECH PROJECT, 2022
** strisnum
** File description:
** str is num
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    if (str[i] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        i = i + 1;
    }
    return 1;
}
