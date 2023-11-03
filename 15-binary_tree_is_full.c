#include "binary_trees.h"

/**
 * is_full_recursive - Checks if binry tree is full recursivly.
 * @tree: A pointr to the root nod of the tree to chek.
 *
 * Return: If tree is not full, 0.
 *         Otherwyse, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Cheks if a binry tree is full.
 * @tree: A pointr to root nod of tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwyse - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
