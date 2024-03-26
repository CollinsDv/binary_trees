#include "binary_trees.h"

/**
 * binary_tree_nodes - print number of nodes with at least 1 child
 *
 * @tree: root node
 *
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (left + right + 1);
}
