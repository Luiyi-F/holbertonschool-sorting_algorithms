#include "sort.h"

/**
 *bubble_sort - sorts an array of integers
 *in ascending order.
 *
 *@array: Pointer to array to sort.
 *@size: lenght of the array to sort.
 */
void bubble_sort(int *array, size_t size)
{
	size_t iter = 0;
	int new_element = 0, swap = 0;

	if (!array || size < 2)
		return;

	while (size)
	{
		swap = 0;
		for (iter = 0; iter < size - 1; iter++)
		{
			if (array[iter] > array[iter + 1])
			{
				new_element = array[iter + 1];
				array[iter + 1] = array[iter];
				array[iter] = new_element;
				print_array(array, size);
				swap = 1;
			}
		}
		if (!swap)
			break;
	}
}
