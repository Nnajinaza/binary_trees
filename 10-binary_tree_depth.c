#include "binary_trees.h"

/**
 * binary_tree_depth - function that measure the depth of a node
 * @tree: pointer to the node
 *
 * Return: On success the depth, On failure NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}

	return (depth);
}
