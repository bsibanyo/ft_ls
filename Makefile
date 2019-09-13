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

# OBJS = $(SRCS: .c=.o)			#because we don't want to target the output files one-by-one we'll use the $() as reference

# all : $(NAME)

# $(NAME) : $(OBJS)
# 	@make -C libft
# 	@gcc $(FLAGS) -o $(NAME) $(OBJS) -I libft/includes/libft.h libft/libft.a
# 	ar rc $(NAME) $(OBJS)
# 	ranlib $(NAME)

# clean :
# 	make -C libft clean
# 	rm -rf $(OBJS)

# fclean : clean
# 	rm -rf $(NAME)
# 	rm -rf libft/libft.a

# re : fclean 

# .PHONY: all clean fclean re


# $(NAME):
# 	gcc $(FLAGS) $(SRCS)
# 	ar rc $(NAME) $(OBJS)
# 	ranlib $(NAME)

# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: clean fclean all re


