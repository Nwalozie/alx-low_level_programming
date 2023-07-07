#include "hash_tables.h"

/**
 * hash_table_set - Adds a key-value pair to the hash table.
 * @ht: The hash table.
 * @key: The key to add.
 * @value: The corresponding value.
 *
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode  = NULL;

	if (key == NULL || strlen(key) == 0)
	{
		return 0;
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL) {
		hash_table_destroy(ht);
		return 0;
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	if (ht->array[index] == NULL) {
		ht->array[index] = newNode;
	} else {
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
	}

	return 1;
}

/**
 * hash_table_destroy - Frees a hash table.
 * @ht: The hash table to free.
 */
void hash_table_destroy(hash_table_t *ht)
{
	unsigned long int i;
	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		while (current != NULL)
		{
			hash_node_t *temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
