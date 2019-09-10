/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:46:55 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/09 12:10:25 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include "ft_list_dir.c"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		ft_list_dir(".");
	else
	{
		while (argv[i])
			ft_list_dir(argv[i++]);
	}
}
