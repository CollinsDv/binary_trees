#include "binary_trees.h"

/**
 * binary_tree_height - finds the height/max depth of a tree
 *
 * @tree: pointer to root node
 *
 * Return: integer height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_height, left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		tree_height = left_height + 1;
	else
		tree_height = right_height + 1;

	return (tree_height);
}
