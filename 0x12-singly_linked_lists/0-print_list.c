#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of the linked list
 * @h: pointer to the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
