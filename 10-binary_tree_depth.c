#include "binary_trees.h"

/**
 * binary_tree_depth - Measurs the depth of a nod in a binry tree.
 * @tree: A pointr to the nod to measur the depth.
 *
 * Return: If tree is NULL, your funct must retrn 0, else retrn the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
