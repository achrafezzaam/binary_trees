#include "binary_trees.h"
/**
 *
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
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recursive_full(tree));
}
