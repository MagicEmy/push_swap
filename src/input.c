/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:28:09 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/15 19:48:54 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//check if input is digit
int	check_digit(char *av_x)
{
	int	i;

	i = 0;
	if (!av_x)
		return (0);
	if (av_x[i] == '-')
		i++;
	while (av_x[i] != '\0')
	{
		if (av_x[i] >= '0' && av_x[i] <= '9')
			i++;
		else
		{
			error_and_free(0, 0);
			return (0);
		}
	}
	return (1);
}

int	check_doubles(t_list *stack)
{
	t_list	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->number == stack->number)
			{
				error_and_free(stack, 0);
				return (1);
			}
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	check_input(t_list **stack_a, char **argv)
{
	int	x;

	x = 1;
	while (argv[x] != NULL)
	{
		if (check_digit(argv[x]))
			x++;
		else
			return (0);
	}
	x = 1;
	while (argv[x] != NULL)
	{
		insert_end(stack_a, ft_atoi(argv[x]));
		x++;
	}
	if (check_doubles(*stack_a))
		return (0);
	index_list(*stack_a);
	return (1);
}

t_list	*ft_lstnew(int value)
{
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list));
	if (!new_el)
		return (NULL);
	new_el->number = value;
	new_el->next = NULL;
	return (new_el);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addlast;

	addlast = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (addlast)
		addlast = addlast->next;
	// addlast = ft_lstlast(*lst);
	addlast = new;
}
/*
b		a
1		
2
3
*/