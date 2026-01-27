#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/* Doubly linked list node structure */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */

/* 0. Print list */
size_t print_dlistint(const dlistint_t *h);

/* 1. List length */
size_t dlistint_len(const dlistint_t *h);

/* 2. Add node at the beginning */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* 3. Add node at the end */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* 4. Free list */
void free_dlistint(dlistint_t *head);

/* 5. Get node at index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* 6. Sum list */
int sum_dlistint(dlistint_t *head);

#endif /* LISTS_H */
