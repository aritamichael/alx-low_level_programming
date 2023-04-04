#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at specific index
 * @idx: the index
 * @head: first node
 * @n: value of the data to be stored in  new node
 * Return: Address of node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *freshnode;
	listint_t *checker_node;
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
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
	freshnode = malloc(sizeof(listint_t));
	if (freshnode == NULL)
	{
		return  (NULL);
	}
	freshnode->n = n;
	checker_node = *head;
	for (x = 0; x < idx - 1 && checker_node != NULL; x++)
	{
		checker_node = checker_node->next;
	}
	if (checker_node == NULL)
	{
		free(freshnode);
		return (NULL);
	}
	freshnode->next = checker_node->next;
	checker_node->next = freshnode;
	return (freshnode);
}
