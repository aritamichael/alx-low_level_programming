#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - this code will delete the first node and return its data
 * @head: the first node
 * Return: First node's data
 */

int pop_listint(listint_t **head)
{
	int content;
	listint_t *w;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	w = *head;
	content = w->n;
	*head = w->next;
	free(w);

	return (content);
}
