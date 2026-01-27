#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to head
 * @n: data for new node
 * Return: address of new node, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
