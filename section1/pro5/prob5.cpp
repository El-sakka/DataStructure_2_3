//============================================================================
// Name        : prob5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool AllPair(char p1, char p2) {
	if (p1 == '(' && p2 == ')')
		return true;
	else if (p1 == '{' && p2 == '}')
		return true;
	else if (p1 == '[' && p2 == ']')
		return true;
	else if (p1 == '/' && p2 == '/')
		return true;
	else if (p1 == '*' && p2 == '*')
		return true;
	return false;
}

bool chechBalance(string exp) {
	stack<char> s;
	for (int i = 0; i < exp.size(); i++) {
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[' || exp[i] == '/'
				|| exp[i] == '*')
			s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'
				|| exp[i] == '/' || exp[i] == '*') {
			if (s.empty() || !AllPair(s.top(), exp[i]))
				return false;
			else
				s.pop();
		}
	}
	return (s.empty()) ? true : false;
}

/*
 bool Stack(string str) {
 stack<char> s1;
 bool b = true;
 for (int i = 0; i < sizeof(str); i++) {
 if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
 s1.push(str[i]);

 } else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {

 if (str[i] == ')' && s1.top() == '(') {
 s1.pop();

 }

 else if (str[i] == ']' && s1.top() == '[') {
 s1.pop();
 }

 else if (str[i] == '}' && s1.top() == '{') {
 s1.pop();

 } else
 b = false;

 } else if (str[i] == '/') {
 if (str[i + 1] == '*') {
 s1.push(str[i]);
 s1.push(str[i + 1]);
 continue;
 }
 } else if (str[i] == '*') {
 char c1, c2;
 if (str[i + 1] == '/') {
 c1 = s1.top();
 c2 = s1.top();
 s1.pop();
 s1.pop();
 if (c1 = '*', c2 = '/')
 continue;
 else
 b = false;

 }
 }

 }
 return b;
 }
 */

int main() {
	string s;
	cout << "please enter your string " << endl;
	cin >> s;
	/*bool b;
	b = Stack(s);
	if (b == true)
		cout << "valid\n";
	else
		cout << "in valid\n";*/
	chechBalance(s)?cout<<"valid":cout<<"not valid";
	return 0;
}
