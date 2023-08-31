#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if tree is NULL, otherwise balance factore of a binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if the tree is NULL, otherwise height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_height;
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		tree_height = 1 + left_height;
	}
	else
	{
		tree_height = 1 + right_height;
	}

	return (tree_height);
}
