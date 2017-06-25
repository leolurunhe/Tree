#include "tree.h"
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

tree_t::~tree_t()
{
		if(root!=nullptr)	
				delete root;
}

int tree_t::elt()
{
		return root->elt;
}

tree_t tree_t::left()
{
		return tree_t(root->left);
}

tree_t tree_t::right()
{
		return tree_t(root->right);
}

treenode* tree_t::getnode()
{		
		return root;
}

bool tree_t::isEmpty()
{
		return root==nullptr;
}



treenode* create_root(int a)
{
		treenode* node=new treenode;
		node->elt=a;
		return node;
}

treenode* create_left(treenode* root,treenode* left_tree)
{
		root->left=left_tree;
		return root;
}

treenode* create_right(treenode* root,treenode* right_tree)
{
		root->right=right_tree;
		return root;
}

string in_order(tree_t tree)
{
		if(tree.isEmpty())
				return "";
		else
				return in_order(tree.left())+to_string(tree.elt())+in_order(tree.right());
}
