#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position in a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: Data value of the new node
 * Return: Address of the new node, or NULL if it failed to insert
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *new_node;
	istint_t *current = *head;
	
	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (q = 0; current && q < idx; q++)
	{
		if (q == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current -> next;
	}

	return (NULL);
}
