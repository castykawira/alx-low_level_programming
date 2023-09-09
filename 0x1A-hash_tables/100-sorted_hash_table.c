#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->shead = NULL;
	new_table->stail = NULL;


	return (new_table);
}

/**
 * shash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->shead;
	while (current != NULL && strcmp(current->key, key) != 0)
	{
		current = current->next;
	}

	return ((current == NULL) ? NULL : current->value);
}


/**
 * shash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)

	{

		printf("'%s': '%s'", current->key, current->value);
		current = current->next;
		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * using the sorted linked list
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

free(ht->array);
free(ht);
}
