#include "binary_trees.h"

/**
 * binary_tree_size - binary tree size
 * @tree: binary tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t LS, RS;

	if (!tree)
		return (0);

	LS = binary_tree_size(tree->left);
	RS = binary_tree_size(tree->right);
	return (LS + RS + 1);

}
