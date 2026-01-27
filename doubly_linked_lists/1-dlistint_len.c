#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    dlistint_t head;
    size_t n;

    head.n = 10;
    head.prev = NULL;
    head.next = NULL;

    /* 1. List length test */
    n = dlistint_len(&head);
    printf("Length = %lu\n", n);

    return (0);
}
