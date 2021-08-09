NAME = ft_container

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I ./includes -std=c++98

SRCS = srcs/stack.cpp \
	   srcs/vector.cpp \
	   srcs/main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@echo Compiling $(NAME)
	@$(CC) $(CFLAGS) -DNAMESPACE=ft -o $(NAME) $(SRCS)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re