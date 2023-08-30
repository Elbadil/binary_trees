#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if tree is NULL, otherwise balance factore of a binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_node;
	size_t right_node;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) || (tree->left == NULL && tree->right != NULL))
		return (-1);

	if (tree->left != NULL && tree->right != NULL)
		return (2);

	left_node = binary_tree_balance(tree->left);
	right_node = binary_tree_balance(tree->right);

	return (right_node + left_node);
}
