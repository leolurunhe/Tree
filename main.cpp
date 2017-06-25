#include<iostream>
#include"tree.cpp"

using namespace std;

int main(int argc,char* argv[])
{				
		treenode* a[5];
		a[0]=create_root(1);
		a[1]=create_root(1);
		a[2]=create_root(4);
		a[3]=create_root(2);
		a[4]=create_root(3);
		a[1]=create_left(a[1],a[3]);
		a[1]=create_right(a[1],a[4]);
		a[0]=create_left(a[0],a[1]);
		a[0]=create_right(a[0],a[2]);
		tree_t tree=tree_t(a[0]);
		string inorder=in_order(tree);
		cout<<inorder<<endl;
}
