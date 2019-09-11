/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:26:47 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/11 14:04:15 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h""

void		init_flags(t_flags *flag)
{
	flag->a = FALSE;
	flag->l = FALSE;
	flag->R = FALSE;
	flag->r = FALSE;
	flag->t = FALSE;
}

void		ft_flags_error(char c, char *s, int x)
{
	if (x == 1)
	{
		ft_putstr("ls: illegal option -- -");
		ft_putchar(c);
		ft_putendl("usage: ls [alRrt] [file ...]");
	}
	else
	{
		ft_putstr("ls:");
		ft_putstr(s);
		ft_putendl(": No such file or directory")
	}
}

void		ft_flags(char *flags, t_flags *flag, int i)
{
	if (flag[i] == a)
		flag->a = TRUE;
	if (flag[i] == l)
		flag->l = TRUE;
	if (flag[i] == R)
		flag->R = TRUE;
	if (flag[i] == r)
		flag->r = TRUE;
	if (flag[i] == t)
		flag->t = TRUE;
	else
	{
		ft_flags_error(flags[i], "Nothing", 1)
	}
}
