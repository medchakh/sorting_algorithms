#include "sort.h"
/**
 * swap - simple function to swap two values
 * @a_f: First element
 * @b_s: Second element
 * Return: Nothing
 */
void swap(int *a_f, int *b_s)
{
	int temp = *a_f;
	*a_f = *b_s;
	*b_s = temp;
}
/**
 * partition - function to correct position of the pivot_i
 * @arr: pointer to arr
 * @low_in: index of the start
 * @high_in: index of the end
 * @arr_size: arr arr_size
 * Return: Nothing
 */
size_t partition(int *arr, size_t low_in, size_t high_in, size_t arr_size)
{
	size_t i = low_in - 1;
	int pivot_i = arr[high_in];
	size_t j;

	for (j = low_in; j < high_in; j++)
	{
		if (arr[j] <= pivot_i)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, arr_size);
			}
		}
	}
	swap(&arr[i + 1], &arr[high_in]);
	if (arr[i + 1] != arr[high_in])
		print_array(arr, arr_size);
	return (i + 1);
}
/**
 * quick_sort_recursion - function helper to do sort subarrays
 * @arr: arr of integers
 * @low_in: index of the start
 * @high_in: index of the end
 * @arr_size: arr arr_size
 * Return: Nothing
 */
void quick_sort_recursion(int *arr, size_t low_in, size_t high_in, size_t arr_size)
{
	size_t pivot_index;

	if (low_in < high_in)
	{
		pivot_index = partition(arr, low_in, high_in, arr_size);
		if (pivot_index > 1)
			quick_sort_recursion(arr, low_in, pivot_index - 1, arr_size);
		if (high_in > 1)
			quick_sort_recursion(arr, pivot_index + 1, high_in, arr_size);
	}
}
/**
 * quick_sort - function to perform quick sort algorithm
 * @arr: pointer to arr of integers
 * @arr_size: number of element in the arr
 * Return: Nothing
 */
void quick_sort(int *arr, size_t arr_size)
{
	if (!arr || arr_size < 2)
		return;
	quick_sort_recursion(arr, 0, arr_size - 1, arr_size);
}
