#include "binary_trees.h"
int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - checks the balance factor of a tree
 *
 * @tree: root of tree
 *
 * Return: the absolute difference btn left and right node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}

/**
 * tree_height - utility func
 *		 finds the height/max depth of a tree
 *
 * @tree: pointer to root node
 *
 * Return: integer height
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}
