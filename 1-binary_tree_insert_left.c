#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts new node as the left-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value of the new node created
 * Return: Pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;

	/* if parent already has a left-child */
	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node->left = temp;
		temp->parent = new_node;
	}

	/* if parent has no left-child */
	else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;

	return (new_node);
}
