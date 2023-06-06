#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the desired node (starting at 0).
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int q = 0;

	while (current && index > q)
	{
		current = current->next;
		q++;
	}

	return (current ? current : NULL);
}
