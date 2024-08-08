#include "sort.h"

/**
 * bubble_sort - Function to complete tasks using Bubble sort algorithm
 * 
 * @array: A pointer to an array of integers
 * @size: used to define the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t inner, outer, i;

	for (inner = 0; inner < size - 1; inner++)
	{
		for (outer = 0; outer < size - inner -1; outer++)
		{
			if (array[outer] > array[outer + 1])
			{
				temp = array[outer];
				array[outer] = array[outer + 1];
				array[outer + 1] = temp;
				for(i = 0; i < size; i++)
				{
					if (i < size - 1)
					{
						printf("%d, ", array[i]);
					}
					else
					{
						printf("%d\n", array[i]);
					}
				}
			}
		}
	}
}
