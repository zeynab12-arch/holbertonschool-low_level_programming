#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given index
 * @h: pointer to head
 * @idx: index to insert at, starting from 0
 * @n: value of new node
 * Return: pointer to new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);

	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
