#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int is_first;

	if (ht == NULL)
	{
		return;
	}

	is_first = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		while (current != NULL)
		{
			if (!is_first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			is_first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}

