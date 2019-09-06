# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 09:41:16 by bsibanyo          #+#    #+#              #
#    Updated: 2019/09/06 14:43:18 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls.a

FLAGS = -c -Wall -Wextra -Werror													# the rule for building ls 

SRCS = ./ft_list_dir.c

OBJS = $(SRCS: .c=.o)			#because we don't want to target the output files one-by-one we'll use the $() as reference

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean: rm *.o
