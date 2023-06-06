#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * in a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @index: Index of the node to be deleted (starting at 0)
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (a < index - 1)
	{
		if (!current || !(current->next))
			return (-1);
		current = current->next;
		a++;
	}

	prev = current->next;
	current->next = prev->next;
	free(prev);
	return (1);
}

