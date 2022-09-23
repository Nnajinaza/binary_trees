#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is root
 * @node: pointer to the node to check
 *
 * Return: On success 1, On failure 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
