#include "binary_trees.h"

/**
 * binary_tree_insert_right -  Inserts node as the right-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value of the new node created
 * Return: Pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	/* if parent has a right-child */
	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node->right = temp;
		temp->parent = new_node;
	}

	/* if parent has no right-child */
	else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);
}
