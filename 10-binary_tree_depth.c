#include "binary_trees.h"

/**
 *binary_tree_depth -measures depth of tree
 *@tree: pointer to the root node
 *Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_right_branch;
	size_t depth_left_branch;

	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right)
	{
		return (0);
	}
	depth_left_branch = binary_tree_depth(tree->left) + 1;
	depth_right_branch = binary_tree_depth(tree->right) + 1;
	if (height_left_branch > height_right_branch)
	{
		return (depth_left_branch);
	}
	else
	{
		return (depth_right_branch);
	}
}
