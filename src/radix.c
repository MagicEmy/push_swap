/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 14:32:10 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/12 15:50:47 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int	bits;
	int	max;
	
	max = list_size(*stack_a) - 1;
	bits = 0;
	while (max >> bits != 0)
	{
		if(is_sorted(*stack_a))
			break;
		radix(stack_a, stack_b, bits);
		bits++;
	}
}

void	radix(t_list **stack_a, t_list **stack_b, int bits)
{
	int	len;
	
	len = list_size(*stack_a);
	while(len--)
		{
			if(((*stack_a)->index >> bits)&& 1)
				push_to_b(stack_a, stack_b);
			else
				rotate(stack_a);
		}
		while (stack_b)
			push_to_a(stack_b, stack_a);
}