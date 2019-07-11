/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:46:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/07/11 16:49:59 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include "unistd.h"
#include "./libft/libft.h"

int		ft_ls()
{

	DIR						*dir;
	struct dirent 			*sd;

	dir = opendir(".");
	if (dir == NULL)
		return (0);
	while( (sd=readdir(dir)))
		ft_putendl(sd->d_name);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_ls();
}
