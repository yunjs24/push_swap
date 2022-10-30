/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:45:29 by junsyun           #+#    #+#             */
/*   Updated: 2022/10/30 23:59:03 by junsyun          ###   ########.fr       */
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
}	t_stack;

/* valid check or error */
void	print_manual(void);

/* instruction Rules */
void		sa(t_stack *a, int flag);
void		sb(t_stack *b, int flag);
void		ss(t_stack a, t_stack b);
void		pa(t_stack a, t_stack b);
void		pb(t_stack a, t_stack b);
void		ra(t_stack *a, int flag);
void		rb(t_stack *b, int flag);
void		rr(t_stack a, t_stack b);
void		rra(t_stack *a, int flag);
void		rrb(t_stack *b, int flag);
void		rrr(t_stack a, t_stack b);


#endif