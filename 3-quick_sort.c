#include "sort.h"

/**
 *quick_sort_swap - swap values of start and next index
 *
 *@array: the array
 *@size: size to array
 *@low: left most value
 *@high: right most value
 */
void quick_sort_swap(int *array, size_t size, int low, int high)
{
	int new_element = 0;

	if (array[low] != array[high])
	{
		new_element = array[low];
		array[low] = array[high];
		array[high] = new_element;
		print_array(array, size);
	}
}

/**
 *quick_sort_pratition - pratition scheme for quicksort
 *
 *@array: the array
 *@size: size of the array
 *@low: low value
 *@high: right value
 *
 *Return: povit value
 */
int quick_sort_pratition(int *array, size_t size, int low, int high)
{
	int pivot_v = array[high];
	int iter1 = low - 1, iter2 = 0;

	for (iter2 = low; iter2 <= high; iter2++)
	{
		if (array[iter2] < pivot_v)
		{
			iter1++;
			quick_sort_swap(array, size, iter1, iter2);
		}
	}
	quick_sort_swap(array, size, iter1 + 1, high);
	return (iter1 + 1);
}

/**
 *quick_sort_recursion - recursive function
 *
 *@array: pointer to array
 *@size: size of array
 *@low: lowest value
 *@high: highest value
 */
void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	int pivot_indx = 0;

	if (low < high)
	{
		pivot_indx = quick_sort_pratition(array, size, low, high);
		quick_sort_recursion(array, size, low, pivot_indx - 1);
		quick_sort_recursion(array, size, pivot_indx + 1, high);
	}
}

/**
 *quick_sort -  sorts an array of integers
 *in ascending order using the Quick sort algorithm.
 *
 *@array: array
 *@size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursion(array, size, 0, size - 1);
}
