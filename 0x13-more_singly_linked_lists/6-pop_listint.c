#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: Data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (count);
}
