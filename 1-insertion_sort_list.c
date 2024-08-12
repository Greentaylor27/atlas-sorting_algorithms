#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion sort algorithm
 * 
 * @list: A pointer that points to the pointer of the head element
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = (*list)->next;
	listint_t *previous;

	if (curr == NULL || curr->next == NULL)
	{
		printf("Invalid list\n");
		return;
	}

	else
	{
		printf("The list was valid.\n");
		printf("The list is: %d", curr->next->n);
		while (curr != NULL && curr->next != NULL)
		{
			previous = curr->prev;
			while (previous !=NULL && previous->n > curr->n)
			{
				if (previous == NULL)
				{
					*list = curr;
				}
				else
				{
					printf("We are comparing %d and %d\n", curr->n, previous->n);
					previous->next = curr->next;
					if (curr->next != NULL)
					{
						curr->next->prev = previous;
					}
				curr->prev = previous->prev;
				curr->next = previous;
				if (previous->prev != NULL)
				{
					previous->prev->next = curr;
				}
				else
				{
					*list = curr;
				}
				previous->prev = curr;
			}
			curr = curr->next;
			}
		}
		print_list(*list);
	}
}
