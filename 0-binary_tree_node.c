#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: ?
 * @value: ?
 * Return: ?
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = new->right = NULL;
	new->n = value;
	return (new);
}