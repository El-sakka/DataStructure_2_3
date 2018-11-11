#include <bits/stdc++.h>
using namespace std;

struct Node {
	char data;
	Node *left;
	Node *right;
};

stack<Node*> st;
bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
		return true;
	return false;
}

Node* GetNewNode(int v) {
	Node *temp = new Node();
	temp->left = temp->right = NULL;
	temp->data = v;
	return temp;
}

Node* initTree(char postfix[]) {

	Node *oprand, *opr1, *opr2;

	for (int i = strlen(postfix) - 1; i >= 0; i--) {
		// is oprand push it into stack
		if (!isOperator(postfix[i])) {
			oprand = GetNewNode(postfix[i]);
			st.push(oprand);
		} else {
			// operator
			oprand = GetNewNode(postfix[i]);
			opr1 = st.top();
			st.pop();
			opr2 = st.top();
			st.pop();

			oprand->left = opr1;
			oprand->right = opr2;

			st.push(oprand);
		}
	}

	oprand = st.top();
	st.pop();
	return oprand;
}

void inOrder(Node *t) {
	if (t == NULL)
		return;

	inOrder(t->left);
	cout << t->data << " ";
	inOrder(t->right);

}

int call(Node *node) {

	bool ch;
	ch = isOperator(node->data);

	if (ch == false) {
		cout << "Error ya m3lm \n";

	} else {
		if (node->data == '+')
			return call(node->left) + call(node->right);
		if (node->data == '-')
			return call(node->left) - call(node->right);
		if (node->data == '*')
			return call(node->left) * call(node->right);
		if (node->data == '/')
			return call(node->left) / call(node->right);
	}
}

int main() {
	char postfix[] = "+3*4/82";
	Node *t = initTree(postfix);
	cout << "expresstion is : ";
	inOrder(t);
	cout << "\n";

	inOrder(st.top());
	//int val = call(st.top());
	//cout << "value :" << val << "\n";

	return 0;
}
