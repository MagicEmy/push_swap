/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 16:07:41 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/11 14:58:25 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>

int	main(void)
{
	printf("%d\n", 1 & 5); >> << 
	return (0);
}

while lists != NULL
if current > next
	not sorted

//if (value & 1) == 0
	// push to b
//0101 5  &
					//0100 4
//0011 3
					//0010 2
//0001 1
//push back
// value = value *2

//if (value & 2) == 0
	// push to b

//0010 2
	//0100 4
	//0101 5				
//0011 3			
	//0001 1
//push back
// value = value *2

//if (value & 4) == 0
	// push to b
//0100 4
//0101 5
		//0001 1
//0010 2
	//0011 3			
	
//push back
// value = value *2
//if (value & 4) == 0
	// push to b
//0100 4
//0101 5
		//0001 1
//0010 2
	//0011 3			
	
//push back
// value = value *2
/*
/*
void	sort_index(t_list *stack)
{
	int		len;
	t_list	*curr;

	len = list_size(stack);
	curr = stack;
	while (len > 0)
	{
		if (stack->index > stack->next->index)
			swap_index(stack);
		curr = curr->next;
		len--;
	}
}

void	swap_index(t_list *stack)
{
	int	first;
	int	second;

	first = stack->index;
	second = stack->next->index;
	stack->index = second;
	stack->next->index = first;
}
*/