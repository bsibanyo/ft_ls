/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:22:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/06 14:39:05 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

									//opening a directory
DIR	*opendir(const char *filename)
{
	DIR* file = opendir(".");
	if (file != NULL)
		ft_putendl(Success);
	else
		ft_putendl(Failed to open directory);
}
									//reading a directory
struct dirent *readdir(DIR* dir)
{
	DIR* file = opendir(".");
	if (file != NULL)
	{
		dir = readdir(file);
	}
	else
		ft_putendl(Failed to open directory);
}
									//closing a directory
int	*closedir(DIR* dir)
{
	int		dirclose = closedir(file);
	if(dirclose == 0)
		ft_putendl(Success);
	else
		ft_putendl(Failed to open directory);
}	
