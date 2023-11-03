#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds sibling of a
 *                       nod in binry tree.
 * @node: A pointr to nod to find the sibling of.
 *
 * Return: If nod is NULL or there is no sibling - NULL.
 *         Otherwyse - a pointr to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
