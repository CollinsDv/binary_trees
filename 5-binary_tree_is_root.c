#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is the root or not
 *
 * @node: pointer to node
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* if node is the root */
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
