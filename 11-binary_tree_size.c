#include "binary_trees.h"

/**
 * binary_tree_size - Measurs size of binry tree.
 * @tree: A pointr to root nod of the tree to measur the size of.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
