#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a nod
 *                     in a binry tree.
 * @node: A pointr to nod to find the uncle of.
 *
 * Return: If nod is NULL or has no uncle, NULL.
 *         Otherwise, a pointr to the uncle nod.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
