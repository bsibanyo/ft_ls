/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selected.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:23:57 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/13 14:24:35 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void		select_check(char *str)
{
	ft_putstr("ls: ");
	ft_putstr(str);
	ft_putendl("no such file and directory");
	return (NULL);

}

void	check_dir(t_files *tmp, char *curr_dir, t_flags flag)
{
	char	*new_path;

	if (IS_DIR((tmp)->st_mode))
		if (((tmp)->name[0] == ".") && ft_strcmp((tmp)->name, ".") != 0
				&& ft_strcmp((tmp)->name, "..") != 0 || (tmp)->name[0] != ".")
		{
			new_path = make_path(curr_dir, (tmp)->name);
			if (!flag.a)
			{
				if (tmp->name[0] != ".")
				{
					ft_putchar('\n');
					ft_putendl(new_path);
					(tmp)->sub_dir = ft_list(new_path, flag);
				}
			}
		}
		else
		{
			ft_putchar('\n');
			ft_putendl(new_path);
			(tmp)->sub_dir = ft_list(new_path, flag);
		}
	free(new_path);
}

void		ft_symbolic_link(t_files *file, char *path, t_flags flag)
{
	size_t	length;
	size_t	link_size;
	size_t	cont_size;
	char 	*link;
	char	buff[1024];

	link_size = 0;
	cont_size = 0;
	link_size = read_link(path, buff, sizeof(flag));
	buff[link_size] = '\0';
	if (flag.l == TRUE)
	{
		l = (ft_strlen("->") + ft_strlen(buff));
		if (!(link = (char*)malloc(sizeof(char) * l + 1)))
			ft_exit("error in malloc link ");
		link = ft_strcpy(link, "->");
		if (link_size < 0)
			file->link = ft_strjoin(link, ft_strjoin("Private/", path ));
		else
			file->link = ft_strjoin(link, buff);
		free(link);
	}
}
