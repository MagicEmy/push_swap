/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/03 12:46:09 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/16 15:51:06 by emlicame      ########   odam.nl         */
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
void	push_to_b(t_list **from_a, t_list **to_b)
{
	t_list	*temp;

	if (!*from_a)
		return ;
	temp = *from_a;
	if ((*from_a)->next == NULL)
		*from_a = NULL;
	else
		*from_a = (*from_a)->next;
	ft_lstadd_front(to_b, temp);
	write(1, "pb\n", 3);
}

void	push_to_a(t_list **from_b, t_list **to_a)
{
	t_list	*temp;

	if (!*from_b)
		return ;
	temp = *from_b;
	if ((*from_b)->next == NULL)
		*from_b = NULL;
	else
		*from_b = (*from_b)->next;
	ft_lstadd_front(to_a, temp);
	write(1, "pa\n", 3);
}
