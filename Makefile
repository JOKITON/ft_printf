NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(DIR_SRC:.c=.o)

DIR_OBJ = objs/*.o

DIR_SRC = srcs/*.c

DIR_HEADER= header/*.h

all : $(NAME)

$(NAME) :
	gcc -c $(DIR_SRC) -o $(OBJ_NAME) $(DIR_OBJ)
	ar rcs $@ $(DIR_OBJ) .

clean:
	rm -rf $(DIR_OBJS)

fclean : clean
	rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean all re


