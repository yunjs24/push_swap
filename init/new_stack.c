/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:45:21 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/08 23:46:51 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_stack(void)
{
    t_stack *tmp;
    
    tmp = (t_stack *)malloc(sizeof(t_stack));
    if (tmp == NULL)
        error_handle(1);
    tmp->first = NULL;
    tmp->last = NULL;
    tmp->size = 0;
}
