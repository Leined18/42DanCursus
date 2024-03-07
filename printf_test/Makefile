# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

SRCP = ./
SRCS_PRINTF = ft_printf.c
SRCS = $(addprefix $(SRCP),$(SRCS_PRINTF))

OBJS = $(SRCS:.c=.o)

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

RESET		= \033[0m
BOLD		= \033[1m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m

# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(NAME) $(LIBFT_AR)

$(OBJS): %.o: %.c
	$(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@

$(LIBFT_AR):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_AR)
	cp $(LIBFT_AR) $(NAME)
	@if $(AR) $@ $^; then \
		echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"; \
		echo "$(BLUE)Created: $(words $(OBJS) $(LIBFT_AR)) Oject File/s$(RESET)"; \
		echo "$(BLUE)Created: $(NAME)$(RESET)"; \
	fi

clean:
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(BLUE)Removed: $(words $(OBJS)) Oject File/s$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)Removed: $(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re