/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: emanuela <emanuela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/02 13:20:13 by emanuela      #+#    #+#                 */
/*   Updated: 2022/08/17 15:17:53 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	list_size(t_list *stack_a)
{
	t_list	*current;
	int		n_elements;

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
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

void	insert_end(t_list **first, long int val)
{
	t_list	*new_el;
	t_list	*current;

	current = *first;
	new_el = (t_list *)malloc(sizeof(t_list));
	if (!new_el)
		return ;
	new_el->number = val;
	new_el->index = -1;
	new_el->next = NULL;
	if (*first == NULL)
	{
		*first = new_el;
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_el;
}

void	list_clear(t_list **lst)
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		free (*lst);
		*lst = temp;
	}
}
