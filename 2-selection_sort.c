#include "sort.h"

/**
 * selection_sort - sort list with selection-sort
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
	{
		int tmp;
		size_t i = 0, j = 0, lower = 0;

		if (array == NULL || size == 0)
			return;

		for (; i < size - 1; i++)
		{
			lower = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[lower])
					lower = j;
			}
			if (lower != i)
			{
				tmp = array[i];
				array[i] = array[lower];
				array[lower] = tmp;
				print_array(array, size);
			}
		}
	}

