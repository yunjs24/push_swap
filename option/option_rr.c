/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:54:03 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/05 23:54:04 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a, int flag)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = a->last;
	a->last = tmp->prev;
	a->last->next = NULL;
	tmp->next = a->first;
	tmp->prev = NULL;
	a->first->prev = tmp;
	a->first = tmp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b, int flag)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = b->last;
	b->last = tmp->prev;
	b->last->next = NULL;
	tmp->next = b->first;
	tmp->prev = NULL;
	b->first->prev = tmp;
	b->first = tmp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_a_b	*info)
{
	if (info->a_stack->size < 2 || info->b_stack->size < 2)
		return ;
	rra(info->a_stack, 0);
	rrb(info->b_stack, 0);
	write(1, "rrr\n", 4);
}
