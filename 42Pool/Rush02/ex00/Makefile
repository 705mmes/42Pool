NAME = rush-02

SOURCES = dict.c \
		  ft_functional.c \
		  ft_error_msg.c \
		  ft_parse_all.c \
		  ft_write_numbers.c \
		  main.c \
		  parsing.c \
		  parsing_functional.c

OBJECTS = $(SOURCES:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc $(FLAGS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	gcc $(FLAGS) $(OBJECTS) -o $(NAME)

run: all clean
	@echo ">>> Executing"
	@./$(NAME) 1234567
