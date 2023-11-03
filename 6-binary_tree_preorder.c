#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes thrugh a binry tree using pre-order travrsal.
 * @tree: A pointr to the root nod of the tree to travers.
 * @func: A pointr to a funct to call for each nod.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
