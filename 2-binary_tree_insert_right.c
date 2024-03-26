#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a binary tree node as the right of another
 *
 * Description: if parent is NULL, return NULL
 *		if parent->right, newnode will take it and newnode will be
 *		the new parent->right
 *
 * @parent: parent to the node to create
 * @value: value to populate new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
