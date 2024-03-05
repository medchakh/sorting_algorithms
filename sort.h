#ifndef __SORT__H
#define __SORT__H

#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct list_n - doubly linked list node
 *
 * @n: Integer 
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct list_n
{
	const int n;
	struct list_n *next;
	struct list_n *prev;
} list_t;

/** functions **/
void insertion_sort_list(list_t **list);
void bubble_sort(int *arr, size_t size_n);
void selection_sort(int *arr, size_t size_n);
void print_array(const int *arr, size_t size_n);
void shell_sort(int *arr, size_t size_n);
size_t partition(int *arr, size_t low, size_t high, size_t size_n);
void print_list(const list_t *list);
void swap(int *a, int *b);
void quick_sort(int *arr, size_t size_n);
void quick_sort_recursion(int *arr, size_t low, size_t high, size_t size_n);
void counting_sort(int *arr, size_t size_n);

#endif
