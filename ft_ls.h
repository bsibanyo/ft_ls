/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:41:33 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/06 15:09:50 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H									//"if the following is not defined."
#define FT_LS_H
#include "./libft/libft.h"
#include <dirent.h>
#include <sys/types.h>

typedef struct		m_list						//typedef declaration
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					d_list;



#endif
