/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:29:58 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/10 13:30:15 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_flags(int *flags, char *str)
{
	while (*str != '\0')
	{
		if (*str == 'l' || *str == 'a' || *str == 'r' || *str == 't')
		{
			if (*str == 'l')
				*flags |= FLAG_L;
			if (*str == 'a')
				*flags |= FLAG_A;
			if (*str == 'r')
				*flags |= FLAG_R;
			if (*str == 't')
				*flag |= FLAG_T;
}
