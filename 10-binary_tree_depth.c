#include "binary_trees.h"
/**
 * binary_tree_depth - Give the depth of a node in a binary tree
 * @tree: The node to check
 *
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	if
	{
		depth = binary_tree_depth(tree->parent);

		return (depth + 1);
	}
}
