//============================================================================
// Name        : section2pro3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

Node* insert(Node *root,int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = insert(root->left,data);
	else
		root->right = insert(root->right,data);
	return root;
}

void PrintRange(Node *root,int k1,int k2){
	if(root == NULL)
		return;

	if(k1 < root->data)
		PrintRange(root->left,k1,k2);

	if(k1 <= root->data && k2>= root->data)
		cout<<root->data<<" ";

	if(k2 > root->data)
		PrintRange(root->right,k1,k2);
}


void pre_order(Node *root){
	if(root== NULL)
		return;
	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);
}

int main() {

	Node *root = NULL;
	root = insert(root,5);
	root = insert(root,3);
	root = insert(root,7);
	root = insert(root,2);
	root = insert(root,4);
	root = insert(root,9);
	root = insert(root,1);
	root = insert(root,8);
	root = insert(root,10);

	//pre_order(root);
	cout<<"[ ";
	PrintRange(root,3,6);
	cout<<"]\n[";
	PrintRange(root,8,15);
	cout<<"]\n[";
	PrintRange(root,6,6);
	cout<<"]\n";
	return 0;
}
