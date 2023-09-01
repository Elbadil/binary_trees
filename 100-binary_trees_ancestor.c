#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node to be compared to
 * @second: Pointer to the second node to be compared to
 * Return: Pointer to the lowest common ancestor, or NULL if there's none
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	const binary_tree_t *ancestor;
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	temp = first;
	while (temp != NULL)
	{
		ancestor = second;
		while (ancestor != NULL)
		{
			if (temp == ancestor)
				return ((binary_tree_t *)temp);
			ancestor = ancestor->parent;
		}
		temp = temp->parent;
	}

	return (NULL);
}
