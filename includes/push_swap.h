/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:26:42 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/03 17:42:04 by emanuela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>


typedef struct s_list
{
	int				number;
	struct s_list	*next;
}t_list;

int		ft_atoi(char *str);
int		check_digit(char *av_x);
int		check_doubles(t_list *stack);
void	insert_end(t_list **first, int val);
t_list	*list_last(t_list *stack);
int		is_sorted(t_list *stack);
void	print_list(t_list *stack);
int 	list_size(t_list *stack_a);
void	sorting_tree(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
void	swap(t_list **stack);
void	rotate(t_list **stack);
void	rev_rotate(t_list **stack);
#endif