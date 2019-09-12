/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:36:17 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/11 13:43:19 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"


void	ft_foldername(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}

void ft_symbolic_link(t_files *file, t_flags *flag)
{
	ft_putstr(file->name);
	if (flag.l == TRUE)
		ft_putstr(file->link);
	ft_putchar('\n');
}

void ft_execute(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}
