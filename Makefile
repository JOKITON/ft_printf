NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

DIR_OBJ = objs/

DIR_SRC = srcs/

SRC = ft_printf.c

DIR_HEADER= header/

DIR = mkdir 

all : $(NAME)

$(NAME) :
	gcc -c $(DIR_SRC)$(SRC) -o $(OBJS)
	mv $(OBJS) $(DIR_OBJ)
	ar rcs $@ $(DIR_OBJ)$(OBJS)

clean:
	rm -rf $(DIR_OBJ)$(OBJS)

fclean : clean
	rm -rf $(NAME)

start:
	$(DIR) $(DIR_SRC)
	$(DIR) $(DIR_OBJ)
	$(DIR) $(DIR_HEADER)
	touch $(DIR_SCR)$(SRC)


re: fclean all

.PHONY : all clean fclean all re


