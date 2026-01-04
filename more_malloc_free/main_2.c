#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);  /* malloc_checked prototipi */

/**
 * main - test malloc_checked function
 *
 * Return: 0 on success
 */
int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
printf("Char pointer: %p\n", (void *)c);

i = malloc_checked(sizeof(int) * 402);
printf("Int pointer: %p\n", (void *)i);
f = malloc_checked(sizeof(float) * 100000000);
printf("Float pointer: %p\n", (void *)f);

d = malloc_checked(sizeof(double) * 1024);
printf("Double pointer: %p\n", (void *)d);
free(c);
free(i);
free(f);
free(d);
return (0);
}
