#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL if allocation fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;          /* Set the value */
	new_node->parent = parent;    /* Set the parent pointer */
	new_node->left = NULL;        /* No left child */
	new_node->right = NULL;       /* No right child */

	return (new_node);
}
