/*
** EPITECH PROJECT, 2022
** action
** File description:
** action
*/

#include "myhunter.h"

void action(value_t *def, sfSprite* character)
{
    analyse_events(def, character);
    move_anim(def, character);
    move_char(def, character);
    look_at_life(def);
}
