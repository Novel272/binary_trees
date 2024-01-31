#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is leaf of binary tree.
 * @node: pointer to node to check.
 *
 * Return: If node is leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
