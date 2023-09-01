#include "binary_trees.h"
/**
 * binary_tree_height - Give the height of a binary tree
 * @tree: Pointer the root of the binary tree to check
 *
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree)
	{
		lheight = binary_tree_height(tree->left);
		rheight = binary_tree_height(tree->right);
		if (lheight > rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
	return (0);
}
