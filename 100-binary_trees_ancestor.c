#include "binary_trees.h"

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
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent || (!first->parent && second->parent))
		return ((binary_tree_t *)first);

	if (second == first->parent || (!second->parent && first->parent))
		return ((binary_tree_t *)second);

	return (binary_trees_ancestor(first->parent, second->parent));
}
