#include "binary_trees.h"

/**
 * binary_tree_postorder - binarypost-order traversal
 * @tree: Poit node
 * @func: Poiter
 *
 * Description: If  NULL, the function does nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
