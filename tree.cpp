#include "tree.h"
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

tree_t::~tree_t()
{
		if(root!=nullptr)	
				delete []root;
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
		return getnode()==nullptr;
}

tree_t tree_make(int elt,tree_t left,tree_t right)
{
		treenode *node=new treenode;
		node->elt=elt;
		node->left=left.getnode();
		node->right=right.getnode();
		return tree_t(node);
}

tree_t tree_make(){
		return tree_t(nullptr);
}

string in_order(tree_t tree,string a)
{
	if(tree.isEmpty())
			return a;
	else
			return in_order(tree.left(),a)+to_string(tree.elt())+in_order(tree.right(),a);
}

int main(int argc, char* argv[]){
		tree_t a;
		a=tree_make(1,tree_make(2,tree_make(),tree_make()),tree_make());
		cout<<a.isEmpty()<<endl;
		tree_t b=tree_make();
		cout<<b.isEmpty()<<endl;
		tree_t c=a.left();
		cout<<c.isEmpty()<<endl;
		cout<<c.elt()<<endl;
	//	string c="";
		//cout<<in_order(a,c)<<endl;
}
