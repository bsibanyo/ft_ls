/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:45:38 by bsibanyo          #+#    #+#             */
/*   Updated: 2019/09/12 11:06:00 by bsibanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	sort_time(t_files *curr, t_files *node)
{
	if (ft_strcmp(curr->next->name, node->name) > 0)
	{
		node->next = curr->next;
		curr->next = node->next; // print time when it was modified
	}
	else 
	{
		while (curr->next != NULL && 
				curr->next->atime - node->atime == 0)
		{
			curr = curr->next;
			node->next = curr->next;
			curr = node->next;
		}
	}
}

void	sort_time_b(t_files **stack, t_files new_node)
{
	t_files *curr;

	if (*stack == NULL || (*stack)->atime - new_node->atime < 0)
	{
		new_node->next = *stack;
		*stack = new_node;
	}
	else
	{
		curr = *stack;
		while (curr->next != NULL && 
				curr->next->atime - new_node->atime > 0)
			curr = curr->next;
		if (curr->next != NULL && 
				curr->next->atime - new_node->atime == 0)
			sort_time(curr, new_node);
		else 
		{
			curr = curr->next;
			node->next = curr->next;
			curr = node->next;
		}
}
