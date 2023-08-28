#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list.
 * @h: head pointer of a list.
 *
 * Return: Returns numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i  = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next, i < n;
		i++;
	}
	return (n);
}
