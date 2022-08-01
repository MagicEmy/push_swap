/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:56:30 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/01 15:42:46 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		x;

	x = 1;
	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
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
		insert_end(&stack_a, ft_atoi(argv[x]));
		x++;
	}
	if (check_doubles(stack_a))
		return (0);
	// if (is_sorted(stack_a))
	// 	printf("sorted\n");
	// else
	// 	printf("not sorted\n");
	if (!is_sorted(stack_a))
		sort_2(stack_a);
	//sorting_tree(&stack_a, &stack_b);
	print_list(stack_a);
	return (0);
}
