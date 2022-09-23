#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the nodes
 * @tree: pointer to the root node of the tree
 * Return: Nos of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->parent == NULL)
		return (total + 1);
	return (total);
}
