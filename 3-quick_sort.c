#include "sort.h"

/**
 * devide - devide and swap element to their partition
 * @array: the array targeted
 * @low: the low index
 * @big: the big index
 */

void	devide(int *array, int low, int big)
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
	}

}

/**
 * quick - recursive quick sort implimentation
 * @array: the array should be sorted
 * @low: the index of low element
 * @big: the index of height element
 */

void	quick(int *array, int low, int big)
{
	int	index_pi;

	if (low < big)
	{
		index_pi = devide(array, low, big);
		quick(array, low, index_pi - 1);
		quick(array, pi + 1, big);
	}
}

/**
 * quick_sort - sort an array using quick sort
 * @array: the array should be sort
 * @size: the size of the array
 */

void	quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1);
}
