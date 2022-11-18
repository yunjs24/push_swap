/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:20:09 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/18 13:20:11 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int	tmp;
	int	j;

	while (--size)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (arr[size] < arr[j])
			{
				tmp = arr[size];
				arr[size] = arr[j];
				arr[j] = tmp;
			}
			j--;
		}
	}
}

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	isspace_check(char *s)
{
	int	i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	return (i);
}
