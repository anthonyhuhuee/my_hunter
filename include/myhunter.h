/*
** EPITECH PROJECT, 2022
** program h
** File description:
** h program
*/

#ifndef MYHUNTER_H_
    #define MYHUNTER_H_

    #include "my.h"
    #include <SFML/Graphics.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Window/Export.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <time.h>

    #define TITLE "MyHunter"
    #define BACKGROUND "images/bg3.png"
    #define SKY "images/farm.jpg"
    #define IMAGE "images/chicken3.png"
    #define HEART "images/heart.png"
    #define CURSOR "images/cursor.png"
    #define HUD "images/hud.png"

typedef struct time_s {
    sfClock * clock;
    sfTime time;
    float seconds;
} my_time_t;

typedef struct picture_s {
    sfSprite* bg_ground;
    sfSprite* bg_sky;
    sfSprite* cursor;
    sfSprite* hud;
    sfVector2f pic_scale;
    sfVector2f pic_pos;
    sfVector2f hud_scale;
    sfVector2f hud_pos;
    sfVector2f cursor_pos;
    sfVector2f cursor_scale;
    sfTexture *texture_bg_ground;
    sfTexture *texture_bg_sky;
    sfTexture *texture_cursor;
    sfTexture *texture_hud;
} picture_t;

typedef struct heart_s {
    sfVector2f heart_scale;
    sfSprite* heart;
    sfTexture *texture_heart;
    sfSprite* heart2;
    sfSprite* heart3;
    sfSprite* heart4;
    sfSprite* heart5;
    sfVector2f pos_heart;
    sfVector2f pos_heart2;
    sfVector2f pos_heart3;
    sfVector2f pos_heart4;
    sfVector2f pos_heart5;
} heart_t;

typedef struct character_s {
    sfIntRect rect;
    sfVector2f char_pos;
    sfVector2f char_scale;
    int speed_x;
    int speed_y;
} avatar_t;

typedef struct counter_s {
    int count_hit;
    int life;
} counter_t;

typedef struct value_s {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfEvent event;
    avatar_t *avatar;
    my_time_t tps;
    picture_t pic;
    counter_t counter;
    heart_t heart;
} value_t;

sfRenderWindow *create_screen(unsigned int width, unsigned int height);

sfSprite* display_bg(value_t *def);
sfSprite* display_sky(value_t *def);
sfSprite* display_character(void);
sfSprite* display_heart(value_t *def);
sfSprite* display_cursor(value_t *def);
sfSprite* display_hud(value_t *def);

void def_display_heart(value_t *def);
void def_set_scale_heart(value_t *def);
void def_set_position_heart(value_t *def);
void def_position_x_y(value_t *def);

int flag_h_hunter(void);

int display(void);

void draw_scenery (value_t *def, sfSprite* character);
void draw_heart(value_t *def);
void draw_heart2(value_t *def);
void draw_cursor (value_t *def);

void settings(value_t *def);
void settings_mode(value_t *def);
void settings_window(value_t *def);
void settings_time(value_t *def);
void settings_picture(value_t *def);
void settings_avatar(value_t *def);
void settings_counter(value_t *def);
void settings_heart(value_t *def);

void action(value_t *def, sfSprite* character);
void move_rect(sfIntRect *rect, int offset, int max_value);
void move_anim(value_t *def, sfSprite* character);
void move_anim_explosion(value_t *def);
void move_char(value_t *def, sfSprite* character);
void analyse_events(value_t *def, sfSprite* character);
void manage_mouse_click(sfMouseButtonEvent event, value_t *def,
sfSprite* character);
void event_close(sfEvent event, sfRenderWindow *window);
void look_at_life(value_t *def);

void destroy_all(value_t *def, sfSprite* character);

#endif
