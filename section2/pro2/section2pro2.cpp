//============================================================================
// Name        : section2pro2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;
};

Node* insert(Node *root,int data){
	if(root== NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data <= root->data)
		root->left = insert(root->left,data);
	else
		root->right = insert(root->right,data);
	return root;
}

bool identicat(Node *r1,Node *r2){
	if(r1==NULL && r2==NULL)
		return true;
	if(r1 ==NULL || r2 == NULL)
		return false;
	return (r1->data == r2->data && identicat(r1->left,r2->left) && identicat(r1->right,r2->right));
}

void pre_order(Node *root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);
}


bool is_subTree(Node *T1,Node *T2){
	if (T2 == NULL)
		return true;
	if(T1 == NULL)
		return false;
	if(identicat(T1,T2))
		return true;
	return (is_subTree(T1->left,T2)) || (is_subTree(T1->right,T2));
}

int main() {
	Node *root1= NULL;
	Node *root2=NULL;

	root1 = insert (root1,10);
	root1 = insert (root1,12);
	root1 = insert (root1,15);
	root1 = insert (root1,8);
	root1 = insert (root1,5);
	root1 = insert (root1,6);
	root1 = insert (root1,11);

	root2 = insert(root2,8);
	root2 = insert(root2,5);
	root2 = insert(root2,6);

	pre_order(root1);
	cout<<"\n";
	pre_order(root2);
	cout<<"\n";

	(is_subTree(root1,root2))?cout<<"Tree 2 is subtree from T1":cout<<"Tree2 is Not Subtree form T1";
	return 0;
}
