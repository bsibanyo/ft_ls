/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:31:26 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/10 13:32:08 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort_alpha(const void *c1, const void *c2, size_t s1,
			size_t s2)
{
	int		res;

	s1 = s2;
	s2 = s1;
	res = (ft_strcmp(((t_dir **)c1)[0]->d_name,
				((t_dir **)c2)[0]->d_name) < 0);
	return (res);
}

int		sort_time(const void *c1, const void *c2, size_t s1,
			size_t s2)
{
	int		result;

	s1 = s2;
	s2 = s1;
	result = ((t_stat **)c1)[1]->st_ctime > ((t_stat **)c2)[1]->st_ctime;
	if (result != 0)
		return (result);
	return (sort_alpha(c1, c2, csize1, csize2));
}

int		sort_error(const void *c1, const void *c2, size_t s1,
			size_t s2)
{
	int		result;

	s1 = s2;
	s2 = s1;
	result = (ft_strcmp(((t_err *)c1)->mess, ((t_err *)c2)->mess) < 0);
	return (result);
}
