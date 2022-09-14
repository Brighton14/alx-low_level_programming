#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_table_create - Create a Hash Table
 * @size: The size of the hash  table
 * Descreption : Alloctaing a Hash Table using Given Size
 * Return: NULL Error Occurred Or A Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
=======
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;
>>>>>>> 302e2090a2c8e972fe1b6c31d717676aaffd5f48

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
<<<<<<< HEAD
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (hash_table->array == NULL)
		return (NULL);
	return (hash_table);
=======

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
>>>>>>> 302e2090a2c8e972fe1b6c31d717676aaffd5f48
}
