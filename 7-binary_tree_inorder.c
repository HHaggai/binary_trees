#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes thrugh a binry tree using in-order travrsal.
 * @tree: A pointr to the root nod of the tree to travers.
 * @func: A pointr to a funct to call for each nod.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
