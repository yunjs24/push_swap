/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:33:40 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/12 23:56:13 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_tuple *tuple)
{
	t_node	*node;

	node = tuple->A->top;
	while (node->next)
	{
		if (node->value > node->next->value)
			return (1);
		node = node->next;
	}
	return (0);
}
