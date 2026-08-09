#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *lst = h;
	int i = 0;
	char *s;

	while (lst != NULL)
	{
		s = lst->str;

		if (s == NULL)
			s = "(nil)";

		printf("[%d] %s\n", lst->len, s);

		i++;
		lst = lst->next;
	}

	return (i);
}
