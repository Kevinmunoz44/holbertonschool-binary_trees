#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 *
 * @parent: Pointer to parent of node to create
 * @value: Value to insert in the desired node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *node;
binary_tree_t *t;

if (parent == NULL)
return (NULL);

node = malloc(sizeof(binary_tree_t));

if (node == NULL)
return (NULL);

node->n = value;
node->left = NULL;
node->right = NULL;

if (parent->left == NULL)
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
