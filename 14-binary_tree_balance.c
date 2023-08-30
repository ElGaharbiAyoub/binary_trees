#include "binary_trees.h"

/**
 * binary_tree_balance - checks the balance of a tree
 * @tree: binary tree
 *
 * Return: size of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int LH = 0, RH = 0;
	if (!tree)
		return (0);

	if (tree->left)
		LH = binary_tree_height(tree->left) + 1;
	if (tree->right)
		RH = binary_tree_height(tree->right) + 1;
	return (LH - RH);
}
