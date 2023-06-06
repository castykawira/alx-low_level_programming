#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	 size_t count = 0;
	 const listint_t *current = head;
	 const listint_t *loop_node = detect_loop(head);

	 if (loop_node == NULL)
	 {
		 while (current != NULL)
		 {
			 printf("%d\n", current->n);
			 current = current->next;
			  count++;
		 }
		 else
		 {
			 while (current != loop_node)
			 {
				 printf("%d\n", current->n);
				 current = current->next;
				 count++;
			 }
			 printf("%d\n", loop_node->n);
			 count++;
			 printf("-> [%d]\n", loop_node->n);
			 exit(98);
		 }

		 return (count);
	 }

	 int main(void)
	 {
		 listint_t *head = NULL;
		 listint_t *node;

		 node = malloc(sizeof(listint_t));
		 if (node == NULL)
		 {
			 printf("Failed to allocate memory\n");
			 exit(98);
		 }
		 node->n = 1;
		 node->next = NULL;
		 head = node;

		 node->next = malloc(sizeof(listint_t));
		 if (node->next == NULL)
		 {
			 printf("Failed to allocate memory\n");
			 exit(98);
		 }
		 node->next->n = 2;
		 node->next->next = NULL;

		 print_listint_safe(head);

		 return (0);
	 }
}
