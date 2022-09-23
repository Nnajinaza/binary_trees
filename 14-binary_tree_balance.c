#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure the balance
 * @tree: pointer to the node
 *
 * Return: the differnt between both sides of the node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, diff;

	if (tree == NULL)
		return (0);

	left = bt_find_height(tree->left);
	right = bt_find_height(tree->right);
	diff = left - right;

	return (diff);
}

/**
 * bt_find_height - function to check the height
 * @tree: pointer to the tree
 *
 * Return: On sucess height
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
