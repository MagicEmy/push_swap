/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 18:26:42 by emlicame      #+#    #+#                 */
/*   Updated: 2022/07/07 18:52:48 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				number;
	struct s_list	*next;
}t_list;

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
void	insert_end(t_list **first, int val);
int		check_digit(char *av_x);
int		is_sorted(t_list *stack);
int		check_doubles(t_list *stack);
void    print_list(t_list *stack);
#endif