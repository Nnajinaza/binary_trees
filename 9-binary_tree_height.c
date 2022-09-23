#include "binary_trees.h"

/**
 * bt_find_height - function to calculate height of binary tree
 * @tree: pointer to the tree
 *
 * Return: On success height on failure NULL
 */
size_t bt_find_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = bt_find_height(tree->left);
	right_h = bt_find_height(tree->right);

	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_height - function to check the height
 * @tree: pointer to the tree
 *
 * Return: On success heigth
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = bt_find_height(tree);
	return (height - 1);
}
