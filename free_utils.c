/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:18:29 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/18 13:19:55 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *s)
{
	t_node	*node;

	while (s->bot != NULL)
	{
		node = s->bot;
		s->bot = s->bot->prev;
		node->prev = NULL;
		if (s->bot != NULL)
			s->bot->next = NULL;
		free(node);
	}
	if (s->top != NULL)
		s->top = NULL;
	free(s);
}

void	free_info(t_a_b **info)
{
	free_stack((*info)->a_stack);
	free_stack((*info)->b_stack);
	free(*info);
	*info = NULL;
}

void	free_arr(int *arr)
{
	free(arr);
	arr = NULL;
}
