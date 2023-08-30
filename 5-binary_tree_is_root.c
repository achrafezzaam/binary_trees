#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if a node is a root node
 * @node: The node to check
 *
 * Return: The value 1 if the node is a root node otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
