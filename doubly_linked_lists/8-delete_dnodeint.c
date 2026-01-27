#include "lists.h"

/**
 * main - test all doubly linked list functions (0-8)
 *
 * Return: Always 0
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	int r;

	head = NULL;

	/* Add nodes at end */
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);

	/* Print list */
	print_dlistint(head);

	/* Get node at index 2 */
	node = get_dnodeint_at_index(head, 2);
	if (node)
		printf("Node at index 2: %d\n", node->n);

	/* Insert node at index 3 */
	node = insert_dnodeint_at_index(&head, 3, 4096);
	print_dlistint(head);

	/* Delete node at index 0 */
	r = delete_dnodeint_at_index(&head, 0);
	if (r == 1)
		printf("Deleted node at index 0\n");

	/* Sum all nodes */
	printf("Sum of all nodes: %d\n", sum_dlistint(head));

	/* Free list */
	free_dlistint(head);
	head = NULL;

	return (0);
}
