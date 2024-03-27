#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, int height);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = tree_height(tree);

	return (is_perfect(tree, height));
}


int is_perfect(const binary_tree_t *tree, int height)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if ((int)(binary_tree_depth(tree)) == height)
			return (1);
		return (0);
	}
	left = is_perfect(tree->left, height);
	right = is_perfect(tree->right, height);

	if (abs(left - right) > 0)
		return (0);
	return (1);
}
/**
 * binary_tree_height - finds the height/max depth of a tree
 *
 * @tree: pointer to root node
 *
 * Return: integer height
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
