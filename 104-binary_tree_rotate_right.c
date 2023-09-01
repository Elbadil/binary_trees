#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the node to rotate
 * Return: Pointer to the new root node of the tree once rotated
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;
	binary_tree_t *temp;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new_root = tree->left;
	temp = new_root->right;

	new_root->parent = tree->parent;
	tree->left = temp;

	new_root->right = tree;
	tree->parent = new_root;

	if (temp != NULL)
		temp->parent = tree;

	return (new_root);
}
