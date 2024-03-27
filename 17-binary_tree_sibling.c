#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling of the node
 *
 * @node: node of interest
 *
 * Return: poiter to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node || node->parent->right != NULL)
		return (node->parent->right);
	else if (node->parent->right == node || node->parent->left != NULL)
		return (node->parent->left);
	else
		return (NULL);
}
