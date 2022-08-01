/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:56:30 by emlicame      #+#    #+#                 */
/*   Updated: 2022/07/06 19:24:17 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_list *stack)
{
	t_list	*tmp;

	while (stack->next)
	{
		tmp = stack->next;
		if (stack->number > tmp->number)
			return (0);
		stack = stack->next;
	}
	return (1);
}

//test printing
void    print_list(t_list *stack)
{
    t_list	*curr;
	curr = stack;
	while (curr != NULL)
	{
		printf("%d ", curr->number);
		curr = curr->next;
	}
	printf("\n");
}
