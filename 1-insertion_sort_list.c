#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion sort algorithm
 * 
 * @list: A pointer that points to the pointer of the head element
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *Variable;
	listint_t *SortedList = *list;
	listint_t *temp;

	if (SortedList == NULL || SortedList->next == NULL)
	{
		SortedList = list;
	}

	for (; SortedList->next != NULL; SortedList = SortedList->next)
	{
		Variable = SortedList->prev;
		if (Variable->n > SortedList->n)
		{
			
		}
	}
}
