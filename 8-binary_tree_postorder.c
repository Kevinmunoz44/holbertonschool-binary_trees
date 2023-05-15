#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary
 * tree using post-order traversal
 * @tree: the binary tree
 * @func: the post-order traversal function
 * Return: the post-order traversal function
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
