NAME = phonebook
CC = g++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR = OBJS

SRCS = phonebook.cpp
OBJS = $(OBJS_DIR)/phonebook.o

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@rmdir $(OBJS_DIR) 2>/dev/null || true

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
