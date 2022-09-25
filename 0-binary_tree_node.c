#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as the left child of anode
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: must return a pointer to the created node,
 * or NULL on failure or if parent is NUL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
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
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
