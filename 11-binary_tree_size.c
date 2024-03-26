#include "binary_trees.h"

/**
 * binary_tree_size - determines the size of a tree
 *
 * @tree: root node of a tree
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total, lsize, rsize;

	if (tree == NULL)
		return (0);

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	total = lsize + rsize + 1;

	return (total);
}
