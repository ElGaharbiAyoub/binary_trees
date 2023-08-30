#include "binary_trees.h"
/**
 * binary_tree_height - get height from binary tree
 * @tree: tree to search
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t LH, RH;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	LH = binary_tree_height(tree->left);
	RH = binary_tree_height(tree->right);

	if (LH > RH)
		return (LH + 1);
	return (RH + 1);
}
