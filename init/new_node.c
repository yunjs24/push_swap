/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:44:31 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/08 23:44:44 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *new_node(int val)
{
    t_node  *tmp;
    tmp = (t_node *)malloc(sizeof(t_node));
    if (tmp == NULL)
        error_handle(1);
    tmp->next = NULL;
    tmp->prev = NULL;
    tmp->num = val;
    return (tmp);
}
