#include "binary_trees.h"
/**
 * binary_tree_nodes - Give the number of nodes in a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
			return (count + 1);
		return (count);
	}
}
