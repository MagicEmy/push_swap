/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:28:09 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/01 15:22:24 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insert_end(t_list **first, int val)
{
	t_list	*new_el;
	t_list	*current;

	current = *first;
	new_el = (t_list *)malloc(sizeof(t_list));
	if (!new_el)
		return ;
	new_el->number = val;
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

int	ft_atoi(char *str)
{
	long int	number;
	int			sign;
	int			i;

	number = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (int)str[i] - '0';
		i++;
	}
	return (number * sign);
}

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
			printf("not digit\n");
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
				printf("double input\n");
				return (1);
			}
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}
