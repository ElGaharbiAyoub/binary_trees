#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * printCurrentLevel - Print nodes at a specific level of the tree.
 *
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to print the node's value.
 * @level: The current level being printed.
 */
void printCurrentLevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree || !func)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printCurrentLevel(tree->left, func, level - 1);
		printCurrentLevel(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - does function using levelorder
 * @tree: binary tree
 * @func: function to do in preorder
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, lvl = 0;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	while (lvl <= height)
	{
		printCurrentLevel(tree, func, ++lvl);
	}
}
