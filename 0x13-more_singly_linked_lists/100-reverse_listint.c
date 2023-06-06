#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	while (*head)
	{
		current = (*head)->current;
		(*head)->current = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;

	return *head;
}
