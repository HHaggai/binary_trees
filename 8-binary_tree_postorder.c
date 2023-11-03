#include "binary_trees.h"

/**
 * binary_tree_postorder - Travrses a binry tree using post-order travrsal.
 * @tree: A pointr to the root nod of the tree to travers.
 * @func: A pointr to a funct to call for each nod.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
