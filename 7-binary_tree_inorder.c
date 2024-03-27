#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree using in-order traversal
 * @tree: Point  node of the tree to traverse
 * @func: Point to a func
 * Description: tree func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /* Traverse left subtree */
	func(tree->n); /* Process current node */
	binary_tree_inorder(tree->right, func); /* Traverse right subtree */
}
