#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if tree is NULL, (1) if the binary tree is full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	/* If node has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has two children */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* if node has only one child */
	return (0);
}
