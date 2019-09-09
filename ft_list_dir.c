/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:56:22 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/09 11:01:28 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		ft_list_dir(char *path)
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
