#include "binary_trees.h"
/**
 * binary_tree_inorder - Apply a function to the nodes in a in-order fation
 * @tree: Pointer to the root node of the binary tree
 * @func: The function to apply
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
