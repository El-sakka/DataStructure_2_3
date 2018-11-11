#include <bits/stdc++.h>
#include "StackQueue.h"

using namespace std;

int main() {
	StackQueue s;
	int val, size;
	cout << "enter size of stack :";
	cin >> size;
	cout << "\n enter your elements :";
	for (int i = 0; i < size; i++) {
		cin >> val;
		s.push(val);
	}
	cout << s.top() << endl;
	s.pop();
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	return 0;
}
