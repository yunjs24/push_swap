/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:42:29 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/08 23:50:03 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tuple *init(void)
{
    t_tuple *tmp;

    tmp = (t_tuple *)malloc(sizeof(t_tuple));
    if (tmp == NULL)
        error_handle(1);
    tmp->a_stack = new_stack();
    tmp->b_stack = new_stack();
    return (tmp);
}
