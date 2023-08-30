#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t LC, RC;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		LC = binary_tree_leaves(tree->left);
		RC = binary_tree_leaves(tree->right);
		return (LC + RC);
	}
	else
		return (1);
}
