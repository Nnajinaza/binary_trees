#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves
 * @tree: pointer to the node
 *
 * Return: nos of leave
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, total;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	total = left + right;

	return (total);
}
