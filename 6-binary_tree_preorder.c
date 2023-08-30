#include "binary_trees.h"
/**
 * binary_tree_preorder - Apply a function to the nodes in a pre-order fation
 * @tree: Pointer to the root node of the binary tree
 * @func: The function to apply
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
