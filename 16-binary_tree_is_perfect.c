#include "binary_trees.h"

/**
 * depth - Measures the depth leftmost node
 * @node: Pointer to the root node
 *
 * Description: travels down the left child nodes
 * is encountered, counting the depth as it progresses.
 * Return: The depth of the leftmost node.
 */
static size_t depth(const binary_tree_t *node)
{
	size_t d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - Recursively checcks perfect tree
 * @tree: Pointer curr nod
 * @d: The depth of tree left
 * @level: Current level in the tree
 *
 * Description: Checks if all leaves same depth
 * Return: 1 if the subtree is perfect, 0 otherwise.
 */
static int is_perfect(const binary_tree_t *tree, size_t d, size_t level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (d == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, d, level + 1) && is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: Utilizes a helper funt for perfection
 * Return: 1 if the tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d = depth(tree);

	return (is_perfect(tree, d, 0));
}
