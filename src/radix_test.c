/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 16:07:41 by emlicame      #+#    #+#                 */
/*   Updated: 2022/08/12 14:27:38 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Radix Sort in C Programming

#include "../includes/push_swap.h"
#include <stdio.h>

void	radix_sort(t_list **a, t_list **b, int max, t_list *instructions)
{
	int	bitshift;

	bitshift = 0;
	while (bitshift != max)
	{
		*a = radix_loop(*a, *b, bitshift, instructions);
		if (!check_sort(*a))
			break ;
		bitshift++;
	}
	return ;
}

// Function to get the largest element from an array
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place) {
  int output[size + 1];
  int max = (array[0] / place) % 10;

  for (int i = 1; i < size; i++) {
    if (((array[i] / place) % 10) > max)
      max = array[i];
  }
  int count[max + 1];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;
    
  // Calculate cumulative count
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int array[], int size) {
  // Get maximum element
  int max = getMax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}

// Print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printArray(array, n);
}

t_list	*radix_loop(t_list *a, t_list *b, int bitshift, t_list *instructions)
{
	int	list_size;

	list_size = ft_lstsize(a);
	while (list_size--)
	{
		if (!((a->number >> bitshift) & 1))
			push(&a, &b);
		else
			rotate(&a);
	}
	while (b)
	{
		push(&b, &a);
	}
	return (a);
}
