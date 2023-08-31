#include "binary_trees.h"


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return (NULL);

    if (first->parent != second->parent || first != second->parent)
        if (first != second->parent && second ->)
            binary_trees_ancestor(first, second->parent);
        else
            return (second->parent);
        if 


    return (second->parent);
}
