#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    tmp = *head;

    for (i = 0; tmp && i < index; i++)
        tmp = tmp->next;

    if (!tmp)
        return (-1);

    if (tmp->prev)
        tmp->prev->next = tmp->next;
    else
        *head = tmp->next;

    if (tmp->next)
        tmp->next->prev = tmp->prev;

    free(tmp);
    return (1);
}
