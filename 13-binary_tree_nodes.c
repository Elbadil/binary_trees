#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: (0) if tree is NULL, otherwise the counts of nodes at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node;
	size_t right_node;
	size_t tree_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		tree_nodes++;

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);


	return (tree_nodes + right_node + left_node);
}
