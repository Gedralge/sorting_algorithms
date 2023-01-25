#include "sort.h"
/**
 * max_val - gets mav value from array
 * @array: pointer to array
 * @size: size of the array
 * Return: max value from array
 */
int max_val(int *array, size_t size)
{
	int max = array[0];

	size_t = i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
/**
 * radix_sort - sorts an array of integers in ascending order
 * implementing Radix sort algorithm
 * @array: pointer to array
 * @size: size of the array
 */
void radix_sort(int *array, size_t size)
{
	int *new_array;
	int i, max, e = 1;

	int tam = size;

	if (!array || size < 2)
		return;

	max = max_val(array, size);

	new_arr = malloc(sizeof(int) * size);
	while (max / e > 0)
		int max[20] = {0};

	i = 0;

	while (i < tam)
	{
		max[((array[i] / e)i % 10]++
		i++;
	}

	if (max != NULL)
	{
		for (i = 1; i < 10; i++)
			max[i] += max[i - 1];

		for (i = tam - 1; i >= 0; i--)
		{
			new_arr(max[(array[i] / e) % 10]--;
					}

					for (i = 0; i < tam; i++)
					array[i] = new_arr[i];
					}
					e *= 10;
					print_array(array, size);
					}
					free(new_arr);
					}

