/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:56:30 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/11 19:12:48 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_and_free(t_list *stack_a, t_list *stack_b)
{
	if (stack_a)
		list_clear(&stack_a);
	if (stack_b)
		list_clear(&stack_b);
	write(2, "Error\n", 6);
}

void	sorting_tree(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	else if (list_size(*stack_a) == 2)
		rotate(stack_a);
	else if (list_size(*stack_a) == 3)
		sort_3(stack_a);
	else if (list_size(*stack_a) <= 5)
		sort_5(stack_a, stack_b);
}
	// else if (list_size(stack_a) <= 100)
	// 	sort_100(stack_a, stack_b);
	// else if (list_size(stack_a) <= 500)
	// 	sort_500(stack_a, stack_b);

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (!check_input(&stack_a, argv))
		return (0);
//	print_index(stack_a);
	sorting_tree(&stack_a, &stack_b);
	print_list(stack_a);
	print_index(stack_a);
	return (0);
}
