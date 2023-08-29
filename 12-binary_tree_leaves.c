#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	else
	{
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
		if (tree->parent != NULL)
			if (tree->left == NULL && tree->right == NULL)
				return (count + 1);
		return (count);
	}
}
