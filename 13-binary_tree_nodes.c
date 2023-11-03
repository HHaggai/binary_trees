#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nods with at least 1 child in a binry tree.
 * @tree: A pointr to root nod of the tree to count the num of nods.
 *
 * Return: If tree is NULL, the funct must return 0, else ret nod count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
