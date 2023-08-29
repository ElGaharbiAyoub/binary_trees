#include "binary_trees.h"

/**
 * create_node - Creates a new binary tree node with the given value.
 *
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *create_node(int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

/**
 * binary_tree_insert_left - Inserts a new node as
 * the left child of a parent node.
 *
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!(parent))
		return (NULL);
	new = create_node(value);
	new->parent = parent;
	if (!new)
		return (NULL);

	if (!parent->left)
		parent->left = new;
	else
	{
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
	}
	return (new);

}
