#include "binary_trees.h"
/**
 *
 */
int tree_height(const binary_tree_t *tree)
{
	int lbranch = 0, rbranch = 0;

	if (tree == NULL)
		return (0);
	else
	{
		lbranch = tree_height(tree->left);
		rbranch = tree_height(tree->right);

		if (lbranch > rbranch)
			return (lbranch + 1);
		else
			return (rbranch + 1);
	}
}

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (tree_height(tree->left) - tree_height(tree->right));
	return (0);
}
