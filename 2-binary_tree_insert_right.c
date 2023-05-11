#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent node
 * @value: the value
 * Return: 0;
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
binary_tree_t *t;

if (parent == NULL)
{
return (NULL);
}

node = malloc(sizeof(binary_tree_t));

if (node == NULL)
{
return (NULL);
}
node->n = value;
node->left = NULL;
node->right = NULL;

if (parent->right == NULL)
{
parent->right = node;
node->parent = parent;
}
else
{
t = parent->right;
parent->right = node;
node->right = t;
node->parent = parent;
t->parent = node;
}
return (node);
}
