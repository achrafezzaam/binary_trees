#include "binary_trees.h"
/**
 * binary_tree_leaves - Give the number of leaves of a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if
	{
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
		if (tree->parent != NULL)
			if (tree->left == NULL && tree->right == NULL)
				return (count + 1);
		return (count);
	}
}
