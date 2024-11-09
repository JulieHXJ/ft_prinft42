NAME := libftprintf.a
RM := rm -f
CC := cc
CFLAGS := -Wall -Wextra -Werror
LIBFLAG := -L. -lftprintf 

SRCS := ft_printf.c ft_print_utils.c ft_print_unsign.c ft_itoa.c
OBJS := $(SRCS:.c=.o)


.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 
	@echo "$(NAME) has been built."

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "Object files deleted."

fclean:	clean
	$(RM) $(NAME)
	@echo "Library deleted."

re: fclean all
