#include "binary_trees.h"
/**
 * binary_tree_sibling - Give the sibling value of a node
 * @node: The node to get the sibling of
 *
 * Return: The pointer of the sibling node or NULL if the node doesn't exist
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
