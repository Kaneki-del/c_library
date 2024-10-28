CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a
AR = ar -rcs $(NAME)
all: $(NAME)
# all: f1.o f2.o

$(NAME): $(OBJS)
	${AR} ${NAME} $

%.o : %.c libft.h
	$(CC) $(CFLAGS) $< -o $@ -c

clean :
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
