#include "binary_trees.h"

/**
 * array_to_heap - builds Max Binry Heap tree from arr
 * @array: pointr to first elemnt of arr to be convertd
 * @size: numb of elemnt in array
 *
 * Return: pointr to root node of created Binry Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
