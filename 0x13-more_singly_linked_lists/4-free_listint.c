#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - frees nodes down the list
 * @head: first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *w;

	while (head != NULL)
	{
		w = head;
		head = head->next;
		free(w);
	}
}
