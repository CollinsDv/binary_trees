#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree nodes has 0 or 2 child nodes
 *
 * @tree: tree root
 *
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (abs(left - right) > 0)
		return (0);
	return (1);
}
