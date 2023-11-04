NAME = libft.a
CC = cc
FLAG = -Wall -Wextra -Werror
OPTION = -g -c -I .
SRC = ft_isalpha ft_isalnum ft_isdigit ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@$(CC) $(FLAG) $(OPTION) $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
