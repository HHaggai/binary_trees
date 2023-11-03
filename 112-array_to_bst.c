#include "binary_trees.h"

/**
 * array_to_bst - Builds binry search tree from an arr.
 * @array: A pointr to first elmnt of arr to be convrted.
 * @size: The num of elemnts in @arr.
 *
 * Return: A pointr to root nod of creatd BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
