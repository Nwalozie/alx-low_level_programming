#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in the hash table.
 * @ht: The hash table to search in.
 * @key: The key to retrieve the value for.
 *
 * Return: The value associated with the key, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
