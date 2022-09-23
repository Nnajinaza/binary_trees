#include "binary_trees.h"

/**
 * binary_tree_size - function to measure the size of a binary tree
 * @tree: pointer to the tree
 *
 * Return: Total nos of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total, left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	total = left + right + 1;

	return (total);
}
