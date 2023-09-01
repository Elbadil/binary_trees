#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the node to rotate
 * Return: Pointer to the new root node of the tree once rotated
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    binary_tree_t *new_root = tree->left;
    binary_tree_t *temp = new_root->right;

    if (tree == NULL || tree->left == NULL)
}