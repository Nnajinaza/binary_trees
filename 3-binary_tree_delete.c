#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete an entire binary tree
 * @tree: pointer to the root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
