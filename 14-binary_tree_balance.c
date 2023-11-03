#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balnce factor of a binry tree.
 * @tree: A pointr to root nod of the tree to measure bal factor.
 *
 * Return: If tree is NULL, retrn 0, else retrn balnce factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measurs height of a binry tree.
 * @tree: A pointr to root nod of tree to measure the height.
 *
 * Return: If tree is NULL, the funct must retrn 0, else retrn height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
