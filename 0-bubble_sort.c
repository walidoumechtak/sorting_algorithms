#include "sort.h"

/**
 * buuble_sort - sort an array of int with bubbel sort
 * @array: the array
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t	i;
	size_t	j;
	int	temp;

	i = 0;
	if (array == NULL || size == 0)
		return;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
