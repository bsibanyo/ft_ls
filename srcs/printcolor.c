/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcolor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:53:30 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/16 09:53:36 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void			ft_folder_color_r(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}

void			ft_exec_color_r(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}

void			ft_symlinkcolor(t_files *file, t_flags flags)
{
	ft_putstr(file->name);
	if (flags.l == TRUE)
		ft_putstr(file->link);
	ft_putchar('\n');
}
