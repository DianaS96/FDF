NAME	= fdf

SRC		= main.c\
		  fill_matrix.c fill_matrix_help.c \
		  src/ft_putstr_fd.c src/ft_split.c src/ft_strlen.c src/ft_substr.c \
		  src/ft_atoi.c \
		  gnl/get_next_line.c gnl/get_next_line_utils.c \
		  free_map.c \
		  ft_error.c \
		  draw_map.c \
		  colors.c \
		  set_coord.c rotation.c \
		  keyboard.c keyboard_utils.c\
		  ft_mlx_put_pxl.c \
		  init_params.c \
		  menu.c

OBJ		= ${SRC:.c=.o}

D_FILES	= ${SRC:.c=.d}

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

# Telling that "fclean, clean, re and all" are names of rules (not names of files)
.PHONY: fclean clean all re

all: ${NAME}

# $@ will be replaced by target (NAME of program)
${NAME}: ${OBJ} ${SRC}
	${CC} ${CFLAGS} ${OBJ} -lmlx -framework OpenGL -framework AppKit -o $@ -g
	@echo "\033[0;35m""Executable file created""\033[0m"

# $< will be replaced by first dependency (.c files)
%.o: %.c
	${CC} ${CFLAGS} -I /usr/local/include -c $< -o $@ -MD
include ${wildcard *.d}

# Remove all ".o" and ".d" files
clean: 
	@rm -f ${OBJ} ${D_FILES} 
	@echo "\033[0;33m""All .o and .d files deleted""\033[0m"

# Remove executable file and call clean cmd
fclean: clean
	@rm -f ${NAME}
	@echo "\033[0;33m""Executable files deleted""\033[0m"

re: fclean all

