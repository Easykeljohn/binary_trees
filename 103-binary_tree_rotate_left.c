#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *auxl, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		tmp = tree->right->left;
		auxl = tree->right;
		auxl->parent = tree->parent;
		auxl->left = tree;
		tree->parent = auxl;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;
		return (auxl);
	}
	return (NULL);
}
