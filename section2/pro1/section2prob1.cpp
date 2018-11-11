//============================================================================
// Name        : section2prob1.cpp
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

Node* insert(Node *root , int data){
	if(root == NULL){
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

int height(Node *root){
	if(root==NULL)
		return 0;
	else
		return 1+max(height(root->left),height(root->right));
}


bool is_balance(Node *root){
	int lh, rh;
	if(root == NULL)
		return 1;
	lh = height(root->left);
	rh = height(root->right);

	if(abs(lh-rh)<=1 && is_balance(root->left) && is_balance(root->right))
		return 1;
	else
		return 0;
}

int main() {



	return 0;
}
