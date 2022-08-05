/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/03 12:46:09 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/05 16:32:03 by emlicame      ########   odam.nl         */
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
	write(1, "sa\n", 3);
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
	write(1, "ra\n", 3);
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
	write(1, "rra\n", 4);
}

//remove from top a add on top b
void	push_to_b(t_list **from, t_list **to)
{
	t_list	*temp;

	temp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = temp;
	write(1, "pb\n", 3);
}

void	push_to_a(t_list **from, t_list **to)
{
	t_list	*temp;

	temp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = temp;
	write(1, "pa\n", 3);
}
