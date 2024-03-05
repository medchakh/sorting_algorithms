#include "sort.h"

/**
 * counting_sort - Entry point
 * @arr: The char to print
 * @size_c: The char to print
 * Return: -
 */
void counting_sort(int *arr, size_t size_c)
{
	int *new_arr, *count_arr, i = 0, max_in = 0;

	if (!arr || size_c < 2)
		return;

	for (i = 0; i < (int)size_c; i++)
	{
		if (max_in < arr[i])
			max_in = arr[i];
	}
	count_arr = malloc(sizeof(int) * max_in + 1);
	for (i = 0; i <= max_in; i++)
		count_arr[i] = 0;
	for (i = 0; i < (int)size_c; i++)
		count_arr[arr[i]]++;
	for (i = 1; i <= max_in; i++)
		count_arr[i] = count_arr[i - 1] + count_arr[i];
	new_arr = malloc(sizeof(int) * size_c + 1);
	print_array(count_arr, max_in + 1);
	for (i = 0; i < (int)size_c; i++)
	{
		new_arr[count_arr[arr[i]] - 1] = arr[i];
		count_arr[arr[i]]--;
	}
	for (i = 0; i < (int)size_c; i++)
		arr[i] = new_arr[i];
}
