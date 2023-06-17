/*
** EPITECH PROJECT, 2022
** define
** File description:
** define all i need
*/

#include "myhunter.h"

void settings_picture(value_t *def)
{
    def->pic.pic_scale.x = 1.50;
    def->pic.pic_scale.y = 1.50;
    def->pic.pic_pos.x = 0;
    def->pic.pic_pos.y = 500;
    def->pic.hud_pos.x = 735;
    def->pic.hud_pos.y = 0;
    def->pic.hud_scale.x = 1.5;
    def->pic.hud_scale.y = 1.5;
    def->pic.cursor_scale.x = 0.5;
    def->pic.cursor_scale.y = 0.5;
    def->pic.bg_ground = display_bg(def);
    def->pic.bg_sky = display_sky(def);
    def->pic.cursor = display_cursor(def);
    def->pic.hud = display_hud(def);
    sfSprite_setScale(def->pic.bg_ground, def->pic.pic_scale);
    sfSprite_setScale(def->pic.cursor, def->pic.cursor_scale);
    sfSprite_setScale(def->pic.hud, def->pic.hud_scale);
    sfSprite_setPosition(def->pic.bg_ground, def->pic.pic_pos);
    sfSprite_setPosition(def->pic.hud, def->pic.hud_pos);
}
