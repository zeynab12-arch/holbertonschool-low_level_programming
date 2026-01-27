#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - test delete_dnodeint_at_index
 *
 * Return: 0
 */
int main(void)
{
    dlistint_t *head;
    int r;

    head = NULL;

    /* Add nodes */
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);

    /* Print list */
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete node at index 2 (value 2) */
    r = delete_dnodeint_at_index(&head, 2);
    printf("Deleted? %d\n", r);
    print_dlistint(head);

    /* Delete head node (index 0) */
    r = delete_dnodeint_at_index(&head, 0);
    printf("Deleted? %d\n", r);
    print_dlistint(head);

    /* Delete tail node (last index) */
    r = delete_dnodeint_at_index(&head, 2);
    printf("Deleted? %d\n", r);
    print_dlistint(head);

    /* Free the list */
    free_dlistint(head);
    head = NULL;

    return (0);
}
