#include "push_swap.h"

void	checker(t_a_b *info)
{
	char	*prompt;

	prompt = get_next_line(0);
	while (prompt)
	{
		do_prompt(info, prompt);
		free(prompt);
		prompt = NULL;
		prompt = get_next_line(0);
	}
	if (info->b_stack->size == 0 && sort_check(info) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	do_prompt(t_a_b *info, char *prompt)
{
	if (ft_strncmp(prompt, "pa\n", 10) == 0)
		pa(info, 0);
	else if (ft_strncmp(prompt, "pb\n", 10) == 0)
		pb(info, 0);
	else if (ft_strncmp(prompt, "ra\n", 10) == 0)
		ra(info->a_stack, 0);
	else if (ft_strncmp(prompt, "rb\n", 10) == 0)
		rb(info->b_stack, 0);
	else if (ft_strncmp(prompt, "rr\n", 10) == 0)
		rr(info, 0);
	else if (ft_strncmp(prompt, "rra\n", 10) == 0)
		rra(info->a_stack, 0);
	else
		do_prompt2(info, prompt);
}

void	do_prompt2(t_a_b *info, char *prompt)
{
	if (ft_strncmp(prompt, "rrb\n", 10) == 0)
		rrb(info->b_stack, 0);
	else if (ft_strncmp(prompt, "rrr\n", 10) == 0)
		rrr(info, 0);
	else if (ft_strncmp(prompt, "sa\n", 10) == 0)
		sa(info->a_stack, 0);
	else if (ft_strncmp(prompt, "sb\n", 10) == 0)
		sb(info->b_stack, 0);
	else if (ft_strncmp(prompt, "ss\n", 10) == 0)
		ss(info, 0);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

int	main(int ac, char *av[])
{
	t_a_b	*info;
	int		*arr;

	if (ac < 2)
		return (0);
	info = new_info();
	data_parsing(info, ac, av);
	arr = data_arr(info);
	free(arr);
	checker(info);
	free_info(&info);	
	return (0);
}
