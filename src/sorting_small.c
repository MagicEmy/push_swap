/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_small.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 15:35:46 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/03 12:46:03 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	sorting_tree(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	else if (list_size(*stack_a) == 2)
		rotate(stack_a);
	else if (list_size(*stack_a) == 100)
		rotate(stack_b); 
	// else if (list_size(stack_a) == 3)
	// 	sort_3(stack_a);
	// else if (list_size(stack_a) == 3)
	// 	sort_5(stack_a, stack_b);
	
}
