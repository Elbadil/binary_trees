#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if tree is NULL, (1) if the binary tree is perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int left_full;
	int right_full;

	if (tree == NULL)
		return (0);

	/* checking for tree height */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* checking if tree is full */
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	return (left_height == right_height && left_full == right_full);
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

	if (tree == NULL)
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
