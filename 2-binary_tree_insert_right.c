#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a nod as right-child
 *                            of another in a binry tree.
 * @parent: A pointr to the nod to insert the right-child in.
 * @value: The val to store in the new nod.
 *
 * Return: If parnt is NULL or error occurs - NULL.
 *         Otherwise - pointr to the new nod.
 *
 * Description: If parent already has right-child, new nod
 *              takes its place and old right-child is set as
 *              right-child of new nod.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
