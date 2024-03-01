# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

SRCP = ./SRCS/*.c
SRCS_PRINTF = ft_printf.c
SRCS = $(addprefix $(SRCP),$(SRCS_PRINTF))

OBJS = $(SRCS:.c=.o)
OBJS_DIR = objs
HEAD = ./

# **************************************************************************** #
#                                    LIBFT                                     #
# **************************************************************************** #

LIBFT_DIR = ./libft/
LIBFT = libft.a
LIBFT_AR = $(addprefix $(LIBFT_DIR), $(LIBFT))

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME		= libftprintf.a
AR			= ar rcs
RM			= rm -f
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror
MKDIR		= mkdir


# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	$(MKDIR) -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCP)%.c | $(OBJS_DIR)
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@


$(LIBFT_AR):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_AR)
	cp $(LIBFT_AR) $(NAME)
	cp $(addprefix $(OBJS_DIR)/, $(notdir $(OBJS))) $(OBJS_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) -r $(OBJS_DIR)


fclean: clean
	@$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re
