#ifndef _BINARY_SEARCH_TREE_H_

#include "Common.h"

#define _BINARY_SEARCH_TREE_H_

struct tree_node;
typedef int ElementType;
typedef struct tree_node *position;
typedef struct tree_node *binary_search_tree;

binary_search_tree insert(binary_search_tree tree, ElementType value);
void delete(binary_search_tree tree, ElementType value);
#endif

struct tree_node{
	ElementType value;
	position left;
	position right;
	int height;
};