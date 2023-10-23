#include "sort.h"

/**
* list_size - calc the size of the list
* @list: the head of the node
* Return: the size
*/

int	list_size(listint_t *list)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

/**
* insertion_sort - sort a list using insertion sort
* @list: the addr of the node
*/

void insertion_sort_list(listint_t **list)
{
	
}
