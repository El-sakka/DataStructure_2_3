#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;
};

Node* insert(Node *root, int data) {
	if (root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	} else if (data <= root->data)
		root->left = insert(root->left, data);
	else
		root->right = insert(root->right, data);
	return root;
}

void inOrder(Node *root) {
	if (root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void flipping(Node *node) {
	if (node == NULL) {
		return;
	} else {
		Node *temp;
		temp = node->left;
		node->left = node->right;
		node->right = temp;
		flipping(node->left);
		flipping(node->right);
	}
}

int main() {

	/*		2
	 	 1			4
	 	 	 	 3		5
	 */

	Node *root = NULL;
	root = insert(root, 2);
	root = insert(root, 1);
	root = insert(root, 4);
	root = insert(root, 3);
	root = insert(root, 5);
	//root = insert(root,2);

	inOrder(root);
	flipping(root);
	cout<<"\n";
	inOrder(root);

	return 0;
}
