#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * listint_t - singly linked list
 * *h - pointer to the head (or start) of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n;
	listint_t *next;

	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
