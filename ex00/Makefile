# Name of the executable
NAME = megaphone

# Compiler
CC = c++

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files
SRCS = megaphone.cpp

# Default target
all: $(NAME)

# Build the executable (linking object files and creating the final program)
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

# Clean up object files
clean:
	rm -f $(OBJS)

# Clean up object files and executable
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

# Phony targets (do not correspond to files)
.PHONY: all clean fclean re