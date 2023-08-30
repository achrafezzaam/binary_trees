#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a new node to the left branch of a node
 * @parent: The parent node to insert to
 * @value: The value of the created node
 *
 * Return: A pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;

		return (new);
	}

	parent->left = new;
	new->left = NULL;
	return (new);
}
