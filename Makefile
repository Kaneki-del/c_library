CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c\
	ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
	ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c strncmp.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

INCLUDES = ./libft.h

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
