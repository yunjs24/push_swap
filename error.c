#include "push_swap.h"

void	error_handle(int val)
{
	if (val)
		write(2, "Error\n", 6);
	exit (1);
}
