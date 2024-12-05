#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node, its parent, or its grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Get the grandparent node */
	binary_tree_t *grandparent = node->parent->parent;

	/* Check if the parent is the left child of the grandparent */
	if (node->parent == grandparent->left)
		return (grandparent->right); /* Uncle is the right child */

	/* Otherwise, parent is the right child, uncle is the left child */
	return (grandparent->left);
}
