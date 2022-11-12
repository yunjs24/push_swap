/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:38:51 by junsyun           #+#    #+#             */
/*   Updated: 2022/11/12 23:53:37 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	test()
{
	int	arr[10];
	printf("length of array : %d\n", sizeof(arr) / sizeof(int));
}

static int	ft_atoi(const char *str)
{
	unsigned long	ans;
	int				sign;
	int				i;

	i = 0;
	ans = 0;
	sign = 1;

	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		ans = ans * 10 + (str[i++] - 48);
		if (handle_long_max(&ans, sign))
			break ;
	}
	return ((int)ans * sign);
}

int	main(int ac, char **av)
{
	t_tuple	*tuple;
	int		*arr;

	if (ac <2)
	{
		print_manual();
		exit(1);
	}

	tuple = init();
	data_parsing(tuple, ac, av);
	if (tuple->A->size == 1)
		return(0);
	arr = data_arr(tuple);
	sort_handle(tuple, arr);
	
	
	return (0);
}
