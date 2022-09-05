#include "sort.h"

/**
 *selection_sort - sorts an array of integers in ascending
 *order using the Selection sort algorithm
 *@array: array to sort
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t iter1 = 0, iter2 = 0, min = 0;
	int new_element = 0;

	if (!array || size < 2)
		return;

	for (iter1 = 0; iter1 < size - 1; iter1++)
	{
		min = iter1;
		for (iter2 = iter1 + 1; iter2 < size; iter2++)
		{
			if (array[iter2] < array[min])
				min = iter2;

		}
		if (min != iter1)
		{
			new_element = array[iter1];
			array[iter1] = array[min];
			array[min] = new_element;
			print_array(array, size);
		}
	}
}
