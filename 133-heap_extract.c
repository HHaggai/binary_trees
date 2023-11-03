#include "binary_trees.h"
#include <stdlib.h>

/**
 * tree_height - measures height of binry tree
 * @tree: pointr to root nod of tree to measure height
 *
 * Return: Height or 0 if tree is NULL
 */
size_t tree_height(const heap_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + tree_height(tree->left);

	if (tree->right)
		height_r = 1 + tree_height(tree->right);

	if (height_l > height_r)
		return (height_l);
	return (height_r);
}
/**
 * tree_size_h - measurs sum of heights of binry tree
 * @tree: pointr to root nod of tree to measure height
 *
 * Return: Height or 0 if tree is NULL
 */
size_t tree_size_h(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + tree_size_h(tree->left);

	if (tree->right)
		height_r = 1 + tree_size_h(tree->right);

	return (height_l + height_r);
}

/**
 * _preorder - goes thrugh binry tree using pre-order travrsal
 * @tree: pointr to root nod of tree to travrs
 * @node: will be last not in travrs
 * @height: height of tree
 *
 * Return: No Return
 */
void _preorder(heap_t *tree, heap_t **node, size_t height)
{
	if (!tree)
		return;

	if (!height)
		*node = tree;
	height--;

	_preorder(tree->left, node, height);
	_preorder(tree->right, node, height);
}

/**
 * heapify - heapifies max binry heap
 * @root: pointr to binry heap
 */
void heapify(heap_t *root)
{
	int value;
	heap_t *tmp1, *tmp2;

	if (!root)
}	return;

	tmp1 = root;
	{
	while (1)
	{
		if (!tmp1->left)
			break;
		if (!tmp1->right)
			tmp2 = tmp1->left;
		else
		{
			if (tmp1->left->n > tmp1->right->n)
				tmp2 = tmp1->left;
			else
				tmp2 = tmp1->right;
		}
		if (tmp1->n > tmp2->n)
			break;
		value = tmp1->n;
		tmp1->n = tmp2->n;
		tmp2->n = value;
		tmp1 = tmp2;
	}
}

/**
 * heap_extract - extrcts root nod from a Max Binry Heap
 * @root: pointr to heap root
 * Return: val of extractd nod
 **/
int heap_extract(heap_t **root)
{
	int value;
	heap_t *heap_r, *node;

	if (!root || !*root)
		return (0);
	heap_r = *root;
	value = heap_r->n;
	if (!heap_r->left && !heap_r->right)
	{
		*root = NULL;
		free(heap_r);
		return (value);
	}

	_preorder(heap_r, &node, tree_height(heap_r));

	heap_r->n = node->n;
	if (node->parent->right)
		node->parent->right = NULL;
	else
		node->parent->left = NULL;
	free(node);
	heapify(heap_r);
	*root = heap_r;
	return (value);
}
