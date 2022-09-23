#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert node as the left child
 * @parent: pointer to the node to insert the left child
 * @value: value of the new node
 *
 * Return: On success a pointer to the new node, On failure NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (parent->right == NULL)
		{
			newnode->parent = parent;
			parent->right = newnode;
		}
		else
		{
			temp = parent->right;
			parent->right = newnode;
			newnode->parent = parent;
			newnode->right = temp;
			temp->parent = newnode;
		}
	}

	return (newnode);
}
