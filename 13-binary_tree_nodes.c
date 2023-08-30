#include "binary_trees.h"

/**
  * binary_tree_nodes - counts the number of nodes in a tree
  * @tree: binary tree
  * Return: number of nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t LC = 0, RC = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		LC = binary_tree_nodes(tree->left);
		RC = binary_tree_nodes(tree->right);
		return (LC + RC + 1);
	}
	else
		return (0);
}
