#include "binary_trees.h"

/**
 * binary_tree_postorder - binary tree using post-order traversal
 * @tree: Poit node of the tree to traverse
 * @func: Poiter to a function
 *
 * Description: If  NULL, the function does nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /* Traverse left subtree */
	binary_tree_postorder(tree->right, func); /* Traverse right subtree */
	func(tree->n); /* Process current node */
}
