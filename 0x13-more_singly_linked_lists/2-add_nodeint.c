#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new new node at the beginning of a list
 * @head: the first node
 * @n: value to be assigned to new node
 * Return: Address of new node or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *freshnode;

	if (head == NULL)
	{
		return (NULL);
	}

	freshnode = malloc(sizeof(listint_t));

	if (freshnode == NULL)
	{
		return (NULL);
	}

	freshnode->n = n;
	freshnode->next = *head;
	*head = freshnode;

	return (freshnode);
}
