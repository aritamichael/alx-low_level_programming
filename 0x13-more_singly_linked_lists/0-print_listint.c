#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints out the elements of a list that is linked
 * @h: pointer to the next node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
