/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/03 12:46:09 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/03 17:31:30 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **stack)
{
	int	first;
	int	second;

	first = (*stack)->number;
	second = (*stack)->next->number;
	(*stack)->number = second;
	(*stack)->next->number = first;
	write(2, "sa\n", 3);
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = list_last(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	write(2, "ra\n", 3);
}

void	rev_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	last = *stack;
	temp = *stack;
	while (last->next)
	{
		temp = last;
		last = last->next;
	}
	last->next = *stack;
	temp->next = NULL;
	*stack = last;
	write(2, "rra\n", 4);
}

/*
void	rotate(t_list **stack)
{
	t_list	*last;

	last = list_last(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	last->next->next = NULL;
	write(2, "ra\n", 3);
}
*/
