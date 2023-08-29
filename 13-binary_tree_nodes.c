#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	else
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
			return (count + 1);
		return (count);
	}
}
