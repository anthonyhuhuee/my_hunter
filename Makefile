##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## it does make
##

SRC		=	./src/screen.c						\
			./src/flag_h_hunter.c				\
			./src/settings.c					\
			./src/settings_mode.c				\
			./src/settings_window.c				\
			./src/settings_time.c				\
			./src/settings_picture.c			\
			./src/settings_counter.c			\
			./src/settings_avatar.c				\
			./src/settings_heart.c				\
			./src/def_display_heart.c			\
			./src/def_set_scale_heart.c			\
			./src/def_set_position_heart.c		\
			./src/def_position_x_y.c			\
			./src/display.c 					\
			./src/create_screen.c 				\
			./src/display_bg.c 					\
			./src/display_sky.c 				\
			./src/display_character.c 			\
			./src/display_heart.c 				\
			./src/display_cursor.c 				\
			./src/display_hud.c 				\
			./src/draw_scenery.c 				\
			./src/draw_heart.c 					\
			./src/draw_heart2.c 				\
			./src/draw_cursor.c 				\
			./src/action.c 						\
			./src/analyse_events.c 				\
			./src/event_close.c 				\
			./src/look_at_life.c 				\
			./src/move_rect.c 					\
			./src/move_anim.c 					\
			./src/move_char.c 					\
			./src/destroy_all.c 				\
			./src/manage_mouse_click.c

OBJ			=	$(SRC:.c=.o)

NAME		=	my_hunter

LDFLAGS		=	-L ./lib

LDLIBS		=	-lmy -lcsfml-graphics -lcsfml-system -lcsfml-window

CPPFLAGS	=	-I ./include

LIB			=	./lib/libmy.a

all: $(NAME)

$(NAME):	$(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)

$(LIB):
	make -C ./lib/my

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re:     fclean all

.PHONY: all clean fclean re
