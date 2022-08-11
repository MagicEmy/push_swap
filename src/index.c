/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 14:19:28 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/11 19:13:35 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_list(t_list *stack)
{
	int		i;
	int		len;
	int		min;
	t_list	*curr;

	i = 0;
	len = list_size(stack);
	min = find_min_index(stack);
	curr = stack;
	while (i < len)
	{
		curr = stack;
		while (curr != NULL)
		{
			if (curr->number == min)
			{
				curr->index = i;
				printf("[%d]", curr->index);
				printf("number %d\n", curr->number);
			}
			curr = curr->next;
		}
		min = find_min_index(stack);
		printf("##%d##\n", min);
		i++;
	}
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

