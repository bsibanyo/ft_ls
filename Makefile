# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 09:41:16 by bsibanyo          #+#    #+#              #
#    Updated: 2019/09/25 15:49:50 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls.a


FLAGS = -Wall -Wextra -Werror -o ft_ls 

SRCS = 		srcs/main.c \
			srcs/printcolor.c \
			srcs/checks.c \
			srcs/flags.c \
			srcs/path.c \
			srcs/print.c \
			srcs/printpermissions.c \
			srcs/lg_r.c \
			srcs/lists.c \
			srcs/ft_list_swap.c \
			srcs/sort.c \
			srcs/selected.c \
			srcs/block.c \
			srcs/access.c \
			srcs/modification.c \
			srcs/free.c \
			srcs/exit.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):  $(OBJS)
	@make -C libft
	gcc $(FLAGS) $(SRCS) -I libft/libft.h libft/libft.a
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: clean fclean all re
