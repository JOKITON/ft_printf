NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

DIR_OBJ = objs/

DIR_SRC = srcs/

SRC = ft_printf.c

DIR_HEADER= header/*.h

all : $(NAME)

$(NAME) :
	gcc -c $(DIR_SRC)$(SRC) -o $(OBJS)
	mv $(OBJS) $(DIR_OBJ)
	ar rcs $@ $(DIR_OBJ)$(OBJS)

clean:
	rm -rf $(DIR_OBJ)$(OBJS)

fclean : clean
	rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean all re


