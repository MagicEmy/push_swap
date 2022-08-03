/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   actions.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/03 12:46:09 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/03 12:46:18 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*temp;

	temp = list_last(*stack);
	temp->next = *stack;
	*stack = (*stack)->next;
	temp->next->next = 0;
	write(1, "ra\n", 3);
}
