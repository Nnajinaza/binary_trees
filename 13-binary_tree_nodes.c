#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the nodes
 * @tree: pointer to the root node of the tree
 * Return: Nos of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, total;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	total = left + right;

	if (tree->left != NULL || tree->right != NULL)
		return (total + 1);
	return (total);
}
