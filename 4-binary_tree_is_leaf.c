#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a nod is a leaf of binry tree.
 * @node: A pointr to the nod to chek.
 *
 * Return: If the nod is a leaf - 1.
 *         Otherwyse - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
