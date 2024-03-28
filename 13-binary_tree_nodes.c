#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with least 1 child
 * @tree: Pointer to the root
 * Return: nodes with at least one child, or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
