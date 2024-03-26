#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a binary tree node as the left of another
 *
 * Description: if parent is NULL, return NULL
 *		if parent->left, newnode will take it and newnode will be
 *		the new parent->left
 *
 * @parent: parent to the node to insert left child in
 * @value: value to populate new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
