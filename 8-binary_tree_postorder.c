#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: is a pointer to the root node of the tree to travers
 * @func:  is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
  if (!tree || !func)
	{
		return;
	}
  func(tree->n);
  binary_tree_postorder(tree->right, func);
  binary_tree_postorder(tree->left, func);
}
