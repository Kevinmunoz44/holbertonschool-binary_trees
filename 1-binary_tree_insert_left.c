#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: - parameter to the parent
 * @value: - values to insert
 * Return: 0;
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *node;
binary_tree_t *t;

(void)value;

if (parent == NULL)
{
return (NULL);
}
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
if (parent->left != NULL)
{
parent->left = node;
node->parent = parent;
}
else
{
t = parent->left;
parent->left = node;
node->left = t;
node->parent = parent;
t->parent = node;
}
return (node);
}
