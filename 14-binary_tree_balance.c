#include "binary_trees.h"
/**
 * tree_height - Give the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The height of the binary tree
 */
int tree_height(const binary_tree_t *tree)
{
	int lbranch = 0, rbranch = 0;

	if (tree)
	{
		lbranch = tree_height(tree->left);
		rbranch = tree_height(tree->right);

		if (lbranch > rbranch)
			return (lbranch + 1);
		else
			return (rbranch + 1);
	}
	return (0);
}
/**
 * binary_tree_balance - Give the balance factor of a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (tree_height(tree->left) - tree_height(tree->right));
	return (0);
}
