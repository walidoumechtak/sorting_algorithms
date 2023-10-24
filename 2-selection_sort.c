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

	for (size_t i = 0; i < size; i++)
	{
		min_index = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
