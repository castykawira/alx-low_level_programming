#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: pointer to the head of the linked list
 * Return: sum of all the data in the linked list
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
