/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt_pb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:21:48 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/18 13:22:23 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_pb(t_a_b *info)
{
	info->a_stack->size--;
	info->b_stack->size++;
}

void	pb(t_a_b *info, int flag)
{
	t_node	*tmp;

	if (info->a_stack->size < 1)
		return ;
	tmp = info->a_stack->top;
	info->a_stack->top = tmp->next;
	if (info->a_stack->size > 1)
		tmp->next->prev = NULL;
	else
		info->a_stack->bot = NULL;
	if (info->b_stack->size > 0)
	{
		tmp->next = info->b_stack->top;
		info->b_stack->top->prev = tmp;
		info->b_stack->top = tmp;
	}
	else
	{
		tmp->next = NULL;
		info->b_stack->top = tmp;
		info->b_stack->bot = tmp;
	}
	_pb(info);
	if (flag)
		write(1, "pb\n", 3);
}
