#include "sort.h"
/**
 * bubble_sort -  function that sorts an array of integers using Bubble sort
 * @arr: pointer to array of integers
 * @size: number of element in array
 * Return: void
 */
void bubble_sort(int *arr, size_t size)
{
	int temp;
	size_t i, j;

	if (!arr || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				print_array(arr, size);
			}
		}
	}
}
