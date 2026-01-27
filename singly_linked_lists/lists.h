#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* 0. Print list */
size_t print_list(const list_t *h);

/* 1. List length */
size_t list_len(const list_t *h);

/* 2. Add node at the beginning */
list_t *add_node(list_t **head, const char *str);

/* 3. Add node at the end */
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS_H */
