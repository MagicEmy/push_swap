/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 14:32:10 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/15 19:19:29 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int	max_bits;
	int	max;
	int	i;

	i = 0;
	max = list_size(*stack_a);
	max_bits = 0;
	while (max >> max_bits != 0)
	{
		max_bits++;
	}
	printf ("max_bits = %d \nmax = %d\n", max_bits, max);
	while (i < max_bits)
	{
		if(is_sorted(*stack_a))
			break;
		printf("Hello\n");
		radix(stack_a, stack_b, i);
		printf("Hello again\n");
		i++;
	}
}

void	radix(t_list **stack_a, t_list **stack_b, int j)
{
	int	len;
	int	i;
	
	i = 0;
	len = list_size(*stack_a);
	while(len--)
		{
			if ((((*stack_a)->index >> j) & 1) == 1)
			{
				rotate(stack_a);
			}
			else
			{
				push_to_b(stack_a, stack_b);
			}
		}
	while (stack_b)
	{
		write(1, "push_to_a\n", 10);
		push_to_a(stack_b, stack_a);
	}
}

