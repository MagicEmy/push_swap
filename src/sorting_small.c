/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_small.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 15:35:46 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/10 14:34:00 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;

	min = find_min(stack_a);
	max = find_max(stack_a);
	while (list_size(*stack_a) > 3)
	{
		if ((*stack_a)->number == min || (*stack_a)->number == max)
			push_to_b(stack_a, stack_b);
		else
			rotate(stack_a);
	}
	sort_3(stack_a);
	push_to_a(stack_b, stack_a);
	if ((*stack_a)->number > (*stack_a)->next->number)
		rotate(stack_a);
	push_to_a(stack_b, stack_a);
	if ((*stack_a)->number > (*stack_a)->next->number)
		rotate(stack_a);
}

void	sort_3(t_list **stack_a)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = (*stack_a)->number;
	num2 = (*stack_a)->next->number;
	num3 = (*stack_a)->next->next->number;
	if (num1 > num2 && num1 < num3 && num3 > num2)
		swap(stack_a);
	else if (num1 > num2 && num1 > num3 && num3 > num2)
		rotate(stack_a);
	else if (num1 < num2 && num1 > num3 && num2 > num3)
		rev_rotate(stack_a);
	else if (num1 < num2 && num1 < num3 && num2 > num3)
	{
		swap(stack_a);
		rotate(stack_a);
	}
	else if (num1 > num2 && num2 > num3 && num1 > num3)
	{
		swap(stack_a);
		rev_rotate(stack_a);
	}
}
