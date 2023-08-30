#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: The node to check
 *
 * Return: The value 1 if the node is a leaf otherwise return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}

	return (0);
}
