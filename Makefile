# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 09:41:16 by bsibanyo          #+#    #+#              #
#    Updated: 2019/09/06 11:06:13 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = ft_ls.a

flags = -c -Wall -Wextra -Werror													# the rule for building ls 

sources = ./

objects = $(sources: .c=.o)			#because we don't want to target the output files one-by-one we'll use the $() as reference

all : $(name)

clean: rm *.o
