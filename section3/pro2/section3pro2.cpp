#include <bits/stdc++.h>
using namespace std;
/*
struct Node {
	char data;
	Node *left = NULL;
	Node *right = NULL;
};

Node* GetNewNode(char data) {
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;

}

void preOrder(Node *root) {
	if (root == NULL)
		return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(Node *root) {
	if (root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
void postOrder(Node *root) {
	if (root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}*/

int search(char arr[], char x, int n) {
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

void printPostOrder(char in[], char pre[], int n) {
	int root = search(in, pre[0], n);

	if (root != 0)
		printPostOrder(in, pre + 1, root);

	if (root != n - 1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);

	cout << pre[0] << " ";
}

// wrong
int main() {

/*
	Node *root = GetNewNode('A');
	root->right = GetNewNode('C');
	root->left = GetNewNode('B');
	root->left->left = GetNewNode('F');
	root->left->right = GetNewNode('G');
*/

	/*
	 preOrder(root);
	 cout << "\n";
	 inOrder(root);
	 cout << "\n";
	 postOrder(root);
	 */

	char pre[] = "ABFGC";
	char in[] = "FGBCA";
	int n = sizeof(in)/sizeof(in[0]);
	printPostOrder(in, pre,n+1);

	return 0;
}
