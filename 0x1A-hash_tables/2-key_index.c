#include "hash_tables.h"

/**
 * hash_table_get_index - Retrieves the index of a key in the hash table.
 * @table: The hash table.
 * @key: The key to search for.
 *
 * Return: The index of the key if found, -1 otherwise.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
