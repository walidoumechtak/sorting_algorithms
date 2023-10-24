#include "sort.h"

/**
 * devide - devide and swap element to their partition
 * @array: the array targeted
 * @low: the low index
 * @big: the big index
 * Return: the index of element
 */

int	devide(int *array, int low, int big, int size)
{
	int	pivote;
	int	j;
	int	i;
	int	temp;

	pivote = array[big];
	j = low;
	i = low - 1;
	while (j <= big)
	{
		if (array[j] < pivote)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		j++;
	}
	temp = array[i + 1];
	array[i + 1] = array[big];
	array[big] = temp;
	print_array(array, size);
	return (i + 1);
}

/**
 * quick - recursive quick sort implimentation
 * @array: the array should be sorted
 * @low: the index of low element
 * @big: the index of height element
 */

void	quick(int *array, int low, int big, int size)
{
	int	index_pi;

	if (low < big)
	{
		index_pi = devide(array, low, big, size);
		quick(array, low, index_pi - 1, size);
		quick(array, index_pi + 1, big, size);
	}
}

/**
 * quick_sort - sort an array using quick sort
 * @array: the array should be sort
 * @size: the size of the array
 */

void	quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
