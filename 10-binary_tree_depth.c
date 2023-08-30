#include "binary_trees.h"
/**
 * binary_tree_depth - get depth from binary tree
 * @tree: tree to search
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (!tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
