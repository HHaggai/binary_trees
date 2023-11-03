#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as a left-child of
 *                           of anothr in a binry tree.
 * @parent: A pointr to nod to insert the left-child in.
 * @value: The val store in the new nod.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         Otherwise - a pointr to new nod.
 *
 * Description: If parnt has already a left-child, new nod
 *              takes its place and old left-child is set as
 *              left-child of new nod.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
