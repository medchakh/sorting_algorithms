#include "sort.h"
/**
 * selection_sort - selection sort technique
 * @arr: pointer to the arr to be sorted
 * @size_n: number of element in the arr
 * Return: Nothing
 */
void selection_sort(int *arr, size_t size_n)
{
	size_t i, min_n, j;
	int swap;

	if (!arr || size_n < 2)
		return;
	for (i = 0; i < size_n - 1; i++)
	{
		min_n = i;
		for (j = i + 1; j < size_n; j++)
		{
			if (arr[j] < arr[min_n])
				min_n = j;
		}
		if (min_n != i)
		{
			swap = arr[i];
			arr[i] = arr[min_n];
			arr[min_n] = swap;
			print_array(arr, size_n);
		}
	}
}
