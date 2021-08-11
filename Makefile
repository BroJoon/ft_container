NAME = ft_container

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I ./includes -std=c++98

SRCS = srcs/stack.cpp \
	   srcs/vector.cpp \
	   srcs/map.cpp \
	   srcs/main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@echo Compiling $(NAME)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re