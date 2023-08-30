#include "binary_trees.h"
/**
 * binary_tree_uncle - Give the uncle node of node
 * @node: The node to get the uncle of
 *
 * Return: The pointer of the uncle node or NULL if it doesn't exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
