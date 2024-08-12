#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion sort algorithm
 * 
 * @list: A pointer that points to the pointer of the head element
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *cmpNode;

	if (!list || !*list || !(*list)->prev)
	{
		return;
	}
	
	printf("Starting to iterate over list");
	for (; curr != NULL && curr->next != NULL; curr = curr->next)
	{
		printf("We are currently in the list");
		cmpNode = curr->next;
		if (cmpNode->n > curr->n)
		{
			printf("We are comparing nodes now");
			cmpNode->prev = curr->prev;
			cmpNode->next = curr;
			if (cmpNode->prev != NULL)
			{
				cmpNode->prev->next = cmpNode;
			}
			else
			{
				*list = cmpNode;
			}
			curr->prev = cmpNode;
			print_list(curr);
		}
		curr = curr->next;
	}
	printf("We are finished");
}
