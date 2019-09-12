/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_permission.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:28:16 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/12 10:09:04 by bsibanyo         ###   ########.fr       */
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

void		ft_other_permission(struct stat st)
{
	mode_t	permission;

	permission = st.st_mode & S_IRWXOG;
	if (permission & S_IROTH)
		ft_putchar("r");
	else
		ft_putchar("-");
	if (permission & S_IWOTH)
		ft_putchar("w");
	else
		ft_putchar("-");
	if (permission & S_IXOTH)
		ft_putchar("x");
	else
		ft_putchar("-");
}


void		ft_isdir(struct stat st)
{
	if (S_ISDIR(st.st_mode))
		ft_putchar("d");
}

void	ft_print_permission(struct stat st)
{
	ft_isdir(st);
	ft_get_user_permission(st);
	ft_group_permission(st);
	ft_other_permission(st);
}
