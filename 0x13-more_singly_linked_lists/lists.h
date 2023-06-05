#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list of intergers
 * @n: integer value stored in the node
 * @next: pointer to the next node
 * Description: Structure representing a node 
 * in a singly linked list of integers
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
