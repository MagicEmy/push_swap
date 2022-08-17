/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 14:32:10 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/17 17:29:31 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix(t_list **stack_a, t_list **stack_b, int j)
{
	int	len;
	int	i;

	i = 0;
	len = list_size(*stack_a);
	while (len--)
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
	while (*stack_b)
	{
		push_to_a(stack_b, stack_a);
	}
}

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
	while (i < max_bits)
	{
		if (is_sorted(*stack_a))
			break ;
		radix(stack_a, stack_b, i);
		i++;
	}
}
