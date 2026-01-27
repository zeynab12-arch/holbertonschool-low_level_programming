#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	tmp = *h;
	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
