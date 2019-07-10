/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:46:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/07/10 11:56:03 by bsibanyo         ###   ########.fr       */
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
		printf("%s\n",sd->d_name);
	return (0);
}

int	main(int argc, char **argv)
{
	ft_ls();
}
