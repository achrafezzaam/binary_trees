#include "binary_trees.h"
/**
 * binary_tree_postorder - Apply a function to the nodes in a post-order fation
 * @tree: Pointer to the root node of the binary tree
 * @func: The function to apply
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
