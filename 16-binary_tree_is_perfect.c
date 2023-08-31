#include "binary_trees.h"

/**
 * get_depth - get depth from binary tree
 * @tree: tree to search
 * Return: depth
 */

int get_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
/**
  * is_perfect - counts the leaves in a binary tree
  * @tree: binary tree
  * @dpt: depth of left most side
  * @level: depth of a chain
  * Return: 1 if it is perfect 0 if not
  */
int is_perfect(const binary_tree_t *tree, int dpt, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
	{
		return (dpt == (level + 1));
	}

	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, dpt, level + 1) &&
			is_perfect(tree->right, dpt, level + 1));
}
/**
 * binary_tree_is_perfect - finds if tree is full or not
 * @tree: root node
 * Return: 1 if full 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = get_depth(tree);
	return (is_perfect(tree, depth, 0));
}
