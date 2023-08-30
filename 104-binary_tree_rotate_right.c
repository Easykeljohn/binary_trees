#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a rigth-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *auxl, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		tmp = tree->left->right;
		auxl = tree->left;
		auxl->parent = tree->parent;
		auxl->right = tree;
		tree->parent = auxl;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;
		return (auxl);
	}
	return (NULL);
}
