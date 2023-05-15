#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: the tree
 * @func: the function
 * 
 * Return: 0; 
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

    if (tree == NULL || func == NULL) 
    {
        return;
    }

    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
