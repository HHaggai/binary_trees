#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Checks if nod is leaf of binary tree.
 * @node: A pointr to the nod to check.
 *
 * Return: If nod is a leaf, 1, otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Retrns depth of a given
 *         nod in a binry tree.
 * @tree: A pointr to the nod to measure depth of.
 *
 * Return: The depth of nod.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Retrns leaf of a binry tree.
 * @tree: A pointr to root nod of tree to find a leaf in.
 *
 * Return: A pointr to first encountrd leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if binry tree is perfect recursivly.
 * @tree: A pointr to root nod of the tree to check.
 * @leaf_depth: The depth of one leaf in binry tree.
 * @level: Level of currnt nod.
 *
 * Return: If tree is perfect, 1, otherwyse 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if binry tree is perfect.
 * @tree: A pointr to root nod of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwyse, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
