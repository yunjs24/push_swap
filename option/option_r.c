/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:53:26 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/05 23:53:27 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a, int flag)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = a->first;
	a->first = tmp->next;
	a->first->prev = NULL;
	tmp->next = NULL;
	tmp->prev = a->last;
	a->last->next = tmp;
	a->last = tmp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b, int flag)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = b->first;
	b->first = tmp->next;
	b->first->prev = NULL;
	tmp->next = NULL;
	tmp->prev = b->last;
	b->last->next = tmp;
	b->last = tmp;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_a_b	*info)
{
	if (info->a_stack->size < 2 && info->b_stack->size < 2)
		return ;
	ra(info->a_stack, 0);
	rb(info->b_stack, 0);
	write(1, "rr\n", 3);
}
