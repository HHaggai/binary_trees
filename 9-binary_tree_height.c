#include "binary_trees.h"

/**
 * binary_tree_height - Measurs the height of a binry tree.
 * @tree: A pointr to the root nod of the tree to measur height.
 *
 * Return: If tree is NULL, your funct must return 0, else retrn height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
