#include "binary_trees.h"

/**
 * binary_tree_levelorder - does function using levelorder
 * @tree: binary tree
 * @func: function to do in preorder
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
