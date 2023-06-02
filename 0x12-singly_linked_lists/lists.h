#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list node
 * @str: string - (dynamically allocated string)
 * @len: length of the string
 * @next: Pointer to the next node
 *
 * Description: Defines a node structure for a singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
