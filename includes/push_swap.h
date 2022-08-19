/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:26:42 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/18 20:16:29 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	long int		number;
	int				index;
	struct s_list	*next;
}t_list;

//input check
int			check_input(t_list **stack_a, char **argv);
void		error_and_free(t_list *stack_a, t_list *stack_b);

//lists
void		insert_end(t_list **first, long int val);
t_list		*list_last(t_list *stack);
int			is_sorted(t_list *stack);
int			list_size(t_list *stack_a);
void		list_clear(t_list **lst);
void		ft_lstadd_front(t_list **lst, t_list *new);

//indexing
void		index_list(t_list *stack);

//sorting
void		sorting_tree(t_list **stack_a, t_list **stack_b);
void		sort_3(t_list **stack_a);
void		sort_5(t_list **stack_a, t_list **stack_b);
void		sort_big(t_list **stack_a, t_list **stack_b);

//actions
void		swap(t_list **stack);
void		rotate(t_list **stack);
void		rev_rotate(t_list **stack);
void		push_to_b(t_list **from_a, t_list **to_b);
void		push_to_a(t_list **from_b, t_list **to_a);

//utils
long int	ft_atol(char *str);
int			find_min(t_list **stack);
int			find_max(t_list **stack);
#endif