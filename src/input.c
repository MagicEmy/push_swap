/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:28:09 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/11 18:40:53 by emlicame      ########   odam.nl         */
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
