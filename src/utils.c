/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 14:22:25 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/16 18:39:03 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min_index(t_list *stack)
{
	int		min;
	t_list	*temp;

	temp = stack;
	min = INT_MAX;
	while (temp)
	{
		if (temp->number < min && temp->index < 0)
			min = temp->number;
		temp = temp->next;
	}
	return (min);
}

int	find_min(t_list **stack)
{
	int		min;
	t_list	*temp;

	temp = *stack;
	min = INT_MAX;
	while (temp)
	{
		if (temp->number < min)
			min = temp->number;
		temp = temp->next;
	}
	return (min);
}

int	find_max(t_list **stack)
{
	int		max;
	t_list	*temp;

	temp = *stack;
	max = INT_MIN;
	while (temp)
	{
		if (temp->number > max)
			max = temp->number;
		temp = temp->next;
	}
	return (max);
}

int	ft_atoi(char *str)
{
	long int	number;
	int				sign;
	int				i;

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
