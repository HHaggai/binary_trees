#include "binary_trees.h"

/**
 * binary_tree_node - Creates binry tree nod.
 * @parent: A pointr to the parent of nod to create.
 * @value: The val to put in new node.
 *
 * Return: If error occurs - NULL.
 *         Otherwise - pointr to new nod.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
