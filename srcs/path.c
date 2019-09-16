/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:53:10 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/16 09:53:19 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

char				*make_path_fl(char *dir, char *file)
{
	char			*nw_path;
	size_t			l;

	l = ft_strlen(dir) + ft_strlen(file);
	l += 1;
	nw_path = NULL;
	if (!(nw_path = (char*)malloc(sizeof(char) * l + 1)))
		return (NULL);
	if (file[0] == '/' || file[0] == '~')
		nw_path = ft_strdup(file);
	else
	{
		nw_path = ft_strcpy(nw_path, dir);
		nw_path = ft_strcat(nw_path, "/");
		nw_path = ft_strcat(nw_path, file);
	}
	return (nw_path);
	ft_strdel(&nw_path);
}
 
