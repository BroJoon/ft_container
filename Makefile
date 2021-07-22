FT_NAME = ft_container
STD_NAME = std_cotainer

CC = clang++
CFLAGS = -Wall -Wextra -Werror -I ./containers/ -std=c++98

SRCS = tests/vector.cpp \
	   tests/stack.cpp

all: $(FT_NAME) $(STD_NAME)

$(FT_NAME): $(SRCS)
	@echo Compiling $(FT_NAME)
	@$(CC) $(CFLAGS) -DNAMESPACE=ft -o $(FT_NAME) $(SRCS)
	@$(CC) $(CFLAGS) -DNAMESPACE=std -o $(STD_NAME) $(SRCS)

clean:
	rm -rf $(FT_NAME) $(STD_NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re