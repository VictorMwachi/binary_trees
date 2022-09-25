#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: must return a pointer to the created node,
 * or NULL on failure or if parent is NUL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (!parent)
	{
		return (NULL);
	}
	new_node->n = value;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		new_node->parent = parent;
		parent->left = new_node;
		new_node->right = NULL;
	}
	return (new_node);
}
