#ifndef _TREE_H
#define _TREE_H

struct treenode
{
		int elt;
		treenode* left;
		treenode* right;
};

class tree_t
{
		private:
				treenode* root;
		public:
				tree_t():root(nullptr){}
				tree_t(treenode* tree_node):root(tree_node){}
				~tree_t();
				int elt();
				tree_t left();
				tree_t right();
				bool isEmpty();
				treenode* getnode();
};



#endif
