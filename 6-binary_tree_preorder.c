#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree/pre-order traversal
 * @tree: Pointer
 * @func: Pointer to a funct
 * Description: pointed by `func` is called with the value
 * of each node. If tree or func is null
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
