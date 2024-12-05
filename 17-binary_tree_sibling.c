#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling for
 *
 * Return: A pointer to the sibling node, or NULL if the node is NULL, 
 *         or the node has no sibling (i.e., no parent or only one child)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);  /* No sibling if node or parent is NULL */

	/* If the node is the left child, return the right child of the parent */
	if (node == node->parent->left)
		return (node->parent->right);

	/* If the node is the right child, return the left child of the parent */
	return (node->parent->left);
}
