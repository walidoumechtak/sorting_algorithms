#include "sort.h"

/**
 * selection_sort - sort an array of int using selection sort
 * @array: the array that should be sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t	min_index;
	int	temp;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = 0;
		while (j < size)
		{
			if (array[j] < array[min_index])
				min_index = j;
			j++;
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
		i++;
	}
}
