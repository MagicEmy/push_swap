/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_small.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 15:35:46 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/01 15:50:03 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_list *stack)
{
	t_list	*temp;

	if (!is_sorted(stack))
	{
		temp = stack->next;
		stack->next = stack->next->next;
		stack->next->next = temp;
	}
}


/*
void	sorting_tree(t_list **stack_a, t_list **stack_b)
{
	if ()
	{
		sort_2
	}
}

void		sort_2(t_stack **stack)
{
	if ((*stack)->val > (*stack)->next->val)

}
*/
