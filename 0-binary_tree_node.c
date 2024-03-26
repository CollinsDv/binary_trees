#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 *
 * @parent: parent to the node to create
 * @value: value to populate new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(*newnode));

	if (newnode == NULL)
	{
		printf("malloc error\n");
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = newnode->left = newnode->right = NULL;
	/* defining child node */
	if (parent != NULL)
		newnode->parent = parent;

	return (newnode);
}
