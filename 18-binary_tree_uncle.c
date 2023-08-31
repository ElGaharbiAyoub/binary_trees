#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: node to find uncle of
 * Return: pointer to uncle if not NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
		return (binary_tree_sibling(node->parent));

	return (NULL);
}
