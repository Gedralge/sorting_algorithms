#include "sort.h"
/**
 * cocktail_sort_list - sorts a doubly linked list
 * of integers in ascending order using the cocktail
 * shaker sort algorithm
 *
 * @list: pointer to apointer of the head list
 * Return: no return
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	int swapped = 1;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while (swapped)
	{
		swapped = 0;
		while (current->next != NULL)
		{
			if (current->n > current->next->n)
			{
				temp = current->next;
				current->next = temp->next;
				temp->prev = current->prev;
				current->prev = temp;
				temp->next = current;
				if (temp->prev != NULL)
					temp->prev->next = temp;
				if (current->next != NULL)
					current->next->prev = current;
				if (current == *list)
					*list = temp;
				print_list(*list);
				swapped = 1;
			}
			else
				current = current->next;
		}
		if (!swapped)
			break;
		swapped = 0;
		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				temp = current->prev;
				current->prev = temp->prev;
				temp->next = current->next;
				current->next = temp;
				temp->prev = current;
				if (temp->prev != NULL)
					temp->prev->next = temp;
				if (current->next != NULL)
					current->next->prev = current;
				if (current == *list)
					*list = temp;
				print_list(*list);
				swapped = 1;
			}
			else
				current = current->prev;
		}
	}
}

