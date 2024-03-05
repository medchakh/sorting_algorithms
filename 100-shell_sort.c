#include "sort.h"
/**
 * shell_sort - function
 * @arr: pointer to arr
 * @size_n: index of the start
 * Return: Nothing
 */
void shell_sort(int *arr, size_t size_n)
{
	size_t gap_n = 1, in_i = 0;
	int  ii_n = 0, j = 0, tmp;

	if (!arr || size_n < 2)
		return;
	while (gap_n <= size_n)
		gap_n = gap_n * 3 + 1;
	for (gap_n = (gap_n - 1) / 3; gap_n > 1; gap_n = (gap_n - 1) / 3)
	{
		for (in_i = 0; in_i + gap_n < size_n; in_i++)
		{
			if (arr[in_i] > arr[in_i + gap_n])
			{
				for (j = in_i + gap_n, ii_n = in_i; j >= 0 && ii_n >= 0 && arr[ii_n] > arr[j];
					 j = j - gap_n, ii_n = ii_n - gap_n)
				{
					tmp = arr[j];
					arr[j] = arr[ii_n];
					arr[ii_n] = tmp;
				}
			}
		}
		print_array(arr, size_n);
	}
	for (in_i = 1; in_i < size_n; in_i++)
	{
		if (arr[in_i - 1] > arr[in_i])
		{
			for (j = in_i - 1, ii_n = in_i; j >= 0 && arr[ii_n] < arr[j]; j--, ii_n--)
			{
				tmp = arr[ii_n];
				arr[ii_n] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	print_array(arr, size_n);
}
