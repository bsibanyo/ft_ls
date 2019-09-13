# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 09:41:16 by bsibanyo          #+#    #+#              #
#    Updated: 2019/09/10 13:24:48 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls


FLAGS = -g -Wall -Wextra -Werror -I includes											# the rule for building ls 

SRCS = srcs/main.c \
			srcs/combo.c \
			srcs/checks.c \
			srcs/ft_flags.c \
			srcs/path.c \
			srcs/print.c \
			srcs/ft_get_permission.c \
			srcs/lg_r.c \
			srcs/lists.c \
			srcs/ft_list_swap.c \
			srcs/sort.c \
			srcs/selected.c \
			srcs/block.c \
			srcs/access.c \
			srcs/modify.c \
			srcs/free.c \
			srcs/exit.c

OBJS = $(SRCS: .c=.o)			#because we don't want to target the output files one-by-one we'll use the $() as reference

all : $(NAME)

$(NAME) : $(OBJS)
	@make -C libft
	@gcc $(FLAGS) -o $(NAME) $(OBJS) -I libft/includes/libft.h libft/libft.a

clean :
	make -C libft clean
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	rm -rf libft/libft.a

re : fclean all

.PHONY: all clean fclean re


