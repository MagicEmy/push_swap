/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 14:19:28 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/11 15:06:54 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	index_list(t_list *stack)
{
	int		i;
	t_list	*curr;
	int		*index_array;

	i = 0;
	curr = stack;
	while (curr != NULL)
	{
		curr->index = i;
		curr = curr->next;
		i++;
	}
	index_array = (int *)malloc(sizeof(int) * i);
	if (!index_array)
		return (0);
}

void	print_index(t_list *stack)
{
	t_list	*curr;

	curr = stack;
	while (curr != NULL)
	{
		printf("%d ", curr->index);
		curr = curr->next;
	}
	printf("\n");
}
