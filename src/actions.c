/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/03 12:46:09 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/15 19:58:06 by emlicame      ########   odam.nl         */
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

	// if (!*to_b)
	// {
	// 	*to_b = ft_lstnew((*from_a)->number);
	// }
	ft_lstadd_back(to_b, ft_lstnew((*from_a)->number));
	temp = (*from_a)->next;
	// (*from_a)->next = *to_b;
	*from_a = temp;
	write(1, "pb\n", 3);
}

void	push_to_a(t_list **from_b, t_list **to_a)
{
	t_list	*temp;

	if (*from_b == NULL)
		return ;
	temp = *from_b;
	*from_b = (*from_b)->next;
	temp->next = *to_a;
	*from_b = temp;
	write(1, "pa\n", 3);
	return ;
}

int main(void) {
	t_list	*a = NULL;
	t_list *b = NULL;

	for (int i = 0; i < 3; ++i) {
		ft_lstadd_back(&a, ft_lstnew(10 - i));
	}
	while (a) {
		printf("testin %d\n", a->number);
		a = a->next;
	}
}
