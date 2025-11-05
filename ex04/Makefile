NAME = replace

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Replace.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f *.replace

re: fclean all

.PHONY: all clean fclean re
