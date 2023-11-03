#include "binary_trees.h"

/**
 * bst_search - Searches for val in binry search tree.
 * @tree: A pointr to root nod of BST to search.
 * @value: The val to search for in BST.
 *
 * Return: If tree is NULL or val not found, NULL.
 *         Otherwyse, a pointr to nod containin the val.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
