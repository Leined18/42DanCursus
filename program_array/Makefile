NAME		= ArrayProgram.a
LNAME		= libft.a
PNAME		= array
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -g
RM		= rm -rf
AR		= ar rcs
LIB		= ranlib

SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft
SRCS    = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(LIBFT_DIR)/*.c)
OBJS	= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS)) $(patsubst $(LIBFT_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all: $(NAME) $(LNAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

$(LNAME): $(OBJS)
	$(AR) $(LNAME) $(OBJS)
	$(LIB) $(LNAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(LIBFT_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

exe:
	$(CC) $(CFLAGS) main.c $(NAME) $(LNAME) -o $(PNAME) && ./$(PNAME)

clean:
	$(RM) $(OBJ_DIR) $(PNAME).dSYM

fclean: clean
	$(RM) $(NAME) $(LNAME) $(PNAME)

re: fclean all

.PHONY: all clean fclean re