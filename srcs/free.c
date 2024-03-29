/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:52:00 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/16 09:52:07 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void					ft_free_lst(t_files *file)
{
	t_files			*curr;

	while ((curr = file) != NULL)
	{
		file = file->next;
		free(curr->name);
		if (S_ISLNK((curr)->st_mode))
		{
			free(curr->link);
		}
		free(curr);
	}
}

void					ft_free_lst_rvrs(t_files *file)
{
	t_files			*curr;

	while ((curr = file) != NULL)
	{
		file = file->prev;
		free(curr->name);
		if (S_ISLNK((curr)->st_mode))
		{
			free(curr->link);
		}
		free(curr);
	}
}

void					ft_free_r(t_files *file)
{
	t_files			*curr;

	while ((curr = file) != NULL)
	{
		if (S_ISDIR((file)->st_mode))
		{
			if (((file)->name[0] == '.'
				&& ft_strcmp((file)->name, ".") != 0
				&& ft_strcmp((file)->name, "..") != 0)
				|| (file)->name[0] != '.')
				ft_free_r(file->sub_dir);
		}
		file = file->next;
		free(curr->name);
		if (S_ISLNK((curr)->st_mode))
			free(curr->link);
		free(curr);
	}
}
