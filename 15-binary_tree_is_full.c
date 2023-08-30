#include "binary_trees.h"
/**
 * recursive_full - Check if a binary tree is full
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The value 1 if the binary tree is full otherwise 0
 */
int recursive_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    (recursive_full(tree->left) == 0) ||
		    (recursive_full(tree->right) == 0))
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - Does the same as the recursive_full function plus
 *			 check if the tree value is NULL
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The value 1 if the binary tree is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursive_full(tree));
}
