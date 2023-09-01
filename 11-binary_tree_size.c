#include "binary_trees.h"
/**
 * binary_tree_size - Give the size of a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (size + 1);
	}
	return (0);
}
