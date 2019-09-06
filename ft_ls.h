/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:41:33 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/06 12:48:02 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS.H									//"if the following is not defined."
#define FT_LS.H
#include "./libft/libft.h"
#include <dirent.h>
#include <sys/types.h>
#include <sys/tat.

typedef struct		s_list						//typedef declaration
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;




#endif
