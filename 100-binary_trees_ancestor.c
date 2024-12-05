#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if no common ancestor
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	/* Traverse up the tree from first, checking for a common ancestor */
	const binary_tree_t *temp_first = first;
	const binary_tree_t *temp_second;

	while (temp_first != NULL)
	{
		temp_second = second;
		while (temp_second != NULL)
		{
			if (temp_first == temp_second)
				return ((binary_tree_t *)temp_first);
			temp_second = temp_second->parent;
		}
		temp_first = temp_first->parent;
	}
	return (NULL);
}
