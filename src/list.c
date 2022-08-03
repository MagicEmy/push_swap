/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 13:20:13 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/03 12:32:22 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int list_size(t_list *stack_a)
{
    t_list *current;
    int     n_elements;

    n_elements = 0;
    if (!stack_a)
        return (0);
    else
        current = stack_a;
    while (current)
    {
        n_elements++;
        current = current->next;
    }
    return (n_elements);
}

t_list	*list_last(t_list *stack)
{
	t_list	*last;

	last = 0;
	while (stack)
	{
		last = stack;
		stack = stack->next;
	}
	return (last);
}