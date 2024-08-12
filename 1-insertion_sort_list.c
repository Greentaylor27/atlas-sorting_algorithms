#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion sort algorithm
 * 
 * @list: A pointer that points to the pointer of the head element
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *previous, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		printf("Invalid list\n");
		return;
	}

	curr = (*list)->next;
	while (curr != NULL)
		{
			temp = curr->next;
			previous = curr->prev;
			while (previous != NULL && previous->n > curr->n)
			{
				if (temp == NULL)
				{
					curr->next = NULL;
					curr->prev = previous;
				}
				if (curr == *list)
				{
					temp = *list;
					previous = NULL;
				}
				else
				{
					temp = curr->prev;
					previous = curr->next;
				}
			}
			curr = temp;
			print_list(*list);
		}
}
