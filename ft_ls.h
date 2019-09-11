/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:41:33 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/11 14:12:27 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H									//"if the following is not defined."
#define FT_LS_H
#include "./libft/libft.h"
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>
#include <pwd.h>
#include <fcntl.h>
#include <grp.h>

//#include "ft_list_dir.c"

typedef		int t_bool

typedef 	struct s_files
{
	char 			*name;
	char			*link;
	struct			s_files *next;
	struct			s_files *preview;
	struct			s_files *sub_dir;
	struct			stat  stat;
	time_t			mtime;
	time_t			atime;

}					t_files

typedef		struct s_flags
{
	t_bool			a;
	t_bool			l;
	t_bool			R;
	t_bool			r;
	t_bool			t;

}					t_flags

typedef		struct	s_r
{
	DIR				*ds;
	struct	dirent 	*d;
	t_files			*files;

}					t_r

typedef 	struct	s_start
{
	int		start;
	int		selected;

}					t_start

typedef		struct	s_list
{
	t_files			*files;
	t_files			tmp;
	t_files			tmp2;
}					t_list

typedef		struct	s_single
{
	t_files			*alist;
	struct	stat  	fstat;
	char			*nw_path;

}					t_single


typedef		struct	s_main
{
	t_flags			cflags;
	int 			start;
	char			*pwd;
}					t_main

#endif
