# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 16:56:35 by danpalac          #+#    #+#              #
#    Updated: 2024/03/11 15:15:51 by danpalac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME		= libft.a
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -g
RM		= rm -rf
AR		= ar rcs
LIB		= ranlib

RESET		= \033[0m
BOLD		= \033[1m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m

# **************************************************************************** #
#                            ARCHIVOS FUENTE                                   #
# **************************************************************************** #

BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		  ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRCS    = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_bzero.c ft_calloc.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_strdup.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_putchar.c ft_putstr.c\
			ft_putnbr.c ft_abs.c ft_putaddress.c ft_putunsigned.c ft_puthexa.c ft_putbase_fd.c


# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

OBJS		= $(SRCS:.c=.o) 
OBJS_BONUS	= $(BONUS:.c=.o)
NBONUS		= .bonus

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)
	@echo "$(YELLOW)Created : $(words $(OBJS)) File's [.o] \n$(BLUE)($(OBJS_BONUS))$(RESET) "
	@echo "$(YELLOW)Created : $(words $(NAME)) File's [.a]\n$(BLUE)($(NAME))$(RESET)"

$(NBONUS): $(OBJS_BONUS) $(NAME)
	$(AR) $(NAME) $(OBJS_BONUS)
	@echo "$(BLUE)Created : $(words $(OBJS_BONUS)) File's\n($(OBJS_BONUS))$(RESET)"
	touch .bonus

bonus : $(NBONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS) $(NBONUS) a.out
	@echo "$(YELLOW)Removed : $(words $(OBJS)$(OBJS_BONUS)) File's [.o]$(RED)\n$($(OBJS)) ($(OBJS_BONUS)) $(RESET)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(YELLOW)Removed : $(words $(NAME)) File's [.a]$(RED)\n($(NAME))$(RESET)"

re: fclean all

.PHONY: all clean fclean re
