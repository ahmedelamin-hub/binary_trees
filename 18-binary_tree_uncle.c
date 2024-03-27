#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Description: Finds the uncle of a given node. If the node, its parent, or
 * its grandparent is NULL, returns NULL. Otherwise, it returns the pointer to
 * the uncle node. The uncle of a node is the sibling of the node's parent.
 * Return: Pointer to the uncle node, or NULL if none exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
