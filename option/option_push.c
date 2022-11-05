/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:55:16 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/05 23:55:17 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a, int flag)
{
	int	tmp;

	if (a->size < 2)
		return ;
	tmp = a->first->num;
	a->first->num = a->first->next->num;
	a->first->next->num = tmp;
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_stack *b, int flag)
{
	int	tmp;

	if (b->size < 2)
		return ;
	tmp = b->first->num;
	b->first->num = b->first->next->num;
	b->first->next->num = tmp;
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_a_b *info)
{
	if (info->a_stack->size < 2 || info->b_stack->size < 2)
		return ;
	sa(info->a_stack, 0);
	sb(info->b_stack, 0);
	write(1, "ss\n", 3);
}

void	pb(t_a_b *info)
{
	t_node	*tmp;

	if (info->a_stack->size < 1)
		return ;
	tmp = info->a_stack->first;
	info->a_stack->first = tmp->next;
	if (info->a_stack->size > 1)
		tmp->next->prev = NULL;
	else
		info->a_stack->last = NULL;
	if (info->b_stack->size > 0)
	{
		tmp->next = info->b_stack->first;
		info->b_stack->first->prev = tmp;
		info->b_stack->first = tmp;
	}
	else
	{
		tmp->next = NULL;
		info->b_stack->first = tmp;
		info->b_stack->last = tmp;
	}
	info->a_stack->size--;
	info->b_stack->size++;
	write(1, "pb\n", 3);
}

void	pa(t_a_b *info)
{
	t_node	*tmp;

	if (info->b_stack->size < 1)
		return ;
	tmp = info->b_stack->first;
	info->b_stack->first = tmp->next;
	if (info->b_stack->size > 1)
		tmp->next->prev = NULL;
	else
		info->b_stack->last = NULL;
	if (info->a_stack->size > 0)
	{
		tmp->next = info->a_stack->first;
		info->a_stack->first->prev = tmp;
		info->a_stack->first = tmp;
	}
	else
	{
		tmp->next = NULL;
		info->a_stack->first = tmp;
		info->a_stack->last = tmp;
	}
	info->b_stack->size--;
	info->a_stack->size++;
	write(1, "pa\n", 3);
}
