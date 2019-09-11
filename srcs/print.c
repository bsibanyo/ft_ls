/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:07:18 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/11 11:50:23 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	ft_print_type(t_file tmp, t_flags flag)
{
	if (S_ISDIR(tmp()->st_mode))
		ft_foldername(tmp()->name);
	else if (S_ISLNK(tmp()->node)
		ft_symbolic_link(tmp, flag);
	else if (((tmp)->st_mode > 0) && S_IEXEC && (tmp)->st_mode)
		ft_execute((tmp)->name);
	else if (S_ISREG(tmp)->st_mode)
		ft_putendl((tmp)->name);
	else
		ft_putchar('\0');
}

void	ft_time(struct stat st, t_flags flag)
{
	int c;
	char date[50];
	
	ft_memset(date, 0, sizeof(date));
	ft_strcpy(date, ctime(&st.st_mode), sizeof(date));
	c = 0;
	while (date[c] != '\0')
	{
		if (date[c] == '\n')
			date[c] = '\0';
		c++;
		
	}
	ft_putstr(date);
	ft_putchar(" ");
}
