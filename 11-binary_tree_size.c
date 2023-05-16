#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0; 
	size_t sizeRight = 0; 
	size_t sizeLeft = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sizeLeft = binary_tree_size(tree->left);
		sizeRight = binary_tree_size(tree->right);
		size = sizeRight + sizeLeft + 1;
	}
	return (size);
}
