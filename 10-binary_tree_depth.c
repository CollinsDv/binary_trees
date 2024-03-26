#include "binary_trees.h"

/**
 * binary_tree_depth - gets depth of a node
 *
 * @tree: node of interest
 *
 * Return: node depth size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (-1);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
