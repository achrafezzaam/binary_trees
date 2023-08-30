#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a new node to the right branch of a node
 * @parent: The parent node to insert to
 * @value: The value of the created node
 *
 * Return: A pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;

		return (new);
	}

	new->right = NULL;
	parent->right = new;

	return (new);
}
