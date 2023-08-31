#include "binary_trees.h"
#include "9-binary_tree_height.c"


void printCurrentLevel(const binary_tree_t *tree, void (*func)(int), int level) {
    if (!tree)
        return;
    if (level == 1)
        func(tree->n);
    else if (level > 1) {
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
    int height, level;

	if (!tree || !func)
		return;
    height = binary_tree_height(tree);
	while (level <= height)
		printCurrentLevel(tree, func, ++level);
}
