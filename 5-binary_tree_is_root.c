#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a nod is a root of a binry tree.
 * @node: A pointr to the nod to chek.
 *
 * Return: If the nod is a root - 1.
 *         Otherwyse - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
