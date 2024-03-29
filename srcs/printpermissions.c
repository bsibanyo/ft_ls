/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpermissions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:50:16 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/16 09:50:59 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void							ft_isdir(struct stat st)
{
	if (S_ISDIR(st.st_mode))
		ft_putchar('d');
	else
		ft_putchar('-');
}

void							ft_usrpermission(struct stat st)
{
	mode_t					permission;

	permission = st.st_mode & S_IRWXU;
	if (permission & S_IRUSR)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (permission & S_IWUSR)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (permission & S_IXUSR)
		ft_putchar('x');
	else
		ft_putchar('-');
}

void							ft_grppermission(struct stat st)
{
	mode_t					permission;

	permission = st.st_mode & S_IRWXG;
	if (permission & S_IRGRP)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (permission & S_IWGRP)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (permission & S_IXGRP)
		ft_putchar('x');
	else
		ft_putchar('-');
}

void							ft_othpermission(struct stat st)
{
	mode_t					permission;

	permission = st.st_mode & S_IRWXO;
	if (permission & S_IROTH)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (permission & S_IWOTH)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (permission & S_IXOTH)
		ft_putchar('x');
	else
		ft_putchar('-');
	ft_putchar(' ');
}

void							ft_printpermissions(struct stat st)
{
	ft_isdir(st);
	ft_usrpermission(st);
	ft_grppermission(st);
	ft_othpermission(st);
}
