/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:46:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/07/04 15:32:55 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include "unistd.h"
#include "./libft/libft.h"

int		main(int argc, char **argv)
{

	DIR *dir;
	struct dirent *sd;

	dir = opendir(".");
	if (dir == NULL)
	{
		write(1, "Error unable to open directory!\n", 50);
		exit(1);
	}

	while( (sd=readdir(dir)) != NULL )
		printf("%s\n",sd->d_name);

	closedir(dir);

	return (0);
}
