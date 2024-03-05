#include "sort.h"

/**
 * print_array - Prints an arr of integers
 *
 * @arr: The arr to be printed
 * @size_n: Number of elements in @arr
 */
void print_array(const int *arr, size_t size_n)
{
	size_t in_i;

	in_i = 0;
	while (arr && in_i < size_n)
	{
		if (in_i > 0)
			printf(", ");
		printf("%d", arr[in_i]);
		++in_i;
	}
	printf("\n");
}
