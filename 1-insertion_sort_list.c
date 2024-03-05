#include "sort.h"

/**
 * insertion_sort_list - Entry point
 * @list_n: The character to print
 * Return: Always 0 (Success)
 */
void insertion_sort_list(list_t **list_n)
{
	list_t *curr, *tmp, *pre;
	int n;

	if (!list_n || !*list_n || !(*list_n)->next)
		return;
	pre = *list_n;
	curr = pre->next;
	while (curr)
	{
		n = curr->n;
		tmp = curr->next;
		while (pre && n < pre->n)
		{
			if (n < pre->n)
			{
				if (pre->prev)
					pre->prev->next = curr;
				curr->prev = pre->prev;
				pre->next = curr->next;
				pre->prev = curr;
				if (curr->next)
					curr->next->prev = pre;
				curr->next = pre;
				pre = curr->prev;
				if (!pre)
					*list_n = curr;
				print_list(*list_n);
			}
			else
				break;
		}
		curr = tmp;
		if (!curr)
			break;
		pre = curr->prev;
	}
}
