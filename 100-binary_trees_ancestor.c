#include "binary_trees.h"
#include "10-binary_tree_depth.c"
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
 * binary_trees_ancestor - Find lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if none is found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int first_d = get_depth(first);
	int second_d = get_depth(first);

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent || (!first->parent && second->parent))
		return ((binary_tree_t *)first);

	if (second == first->parent || (!second->parent && first->parent))
		return ((binary_tree_t *)second);
	if (first_d <= second_d)
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, second));

}
