/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_permission.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:28:16 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/10 13:29:31 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"
#include <sys/stat.h>

void		ft_get_user_permission(struct stat st)
{
	mode_t	permission;

	permission = st.st_mode & S_IRWXU;
	if (permission & S_IRUSR)
		ft_putchar("r");
	else
		ft_putchar("-");
	if (permission & S_IWUSR)
		ft_putchar("w");
	else
		ft_putchar("-");
	if (permission & S_IXUSR)
		ft_putchar("x");
	else
		ft_putchar("-");
}

void		ft_group_permission(struct stat st)
{
	mode_t	permission;

	permission = st.st_mode & S_IRWXG;
	if (permission & S_IRGRP)
		ft_putchar("r");
	else
		ft_putchar("-");
	if (permission & S_IWGRP)
		ft_putchar("w");
	else
		ft_putchar("-");
	if (permission & S_IXGRP)
		ft_putchar("x");
	else
		ft_putchar("-");
}

void		ft_isdir(struct stat st)
{
	if (S_ISDIR(st.st_mode))
		ft_putchar("d");
}
