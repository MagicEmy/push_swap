/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_small.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 15:35:46 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/03 17:54:46 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	sorting_tree(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	else if (list_size(*stack_a) == 2)
		rotate(stack_a);
	else if (list_size(*stack_a) == 3)
		sort_3(stack_a);
	else if (list_size(*stack_a) <= 5)
		rotate(stack_b); 
	// else if (list_size(stack_a) <= 100)
	// 	sort_100(stack_a, stack_b);
	// else if (list_size(stack_a) <= 500)
	// 	sort_500(stack_a, stack_b);
}
