/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:46:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/06 15:07:13 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_ls.h"

void		ft_ls(char *path)
{

	DIR						*dir;
	struct dirent 			*sd;

	dir = opendir(path);
	if (dir == NULL)
		return ;
	while( (sd=readdir(dir)))
		ft_putendl(sd->d_name);
	return ;
}

int	main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
		ft_ls(".");
	else
	{
		while (argv[i])
			ft_ls(argv[i++]);
	}
	return (0);
}
