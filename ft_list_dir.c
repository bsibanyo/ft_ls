/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:22:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/06 14:26:39 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

									//opening a directory
DIR	*opendir(const char *filename)
{
	DIR* file = opendir(".");
	if (file != NULL)
		printf("Success");
	else
		printf("Failed to open directory");
}
									//reading a directory
struct dirent *readdir(DIR* dir)
{
	DIR* file = opendir(".");
	if (file != NULL)
	{
		read = readdir(file);
	}
	else
		return(0);
}
									//closing a directory
int	*closedir(DIR* dir)
{
	int		dirclose = closedir(file);
	if(dirclose == 0)
		printf("Success");
	else
		printf("Failed to open directory");
}	
