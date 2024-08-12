#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion sort algorithm
 * 
 * @list: A pointer that points to the pointer of the head element
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *index, *nNode;

	if (!list || !*list || !(*list)->prev)
	{
		return;
	}

	curr = (*list)->next;
	while (!curr)
	{
		nNode = curr->next;
		index = curr->prev;
		if (curr->next != NULL)
		{
			curr->next->prev = curr->prev;
		}
		if (curr->prev != NULL)
		{
			curr->prev->next = curr->next;
		}
		curr->prev = NULL;
		curr->next = NULL;
		while (index != NULL && index->n > curr->n)
		{
			index = index->prev;
		}
		if (index == NULL)
		{
			curr->next = *list;
			curr->prev = NULL;
			(*list)->prev = curr;
			*list = curr;
		}
		else
		{
			curr->next = index->next;
			curr->prev = index;
			if (index->next != NULL)
			{
				index->next->prev = curr;
			}
			index ->next = curr;
		}
		print_list(curr);
		curr = nNode;
	}
}
