/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:45:29 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/12 23:49:28 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bot;
	int		size;
}	t_stack;

typedef struct s_tuple
{
	t_stack	*A;
	t_stack	*B;
}				t_tuple;

/* valid check or error */
void	print_manual(void);

/* instruction Rules */
void		sa(t_stack *a, int flag);
void		sb(t_stack *b, int flag);
void		ss(t_tuple tuple);
void		pa(t_tuple tuple);
void		pb(t_tuple tuple);
void		ra(t_stack *a, int flag);
void		rb(t_stack *b, int flag);
void		rr(t_tuple tuple);
void		rra(t_stack *a, int flag);
void		rrb(t_stack *b, int flag);
void		rrr(t_tuple tuple);


#endif